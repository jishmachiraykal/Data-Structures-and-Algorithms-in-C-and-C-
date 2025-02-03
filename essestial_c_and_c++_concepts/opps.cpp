#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle{
    int length;
    int breadth;

void initialize(int l, int b){
    length=l;
    breadth=b;
}

int area(){
    return length*breadth;
}

int perimeter(){
    return 2*(length + breadth);
}
};

int main(){
    struct rectangle r={0,0};//instead of initializing 2 varibales which is refering to rectangle

    //making it as structure and decalring and initializing
    int l,b;
    printf("Enter length and breadth: ");
    cin >>l>>b;

    r.initialize(l,b);//initialize is a member of structure, so structure member can be accessed using dot operator
    int a=r.area();//need not to pass 2 parameters separately make it structure and pass it as one
    int p=r.perimeter();

    std::cout << "area "<<a << std::endl;
    cout<<"perimeter "<<p<<endl;
}