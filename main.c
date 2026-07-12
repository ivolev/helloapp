#include <stdio.h>

void greetBlack() {
    printf("hello black\n");
}

void greetWhite() {
    printf("hello white\n");
}

int main() {
    printf("hello everyone\n");
    greetWhite();
    greetBlack();
    return 0;
}

