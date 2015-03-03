#include "string.h"
#include "Decode.h"


int char_decode(char in) {
	char lettres[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
	int chiffres[] = { 1, 5, 10, 50, 100, 500, 1000 };
	int i = 0;

    for (; i < 7; ++i) {
    	if (lettres[i] == in) {
    		return chiffres[i];
    	}
	}
}


int roman_decode(char* in) {
	int i = 0;
	int res = 0;

	if (strlen(in) == 1) {
		return char_decode(in[0]);
	}

	for (; i < strlen(in); ++i) {
		if (in[i + 1] != NULL && char_decode(in[i]) < char_decode(in[i + 1])) {
			res += (char_decode(in[i + 1]) - char_decode(in[i]));
			++i;
		} else {
			res += char_decode(in[i]);
		}
	}
	return res;
} 