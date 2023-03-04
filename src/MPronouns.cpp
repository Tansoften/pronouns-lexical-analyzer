#include <iostream>
#include "Token.h"

using namespace std;

bool aPronouns(string state, char _char);
bool hPronoun(string state, char _char);

bool mPronouns(string state, char _char){
    if(state == "q35"){
        switch(_char){
            case 'a': return (Token::index+1 == Token::token.length())? false :
            mPronouns("q38", Token::token.at(++Token::index));

            case 'e': return aPronouns("q12", Token::token.at(Token::index));

            case 'i': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q10", Token::token.at(++Token::index));

            case 'o': return (Token::index+1 == Token::token.length())? false :
            mPronouns("q36", Token::token.at(++Token::index));

            //    case 'y': return hPronoun("q30", Token::token.at(Token::index));

            default: return false;
        }
    }else
    if(state == "q36"){
        switch(_char){
            case 's': return (Token::index+1 == Token::token.length())? false :
            mPronouns("q37", Token::token.at(++Token::index));

            default: return false;
        }
    }else
    if(state == "q37"){
        switch(_char){
            case 't': return aPronouns("q22", Token::token.at(Token::index));

            default: return false;
        }
    }else
    if(state == "q38"){
        switch(_char){
            case 'n': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q8", Token::token.at(++Token::index));

            default: return false;
        }
    }
}
