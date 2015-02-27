#include "Stack.h"
#include "Decode.h"

int letter_decode(char letter)
{
	char letters[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
	int val[]      = {  1,   5,  10,  50, 100, 500, 1000};

	for(int i = 0; i < 7; ++i)
		if(letters[i] == letter)
			return val[i];
	return 0;
}

int roman_decode(char *in)
{
	int acc = 0;

	if(!*in) return 0;
	
	if(letter_decode(in[0]) < letter_decode(in[1]))
		(acc = letter_decode(in[1]) - letter_decode(*in)), ++in;
	else
		acc = letter_decode(*in);

	return acc + roman_decode(++in);
}
