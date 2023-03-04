#include <iostream>
#include "Token.h"
using namespace std;

bool oPronouns(string state, char _char)
{
	if(state == "q135")
	{
		switch(_char)
		{
			case 'n': return (Token::index+1 == Token::token.length())? false : oPronouns("q136",Token::token.at(++Token::index));
			case 't': return (Token::index+1 == Token::token.length())? false : oPronouns("q138",Token::token.at(++Token::index));
			case 'u': return (Token::index+1 == Token::token.length())? false : oPronouns("q143",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q136")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q138")
	{
		switch(_char)
		{
			case 'h': return (Token::index+1 == Token::token.length())? false : oPronouns("q139",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q139")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : oPronouns("q140",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q140")
	{
		switch(_char)
		{
			case 'r': return (Token::index+1 == Token::token.length())? true : oPronouns("q141",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q141")
	{
		switch(_char)
		{

			case 's': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q143")
	{
		switch(_char)
		{
			case 'g': return (Token::index+1 == Token::token.length())? false : oPronouns("q144",Token::token.at(++Token::index));
			case 'r': return (Token::index+1 == Token::token.length())? true : oPronouns("q147",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q144")
	{
		switch(_char)
		{
			case 'h': return (Token::index+1 == Token::token.length())? false : oPronouns("q145",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q145")
	{
		switch(_char)
		{
			case 't': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q147")
	{
		switch(_char)
		{
			case 's': return (Token::index+1 == Token::token.length())? true : oPronouns("q148",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q148")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : oPronouns("q149",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q149")
	{
		switch(_char)
		{
			case 'l': return (Token::index+1 == Token::token.length())? false : oPronouns("q150",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q150")
	{
		switch(_char)
		{
			case 'v': return (Token::index+1 == Token::token.length())? false : oPronouns("q152",Token::token.at(++Token::index));
			case 'f': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q152")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : oPronouns("q153",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q153")
	{
		switch(_char)
		{
			case 's': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}

	return false;
}