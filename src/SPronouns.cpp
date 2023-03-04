#include <iostream>
#include "Token.h"
using namespace std;
bool aPronouns(string state, char _char);
bool hPronouns(string state, char _char);
bool sPronouns(string state, char _char)
{
	if(state == "q156")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : sPronouns("q157",Token::token.at(++Token::index));
			case 'h': return (Token::index+1 == Token::token.length())? false: hPronouns("q65", Token::token.at(++Token::index));
			case 'u': return (Token::index+1 == Token::token.length())? false: sPronouns("q167", Token::token.at(++Token::index));
			case 'o': return (Token::index+1 == Token::token.length())? false: sPronouns("q174", Token::token.at(++Token::index));
		    default: return false;
		}
	}
	else if(state == "q157")
	{
		switch(_char)
		{
			case 'v': return (Token::index+1 == Token::token.length())? false: sPronouns("q158", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q158")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false: sPronouns("q159", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q159")
	{
		switch(_char)
		{
			case 'r': return (Token::index+1 == Token::token.length())? false: sPronouns("q160", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q160")
	{
		switch(_char)
		{
			case 'a': return (Token::index+1 == Token::token.length())? false: sPronouns("q161", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q161")
	{
		switch(_char)
		{
			case 'l': return (Token::index+1 == Token::token.length())? true: false;
			default: return false;
		}
	}

	else if(state =="q167")
	{
		switch(_char)
		{
			case 'c': return (Token::index+1 == Token::token.length())? false: sPronouns("q168", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q168")
	{
		switch(_char)
		{
			case 'h': return (Token::index+1 == Token::token.length())? true: sPronouns("q169", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q169")
	{
		switch(_char)
		{
			case 'l': return (Token::index+1 == Token::token.length())? false: sPronouns("q170", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q170")
	{
		switch(_char)
		{
			case 'i': return (Token::index+1 == Token::token.length())? false: sPronouns("q171", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q171")
	{
		switch(_char)
		{
			case 'k': return (Token::index+1 == Token::token.length())? false: sPronouns("q172", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q172")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true: false;
			default: return false;
		}
	}
	else if(state =="q174")
	{
		switch(_char)
		{
			case 'm': return (Token::index+1 == Token::token.length())? false: sPronouns("q175", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q175")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true: sPronouns("q176", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q176")
	{
		switch(_char)
		{
			
			case 'b': return (Token::index+1 == Token::token.length())? false: aPronouns("q6", Token::token.at(++Token::index));
			case 'o': return (Token::index+1 == Token::token.length())? false: aPronouns("q10", Token::token.at(++Token::index));
			case 't': return (Token::index+1 == Token::token.length())? false: aPronouns("q13", Token::token.at(++Token::index));
			case 'w': return (Token::index+1 == Token::token.length())? false: sPronouns("q177", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q177")
	{
		switch(_char)
		{
			case 'h': return (Token::index+1 == Token::token.length())? false: sPronouns("q178", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q178")
	{
		switch(_char)
		{
			case 'a': return (Token::index+1 == Token::token.length())? false: sPronouns("q179", Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state =="q179")
	{
		switch(_char)
		{
			case 't': return (Token::index+1 == Token::token.length())? true: false;
			default: return false;
		}
	}
	return false;
}
