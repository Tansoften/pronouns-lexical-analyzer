#include <iostream>
#include "Token.h"

using namespace std;

bool bPronouns(string state, char _char){
    if(state == "q1"){
        switch(_char){
            case 'o': return (Token::index+1 == Token::token.length())? false :
            bPronouns("q2", Token::token.at(++Token::index));

            default: return false;
        }
    }else
    if(state == "q2"){
        switch(_char){
            case 't': return (Token::index+1 == Token::token.length())? false :
            bPronouns("q3", Token::token.at(++Token::index));

            default: return false;
        }
    }else
    if(state == "q3"){
        switch(_char){
            case 'h': return bPronouns("q4", Token::token.at(Token::index));

            default: return false;
        }
    }else
    if(state == "q4" && Token::index == (Token::token.length()-1)){
        return true;
    }
}
