#include "Decode.h"
#include "string.h"

int decode_chiffre (char in);
int roman_decode(char* in) {
    int i;
    int val = 0;
    if (strlen(in) == 1)
        return decode_chiffre(in[0]);

    for (i = 0; i < strlen(in); ++i) {
        if (in[i + 1] != NULL && decode_chiffre(in[i]) < decode_chiffre(in[i + 1])) {
            val += decode_chiffre(in[i + 1]) - decode_chiffre(in[i]);
            ++i;
        }
        else {
            val += decode_chiffre(in[i]);
        }
    }  
    return val;

}

int decode_chiffre (char in) {
     
    char tab[] = {'I', 'V', 'X', 'L', 'C', 'D','M'};
    int val[] = {1, 5, 10, 50, 100, 500, 1000}; 
    int i;

    for (i = 0; i < 7; ++i) {
        if (in == tab[i])
            return val[i]; 
    }
    return 0;
}
