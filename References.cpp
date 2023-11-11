#include <iostream>

void swap1(int x, int y);
void swap2(int*x, int*y);
void swap3(int&x, int&y);
int main(){
    int size1 = 4;
    int size2 = size1;
    int* size3 = &size1; 
    int& size4 = size1;

    size1 *= 2;
    size2 += 1;
    *size3 += 4;
    size4 += 2;

    std::cout<<"Size 1 is " << size1 << "\n";
    std::cout<<"Size 2 is " << size2 << "\n";
    std::cout<<"Size 3 is " << *size3 << "\n";
    std::cout<<"Size 4 is " << size4 << "\n";

    int z = 4, v = 3;
    swap3(z,v);
    std::cout<<"Z = "<<z<<"\n";
    std::cout<<"V = "<<v<<"\n";


}

void swap1(int x, int y){ //Does not work
    int tmp = x;
    x = y;
    y = tmp;
}

void swap2(int*x, int*y){ //works but is awkwardly written
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void swap3(int&x, int&y){ //Pass by reference, can use Const
    int tmp = x;
    x = y;
    y = tmp;
}