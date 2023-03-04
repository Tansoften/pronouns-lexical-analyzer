#include <iostream>
#include "Token.h"

bool aPronouns(string state, char _char);
bool ePronouns(string state, char _char);

bool nPronouns(string state, char _char){
    if(state == "q55"){
        switch(_char){
            case 'a': return (Token::index+1 == Token::token.length())? false :
            nPronouns("q56", Token::token.at(++Token::index));

            case 'e': return (Token::index+1 == Token::token.length())? false :
            nPronouns("q57", Token::token.at(++Token::index));

            case 'o': return (Token::index+1 == Token::token.length())? false :
            nPronouns("q58", Token::token.at(++Token::index));

            default: return false;
        }
    }else
    if(state == "q56"){
        switch(_char){
            case 'u': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q19", Token::token.at(++Token::index));

            default: return false;
        }
    }else
    if(state == "q57"){
        switch(_char){
            case 'i': return (Token::index+1 == Token::token.length())? false :
            ePronouns("q43", Token::token.at(++Token::index));

            default: return false;
        }
    }else
    if(state == "q58"){
        switch(_char){
            case 'b': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q6", Token::token.at(++Token::index));

            case 'n': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q11", Token::token.at(++Token::index));

            case 'o': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q10", Token::token.at(++Token::index));

            case 't': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q13", Token::token.at(++Token::index));

            case 'u': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q19", Token::token.at(++Token::index));

            default: return false;
        }
    }
}
