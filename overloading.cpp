#include <stdio.h>
void print(int x){
    printf("an int: %d\n", x);
}

void print(char c){
    printf("a char: %c\n", c);
}

void print(double a, double b){
    printf("first doube: %f, second double: %f", a, b);
}

int main(){
    return 0;
}