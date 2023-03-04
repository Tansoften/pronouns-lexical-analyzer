#include <iostream>
#include "Token.h"
using namespace std;
bool oPronouns(string state, char _char);
bool yPronouns(string state, char _char){
	if(state == "q126")
	{
		switch(_char)
		{
			case 'o': return (Token::index+1 == Token::token.length())? false : yPronouns("q128",Token::token.at(++Token::index));
			case 'e': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q128")
	{
		switch(_char)
		{
			case 'n': return (Token::index+1 == Token::token.length())? true : yPronouns("q129",Token::token.at(++Token::index));
			case 'u': return (Token::index+1 == Token::token.length())? true : yPronouns("q132",Token::token.at(++Token::index));;
			default: return false;
		}
	}
	else if(state == "q129")
	{	
		switch(_char)
		{
			case 'd': return (Token::index+1 == Token::token.length())? false : yPronouns("q130",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q130")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : yPronouns("q131",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q6")
	{
		switch(_char)
		{
			case 'r': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q132")
	{
		switch(_char)
		{
			case 'r': return (Token::index+1 == Token::token.length())? true : yPronouns("q133",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q133")
	{
		switch(_char)
		{
			case 's': return (Token::index+1 == Token::token.length())? true : yPronouns("q134",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q134")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : oPronouns("q149",Token::token.at(++Token::index));
			default: return false;
		}
	}
	return false;
}