#include "main.h"

/**
 * _ialpha -checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c){

	return((c>='a' && c<='z') || (>='A' && c <='Z'));

}
