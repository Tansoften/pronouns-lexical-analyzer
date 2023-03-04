#include <iostream>
#include "Token.h"
using namespace std;

bool aPronouns(string state, char _char);

	bool ePronouns(string state, char _char)
		{


				 if(state == "q39")
				{
					switch(_char)
					{
						case 'a':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q40",Token::token.at(++Token::index));
						}
						break;

						case 'i':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q43",Token::token.at(++Token::index));
						}
						break;
						case 'n':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q48", Token::token.at(++Token::index));
						}
						break;
						case 'v':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q53", Token::token.at(++Token::index));
						}
						break;
						default:
							return false;

					}
				}
				else if(state == "q40")
				{
					switch(_char)
					{
						case 'c':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q41",Token::token.at(++Token::index));
						}
						break;

						default:
							return false;
					}
				}

				else if(state == "q41")
				{
					switch(_char)
					{
						case 'h':
						{
							return (Token::index+1 == Token::token.length())? true: false;
						}
						break;

						default:
						return false;
					}
				}
				else if(state == "q43")
				{
					switch(_char)
					{
						case 't':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q44",Token::token.at(++Token::index));
						}
						break;
						default:
						return false;
					}
				}

				else if(state == "q44")
				{
					switch(_char)
					{
						case 'h':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q45",Token::token.at(++Token::index));
						}
						break;
						default:
							return false;
					}
				}

				else if(state == "q45")
				{
					switch(_char)
					{
						case 'e':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q46", Token::token.at(++Token::index));
						}
						break;
						default:
						return false;
					}
				}



				else if(state == "q46")
				{
					switch(_char)
					{
						case 'r':
						{
							return (Token::index+1 == Token::token.length())? true: false;
						}
						break;
						default:
						return false;

					}
				}

				else if(state == "q48")
				{
					switch(_char)
					{
						case 'o':
						{

							return (Token::index+1 == Token::token.length())? false : ePronouns("q49", Token::token.at(++Token::index));
						}
						break;
						default:
						 	return false;
					}
				}

				else if(state == "q49")
				{
					switch(_char)
					{
						case 'u':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q50", Token::token.at(++Token::index));
						}
						break;
						default:
						 	return false;
					}
				}

				if(state == "q50")
				{
					switch(_char)
					{
						case 'g':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q51", Token::token.at(++Token::index));
						}
						break;
						default:
						 	return false;
					}
				}

				else if(state == "q51")
				{
					switch(_char)
					{
						case 'h':
						{
							return (Token::index+1 == Token::token.length())? true: false;
						}
						break;
						default:
						 	return false;
					}
				}

				else if(state == "q53")
				{
					switch(_char)
					{
						case 'e':
						{
							return (Token::index+1 == Token::token.length())? false : ePronouns("q54", Token::token.at(++Token::index));
						}
						break;
						default:
						 	return false;
					}
				}

				if(state == "q54")
				{
					switch(_char)
					{
						case 'r':
						{

							return (Token::index+1 == Token::token.length())? false : aPronouns("q4", Token::token.at(++Token::index));
						}
						break;
						default:
						 	return false;
					}
				}
			return false;
		}

