#include "hidden.h"
#include <stdio.h>
int main() {
    printf("%s\n", "Do you want to check the key?");
    char key[100];
    char input[100];
    scanf("%s", input);
    compare_key(key,input);

    return 0;
}