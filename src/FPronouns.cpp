#include <iostream>
#include "Token.h"

using namespace std;

bool fPronouns(string state, char _char){
    if(state == "q1"){
        switch(_char){
            case 'e': return (Token::index+1 == Token::token.length())? false :
            fPronouns("q2", Token::token.at(++Token::index));
            default: return false;
        }
    }else
    if(state == "q2"){
        switch(_char){
            case 'w': return fPronouns("q3", Token::token.at(Token::index));
            default: return false;
        }
    }else
    if(state == "q3" && Token::index == (Token::token.length()-1)){
        return true;
    }
}
