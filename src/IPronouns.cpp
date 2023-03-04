#include <iostream>
#include "Token.h"
using namespace std;
bool hPronouns(string state, char _char);
bool iPronouns(string state, char _char)
{
	if(state == "q59")
	{	
		switch(_char)
		{
			case 't':
			{
				return (Token::index+1 == Token::token.length())? true : iPronouns("q60", Token::token.at(++Token::index));
			}
			case 'd':
			{
				return (Token::index+1 == Token::token.length())? false : iPronouns("q62", Token::token.at(++Token::index));
			}
			default:
			return false;
		}
	}
	else if(state == "q60" )
	{
		switch(_char)
		{
			case 's':
			{
				return (Token::index+1 == Token::token.length())? true : hPronouns("q68", Token::token.at(++Token::index));//jump to Hpronoun e
			}
			default:
			return false;
		}
	}

	// else if(state == "q61")
	// {
	// 	switch(_char)
	// 	{
	// 		case 'e':
	// 		{
	// 			return (Token::index+1 == Token::token.length())? false : hPronouns("q68", Token::token.at(++Token::index));//HPronoun("q9", Token::token.at(Token::index++));
	// 		}
	// 		default:
	// 		return false;
	// 	}
	// }

	else if(state == "q62")
	{
		switch(_char)
		{
			case 'e':
			{
				return (Token::index+1 == Token::token.length())? false : iPronouns("q63", Token::token.at(++Token::index));
			}

			default:
			return false;
		}
	}
	else if(state == "q63")
	{
		switch(_char)
		{
			case 'm':
			{
				return (Token::index+1 == Token::token.length())? true: false;
			}

			default:
			return false;
		}
	}
	
}