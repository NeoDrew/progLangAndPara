#include <iostream> //Do not need .h for CPP libraries

int main(){
    
    std::cout << "Hello World!\n";

    int static_num = 0;
    return 0;
}

int fn(){
    int local_num = 5;

    local_num = local_num + 10;

    /* 
    //C standard
    int *heap_num = malloc(sizeof(int));

    *heap_num = 3;

    free(heap_num);
    */

    //C++ standard, avoid malloc and free
    int *heap_num = new int{3};
    delete heap_num;

    //Initalises value directly
    int num{5}; 
    int nums[]{1,2,3,4,5};
    //Assignment
    num = 4;
    bool Boolean = new bool{false};

   return 0;
}