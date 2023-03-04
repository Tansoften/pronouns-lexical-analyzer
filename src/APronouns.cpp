#include <iostream>
#include "Token.h"
using namespace std;

bool aPronouns(string state, char _char){
    if(state == "q1"){
        switch(_char){
            case 'l': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q2", Token::token.at(++Token::index));

            case 'n': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q4", Token::token.at(++Token::index));

            case 's': return aPronouns("q18", Token::token.at(Token::index));//To acceptance state

            case 'u': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q19", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q2"){
        switch(_char){
            case 'l': return aPronouns("q3", Token::token.at(Token::index));

            default: return false;
        }
    } else
    if(state == "q3" && Token::index == (Token::token.length()-1)){
        return true;
    } else
    if(state == "q4"){
        switch(_char){
            case 'y': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q5", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q5"){
        switch(_char){
            case 'b': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q6", Token::token.at(++Token::index));

            case 'o': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q10", Token::token.at(++Token::index));

            case 't': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q13", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q6"){
        switch(_char){
            case 'o': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q7", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q7"){
        switch(_char){
            case 'd': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q8", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q8"){
        switch(_char){
            case 'y': return aPronouns("q9", Token::token.at(Token::index));

            default: return false;
        }
    } else
    if(state == "q9" && Token::index == (Token::token.length()-1)){
        return true;
    } else
    if(state == "q10"){
        switch(_char){
            case 'n': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q11", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q11"){
        switch(_char){
            case 'e': return aPronouns("q12", Token::token.at(Token::index));

            default: return false;
        }
    } else
    if(state == "q12" && Token::index == (Token::token.length()-1)){
        return true;
    } else
    if(state == "q13"){
        switch(_char){
            case 'h': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q14", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q14"){
        switch(_char){
            case 'i': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q15", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q15"){
        switch(_char){
            case 'n': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q16", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q16"){
        switch(_char){
            case 'g': return aPronouns("q17", Token::token.at(Token::index));

            default: return false;
        }
    } else
    if(state == "q17" && Token::index == (Token::token.length()-1)){
        return true;
    } else
    if(state == "q18" && Token::index == (Token::token.length()-1)){
        return true;
    } else
    if(state == "q19"){
        switch(_char){
            case 'g': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q20", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q20"){
        switch(_char){
            case 'h': return (Token::index+1 == Token::token.length())? false :
            aPronouns("q21", Token::token.at(++Token::index));

            default: return false;
        }
    } else
    if(state == "q21"){
        switch(_char){
            case 't': return aPronouns("q22", Token::token.at(Token::index));

            default: return false;
        }
    } else
    if(state == "q22" && Token::index == (Token::token.length()-1)){
        return true;
    }

    return false;
}
