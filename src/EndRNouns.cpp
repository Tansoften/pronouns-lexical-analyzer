#include <iostream>
#include "Token.h"
using namespace std;

bool endRNouns(){
	if(Token::token.at(Token::token.length()-1) == 'r')
	{
		switch(Token::token.at(Token::token.length()-2))
		{
			case 'e': return true;
			case 'o':return true;
			default: return false;
		}
	}
	return false;
}