#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <secrets.h>

#define BUFFER_SIZE 50
#define flagsize 100
char buffer[BUFFER_SIZE];
char flag[flagsize];
int win(){
    fgets(buffer, sizeof(buffer), stdin);

    if(strcmp(buffer, "win\n") == 0){
        partial_key = xor_hash(original_key, hash);
        printf("Correct password! Here's your flag: %s\n", flag);
        return 1;
    }
    return 0;
}
int main(){
    printf("Enter the password: ");
    if(win()){
        return 0;
    } else {
        printf("Incorrect password.\n try again.\n");
        return 1;
    }
}