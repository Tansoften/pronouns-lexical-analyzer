#include <Token.h>
#include<iostream>
using namespace std;
bool hPronouns(string state, char _char);

bool hasArticle(string state, char _char)
{
	
	if(state == "q0")
	{
		switch(_char)
		{
			case 'a': return (Token::prevTokenIndex+1 == Token::prevToken.length())? true : hasArticle("q1",Token::prevToken.at(++Token::prevTokenIndex));
			/*case 't': return (Token::prevTokenIndex+1 == Token::prevToken.length())? false : hasArticle("q3",Token::prevToken.at(++Token::prevTokenIndex));*/
			case 'o':return (Token::prevTokenIndex+1 == Token::prevToken.length())? false : hasArticle("q4",Token::prevToken.at(++Token::prevTokenIndex));
			default: return false;
		}
	}
	if(state == "q1")
	{
		switch(_char)
		{
			case 'n': return (Token::prevTokenIndex+1 == Token::prevToken.length())? true : false;
			case 't': return (Token::prevTokenIndex+1 == Token::prevToken.length())? true : false;
			default: return false;
		}
	}
	// if(state == "q3")
	// {
	// 	switch(_char)
	// 	{
	// 		case 'h': return (Token::prevTokenIndex+1 == Token::prevToken.length())? false : hPronouns("q66",Token::prevToken.at(++Token::prevTokenIndex));
	// 		default: return false;
	// 	}
	// }
	if(state == "q4")
	{
		switch(_char)
		{
			case 'f': return (Token::prevTokenIndex+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	return false;
}
