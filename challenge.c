#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <key>

#define BUFFER_SIZE 50
#define flagsize 100
char buffer[BUFFER_SIZE];
char flag[flagsize];
int win(){
    printf("Enter password: ");
    fgets(buffer, sizeof(buffer), stdin);

    if(strcmp(buffer, "win\n") == 0){
        return 1;
    }
    return 0;
}