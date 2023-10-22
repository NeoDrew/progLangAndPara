#include <stdio.h>
#include <stdlib.h>

int add(int *a, int *b){

    return *a+*b;
}
int main(int argc, char **argv){
    if (argc == 3){
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        int *aPointer = &a;
        int *bPointer = &b;
        printf("%d + %d = %d\n", a, b, add(aPointer,bPointer));
    }
    return 0;
}