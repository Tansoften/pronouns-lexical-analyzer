#include <iostream>
#include "Token.h"
using namespace std;
bool oPronouns(string state, char _char);
bool tPronouns(string state, char _char){
	if(state == "q181")
	{
		switch(_char)
		{
			case 'h': return (Token::index+1 == Token::token.length())? false : tPronouns("q182",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q182")
	{
		switch(_char)
		{
			case 'a': return (Token::index+1 == Token::token.length())? false : tPronouns("q183",Token::token.at(++Token::index));
			case 'e': return (Token::index+1 == Token::token.length())? false : tPronouns("q185",Token::token.at(++Token::index));
			case 'y': return (Token::index+1 == Token::token.length())? true : tPronouns("q196",Token::token.at(++Token::index));
			case 'o': return (Token::index+1 == Token::token.length())? false : tPronouns("q198",Token::token.at(++Token::index));
			case 'i': return (Token::index+1 == Token::token.length())? false : tPronouns("q200",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q183")
	{
		switch(_char)
		{
			case 't': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q185")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true : false;
			case 'i': return (Token::index+1 == Token::token.length())? false : tPronouns("q187",Token::token.at(++Token::index));
			case 'm': return (Token::index+1 == Token::token.length())? true : tPronouns("q189",Token::token.at(++Token::index));
			case 'r': return (Token::index+1 == Token::token.length())? false : tPronouns("q191",Token::token.at(++Token::index));
			case 'y': return (Token::index+1 == Token::token.length())? true : tPronouns("q193",Token::token.at(++Token::index));
			case 's': return (Token::index+1 == Token::token.length())? false : tPronouns("q194",Token::token.at(++Token::index));;
			default: return false;
		}
	}
	else if(state == "q187")
	{
		switch(_char)
		{
			case 'r': return (Token::index+1 == Token::token.length())? false : oPronouns("q147",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q189")
	{
		switch(_char)
		{
			case 's': return (Token::index+1 == Token::token.length())? false : tPronouns("q190",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q190")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : oPronouns("q149",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q191")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q193")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : oPronouns("q148",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q194")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q200")
	{
		switch(_char)
		{
			case 's': return (Token::index+1 == Token::token.length())? true : false;
			case 'n': return (Token::index+1 == Token::token.length())? false : tPronouns("q191",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q196")
	{
		switch(_char)
		{
			case 's': return (Token::index+1 == Token::token.length())? false : tPronouns("q197",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q197")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : oPronouns("q149",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q198")
	{
		switch(_char)
		{
			case 'u': return (Token::index+1 == Token::token.length())? true : false;
			case 's': return (Token::index+1 == Token::token.length())? false : tPronouns("q194",Token::token.at(++Token::index));
			default: return false;
		}
	}
	return false;
}