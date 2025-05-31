//Something might overflow. See the problem?
#include <stdio.h>

int main(void){
    char str[5];
    strcpy(str, "Hello, world!");
}