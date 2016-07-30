#pragma once

#ifndef USER_H
#define USER_H

//checks if a character is a space character 
int user_isspace(int aCharacter);

//checks if a character is a digit 
int user_isdigit(int aCharacter);

//checks if a character is a hexadecimal character 
int user_isxdigit(int aCharacter);

//checks if a character is lowercase 
int user_islower(int aCharacter);

//checks if a character is an uppercase character 
int user_isupper(int aCharacter);

//checks if a character is alphabetic 
int user_isalpha(int aCharacter);

//checks if a character is alphanumeric
int user_isalnum(int aCharacter);

//checks if a character is a control character 
int user_iscntrl(int aCharacter);

//checks if a character is a graphical character 
int user_isgraph(int aCharacter);

//checks if a character is a printing character 
int user_isprint(int aCharacter);

//checks if a character is a punctuation character 
int user_ispunct(int aCharacter);

#endif 

