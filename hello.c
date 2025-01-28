#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* clone(char* input) {
    int len = strlen(input);
    char* res = (char*)malloc(len);
    strcpy(res, input);
    return res;
}

int main() {
    char* input = "Hello, World!";
    char* res = clone(input);
    printf("%s\n", input);
    printf("%s\n", res);
    return 0;
}
