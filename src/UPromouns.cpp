#include <iostream>
#include "Token.h"
using namespace std;

bool uPronouns(string state, char _char)
{
	if(state == "q1")
	{
		switch(_char)
		{
			case 's': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	return false;
}