#include <iostream>

int main(){
    return 0;
}

class Shape{
    private:
    int size;

    public:
    void setSize(int size){
        this->size = size;
    }
    int getSize(){
        return size; 
    }
};


class Rectangle : Shape{
    
};