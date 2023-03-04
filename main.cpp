#include <iostream>
#include "Token.h"
#include <fstream>

using namespace std;

struct Words{
    string token;

    Words* next;
    Words* previous;
};

Words *pointer = NULL, *head = NULL, *tail = NULL;

void sendToken(string sentence);
void buildTokensList(string token);

//All pronouns
bool findPronouns(char _char);
bool aPronouns(string state, char _char);
bool bPronouns(string state, char _char);
bool ePronouns(string state, char _char);
bool fPronouns(string state, char _char);
bool mPronouns(string state, char _char);
bool nPronouns(string state, char _char);
bool iPronouns(string state, char _char);
bool hPronouns(string state, char _char);
bool oPronouns(string state, char _char);
bool sPronouns(string state, char _char);
bool tPronouns(string state, char _char);
bool uPronouns(string state, char _char);
bool yPronouns(string state, char _char);
bool wPronouns(string state, char _char);
bool hasArticle(string state, char _char);
bool endRNouns();
int Token::index = 0;
int Token::prevTokenIndex = 0;
string Token::token = "";
string Token::prevToken = "";
//They very generous compared to the rest.

int main()
{
    string sentence;
    ifstream sentenceFile;
    sentenceFile.open("sentence_file.txt");

    if(sentenceFile.is_open()){
        while(getline(sentenceFile, sentence)){
            cout <<"A sentence: " << sentence << endl;
            if(sentence.length() > 0){
                sendToken(sentence);
            }else
            {
                cout << "Empty file." << endl;
            }
        }
        cout << "\n";
    }else
    {
        cout << "Failed to open a file." << endl;
    }

    /*cout << "Enter a sentence: ";
    cin >> sentence;*/

    pointer = head;

    while(pointer != NULL){
        Token::index = 0;
        Token::token = pointer->token;

        bool hasPronoun = findPronouns(tolower(Token::token.at(0)));
        bool hasPrevArticle = false;
        if(pointer->previous != NULL)
        {
           Token::prevToken = pointer ->previous ->token;
           hasPrevArticle = hasArticle("q0", Token::prevToken.at(0));
           Token::prevTokenIndex = 0;
        }
        //cout << "Previous token:" <<pointer->previous->token << endl;

        bool hasEndRNouns = endRNouns();
        bool hasUpper = isupper(Token::token.at(0));
        /*cout << pointer->token;

        if(hasPronoun){
            cout << " is a pronoun." << endl;
        }
        else if(isupper(Token::token.at(0))){
            cout<<" is a Noun."<<endl;
        }*/

        if(hasPronoun)
        {
            cout << pointer->token <<" is Pronoun."<<endl;
        }
        else if(hasEndRNouns || hasUpper)
        {
            cout << pointer->token<<" is Noun."<<endl;
        }
        else if(hasPrevArticle){
            cout << pointer->token<<" is Noun."<<endl;
        }

        pointer = pointer->next;
    }
    /*string sToken;
    const string delimeter = " ";

    if(sentence.find(delimeter)){
        sToken = sentence.substr(0, sentence.find(delimeter));
        sentence.erase(0, sentence.find(delimeter)+delimeter.length());
    }

    Token::token = sToken;

    cout << Token::token;
    */

    return 0;
}

void buildTokensList(string token){

    if(head == NULL && tail == NULL){
        pointer = new Words;
        pointer->token = token;
        pointer->next = NULL;
        pointer->previous = NULL;
        head = pointer;
        tail = pointer;
    } else
    {
        pointer = new Words;
        pointer->token = token;
        pointer->next = NULL;
        pointer->previous = tail;
        tail->next = pointer;
        tail = pointer;
    }
}

void sendToken(string sentence)
{
    string token = "";
    for(auto c : sentence)
        {
            if(c == ' ')
            {
                //cout << token<<endl;
                if(!token.empty())
                buildTokensList(token);
                token = "";
            }
            else
            {
                token = token + c;
            }
        }
        //cout<<token;
        buildTokensList(token);
}

bool findPronouns(char _char){
    switch(_char){
        case 'a': return (Token::index+1 == Token::token.length())? false: aPronouns("q1", Token::token.at(++Token::index));

        case 'b': return (Token::index+1 == Token::token.length())? false: bPronouns("q1", Token::token.at(++Token::index));

        case 'e': return (Token::index+1 == Token::token.length())? false: ePronouns("q39", Token::token.at(++Token::index));

        case 'f': return (Token::index+1 == Token::token.length())? false: fPronouns("q1", Token::token.at(++Token::index));

        case 'm': return (Token::index+1 == Token::token.length())? false: mPronouns("q35", Token::token.at(++Token::index));

        case 'n': return (Token::index+1 == Token::token.length())? false: nPronouns("q55", Token::token.at(++Token::index));

        case 'i': return (Token::index+1 == Token::token.length())? true: iPronouns("q59", Token::token.at(++Token::index));

        case 'h': return (Token::index+1 == Token::token.length())? false: hPronouns("q65", Token::token.at(++Token::index));

        case 'o': return (Token::index+1 == Token::token.length())? false: oPronouns("q135", Token::token.at(++Token::index));

        case 's': return (Token::index+1 == Token::token.length())? false: sPronouns("q156", Token::token.at(++Token::index));

        case 't': return (Token::index+1 == Token::token.length())? false: tPronouns("q181", Token::token.at(++Token::index));

        case 'u': return (Token::index+1 == Token::token.length())? false: uPronouns("q155", Token::token.at(++Token::index));

        case 'y': return (Token::index+1 == Token::token.length())? false: yPronouns("q126", Token::token.at(++Token::index));

        case 'w': return (Token::index+1 == Token::token.length())? false: wPronouns("q76", Token::token.at(++Token::index));

        default: return false;
    }

    return false;
}
