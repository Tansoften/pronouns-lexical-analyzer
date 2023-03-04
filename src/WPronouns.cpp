#include <iostream>
#include "Token.h"
using namespace std;
bool hPronouns(string state, char _char);
bool wPronouns(string state, char _char)
{
	if(state == "q76")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true : false;
			case 'h': return (Token::index+1 == Token::token.length())? false : wPronouns("q77",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q77")
	{
		switch(_char)
		{
			case 'a': return (Token::index+1 == Token::token.length())? false : wPronouns("q78",Token::token.at(++Token::index));
			case 'e': return (Token::index+1 == Token::token.length())? false : wPronouns("q87",Token::token.at(++Token::index));
			case 'i': return (Token::index+1 == Token::token.length())? false : wPronouns("q116",Token::token.at(++Token::index));
			case 'o': return (Token::index+1 == Token::token.length())? true : wPronouns("q119",Token::token.at(++Token::index));			
			default: return false;
		}
	}
	else if(state == "q78")
	{
		switch(_char)
		{
			case 't': return (Token::index+1 == Token::token.length())? true : wPronouns("q79",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q79")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : wPronouns("q80",Token::token.at(++Token::index));
			case 'n': return (Token::index+1 == Token::token.length())? false : wPronouns("q83",Token::token.at(++Token::index));
			case 's': return (Token::index+1 == Token::token.length())? false : wPronouns("q85",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q80")
	{
		switch(_char)
		{
			case 'v': return (Token::index+1 == Token::token.length())? false : wPronouns("q81",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q81")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : wPronouns("q82",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q82")
	{
		switch(_char)
		{
			case 'r': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q83")
	{
		switch(_char)
		{
			case 'o': return (Token::index+1 == Token::token.length())? false : wPronouns("q84",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q84")
	{
		switch(_char)
		{
			case 't': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q85")
	{
		switch(_char)
		{
			case 'o': return (Token::index+1 == Token::token.length())? false : wPronouns("q86",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q86")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : wPronouns("q80",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q87")
	{
		switch(_char)
		{
			case 'n': return (Token::index+1 == Token::token.length())? false : wPronouns("q88",Token::token.at(++Token::index));
			case 't': return (Token::index+1 == Token::token.length())? false : wPronouns("q91",Token::token.at(++Token::index));
			case 'r': return (Token::index+1 == Token::token.length())? false : wPronouns("q92",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q88")
	{
		switch(_char)
		{
			case 'c': return (Token::index+1 == Token::token.length())? false : wPronouns("q89",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q89")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q91")
	{
		switch(_char)
		{
			case 'h': return (Token::index+1 == Token::token.length())? false : hPronouns("q65",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q92")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true : wPronouns("q93",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q93")
	{
		switch(_char)
		{
			case 't': return (Token::index+1 == Token::token.length())? false : wPronouns("q103",Token::token.at(++Token::index));;
			case 'w': return (Token::index+1 == Token::token.length())? false : wPronouns("q110",Token::token.at(++Token::index));
			case 'b': return (Token::index+1 == Token::token.length())? false : wPronouns("q94",Token::token.at(++Token::index));
			case 'f': return (Token::index+1 == Token::token.length())? false : wPronouns("q96",Token::token.at(++Token::index));
			case 'i': return (Token::index+1 == Token::token.length())? false : wPronouns("q101",Token::token.at(++Token::index));
			case 'o': return (Token::index+1 == Token::token.length())? false : wPronouns("q125",Token::token.at(++Token::index));
			case 's': return (Token::index+1 == Token::token.length())? false : wPronouns("q108",Token::token.at(++Token::index));
			case 'v': return (Token::index+1 == Token::token.length())? false : wPronouns("q81",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q110")
	{
		switch(_char)
		{
			case 'i': return (Token::index+1 == Token::token.length())? false : wPronouns("q111",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q111")
	{
		switch(_char)
		{
			case 't': return (Token::index+1 == Token::token.length())? false : wPronouns("q112",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q112")
	{
		switch(_char)
		{
			case 'h': return (Token::index+1 == Token::token.length())? true : wPronouns("q113",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q113")
	{
		switch(_char)
		{
			case 'a': return (Token::index+1 == Token::token.length())? false : wPronouns("q114",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q114")
	{
		switch(_char)
		{
			case 'l': return (Token::index+1 == Token::token.length())? true: false;
			default: return false;
		}
	}
	else if(state == "q94")
	{
		switch(_char)
		{
			case 'y': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q96")
	{
		switch(_char)
		{
			case 'r': return (Token::index+1 == Token::token.length())? false : wPronouns("q98",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q98")
	{
		switch(_char)
		{
			case 'o': return (Token::index+1 == Token::token.length())? false : wPronouns("q99",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q99")
	{
		switch(_char)
		{
			case 'm': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q101")
	{
		switch(_char)
		{
			case 'n': return (Token::index+1 == Token::token.length())? true : wPronouns("q102",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q102")
	{
		switch(_char)
		{
			case 't': return (Token::index+1 == Token::token.length())? false : wPronouns("q103",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q103")
	{
		switch(_char)
		{
			case 'o': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	else if(state == "q125")
	{
		switch(_char)
		{
			case 'f': return (Token::index+1 == Token::token.length())? true : false;
			case 'n': return (Token::index+1 == Token::token.length())? true : wPronouns("q102",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q108")
	{
		switch(_char)
		{
			case 'o': return (Token::index+1 == Token::token.length())? false : wPronouns("q109",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q109")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : wPronouns("q80",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q116")
	{
		switch(_char)
		{
			case 'c': return (Token::index+1 == Token::token.length())? false : wPronouns("q117",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q117")
	{
		switch(_char)
		{
			case 'h': return (Token::index+1 == Token::token.length())? true : false;
			default: return false;
		}
	}
	
	else if(state == "q119")
	{
		switch(_char)
		{
			case 'm': return (Token::index+1 == Token::token.length())? true : wPronouns("q120",Token::token.at(++Token::index));
			case 's': return (Token::index+1 == Token::token.length())? false : wPronouns("q123",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q120")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : wPronouns("q80",Token::token.at(++Token::index));
			case 's': return (Token::index+1 == Token::token.length())? false : wPronouns("q121",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q121")
	{
		switch(_char)
		{
			case 'o': return (Token::index+1 == Token::token.length())? true : wPronouns("q122",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q122")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? false : wPronouns("q80",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q123")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true : wPronouns("q124",Token::token.at(++Token::index));
			case 'o': return (Token::index+1 == Token::token.length())? true : wPronouns("q125",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q124")
	{
		switch(_char)
		{
			case 'v': return (Token::index+1 == Token::token.length())? false : wPronouns("q81",Token::token.at(++Token::index));
			case 's': return (Token::index+1 == Token::token.length())? false : wPronouns("q108",Token::token.at(++Token::index));
			default: return false;
		}
	}
	else if(state == "q125")
	{
		switch(_char)
		{
			case 'e': return (Token::index+1 == Token::token.length())? true : wPronouns("q80",Token::token.at(++Token::index));
			default: return false;
		}
	}

	return false;
}