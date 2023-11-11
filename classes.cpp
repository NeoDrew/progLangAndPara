#include <iostream>
class Circle{
    private:
        double x,y,r;
        char *name;
    public:
    // Circle(double x, double y, double f){
    //     this->x = x;
    //     this->y = y;
    //     this->r = r;
    // }
    Circle(double x, double y, double f) : x{x}, y{y}, r{r} {};

    ~Circle() {delete[] name;}
    
    double getArea(){
        return 3.14 * r * r;
    }
    

    void setName(char* name){
        this->name = new char[strlen(name)+1];
        strncpy(this->name, name, strlen(name));
    }

    char* getName(){
        return name;
    }
};

int main(){
    Circle c1(3,5,4);
    Circle *c2 = new Circle(3,4,5); //Heap instance


    std::cout << c1.getArea() << "\n";
    std::cout << c2->getArea() << "\n";
    char* name = "Drew";
    c1.setName(name);
}