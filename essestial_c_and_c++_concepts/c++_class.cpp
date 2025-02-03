#include <iostream>
#include <stdio.h>

using namespace std;

class rectangle{
private:
    int length;
    int breadth;

public:
    rectangle(){
        int length=0;
        int breadth=0;
    }

    rectangle(int l, int b){
       length=l;
       breadth=b;
    }

    int area(){
        return length*breadth;
    }

    void setlength(int l){ //mutated function which are used for writing the properties
        length=l;
    }

    int getlength(){ // accessor function which are used for reading the properties
        return length;
    }

    ~rectangle(){ //destructor
        cout<<"destructor"<<endl;
    }
};

int main(){
    rectangle r(1,2);

    std::cout << r.area() << std::endl;
}