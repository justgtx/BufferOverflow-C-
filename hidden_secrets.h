#include <string.h>
#include <stdio.h>

int compare_key(char *key, int input){
    if (strcmp(full_key[0], key) == 0) {
        
        printf("%s\n", "Key is correct you won");
        return 0;
    } else {
        printf("%s\n", "Key is incorrect");
        return 0;
    }
}
char *full_key[] = {"Flag{two_wr0ng$_don't_m@ke_@_r!gh+_3_wrongs_do}"};