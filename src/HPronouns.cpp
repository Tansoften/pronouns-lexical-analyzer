#include <iostream>
#include "Token.h"
using namespace std;

	bool hPronouns(string state, char _char)
		{
				if(state == "q65")
				{
					switch(_char)
					{
						case 'e':
						{
							return (Token::index+1 == Token::token.length())? true : hPronouns("q66",Token::token.at(++Token::index));
						}

						break;

						case 'i':
						{
							return (Token::index+1 == Token::token.length())? false : hPronouns("q69",Token::token.at(++Token::index));
						}
						break;
						default:
							return false;

					}
				}
				if(state == "q66")
				{
					switch(_char)
					{
						case 'r':
						{
							return (Token::index+1 == Token::token.length())? true : hPronouns("q67",Token::token.at(++Token::index));
						}
						break;

						default:
							return false;
					}
				}

				if(state == "q67")
				{
					switch(_char)
					{
						
						case 's':
						{
							return (Token::index+1 == Token::token.length())? true : hPronouns("q68",Token::token.at(++Token::index));
						}
						break;

						default:
						return false;
					}
				}
				if(state == "q68")
				{
					switch(_char)
					{
						case 'e': 
						{
							return (Token::index+1 == Token::token.length())? false: hPronouns("q73",Token::token.at(++Token::index));
						}
						default: return false;
					}

				}
				if(state == "q69")
				{
					switch(_char)
					{
						case 's':
						{
							return (Token::index+1 == Token::token.length())? true : hPronouns("q70",Token::token.at(++Token::index));
						}
						case 'm':
						{
							return (Token::index+1 == Token::token.length())? true : hPronouns("q71",Token::token.at(++Token::index));
						}
						default:
						return false;
					}
				}

				if(state == "q71")
				{
					switch(_char)
					{
						case 's':
						{

							return (Token::index+1 == Token::token.length())? true : hPronouns("q72", Token::token.at(++Token::index));
						}
						break;
						default:
							return false;
					}
				}

				if(state == "q72")
				{
					switch(_char)
					{
						case 'e':
						{
							return (Token::index+1 == Token::token.length())? false : hPronouns("q73", Token::token.at(++Token::index));
						}
						break;
						default:
						return false;
					}
				}



				if(state == "q73")
				{
					switch(_char)
					{
						case 'l':
						{
							return (Token::index+1 == Token::token.length())? false : hPronouns("q74", Token::token.at(++Token::index));
						}
						break;
						default:
						return false;

					}
				}

				if(state == "q74")
				{
					switch(_char)
					{
						case 'f':
						{

							return (Token::index+1 == Token::token.length())? true : false;
						}
						break;
						default:
						 	return false;
					}
				}

			return false;
		}

