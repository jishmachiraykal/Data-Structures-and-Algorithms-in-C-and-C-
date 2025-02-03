#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void initialize(struct rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int area(struct rectangle r){
    return r.length*r.breadth;
}

int perimeter(struct rectangle r){
    return 2*(r.length + r.breadth);
}

int main(){ 

    struct rectangle r={0,0};//instead of initializing 2 varibales which is refering to rectangle
    //making it as structure and decalring and initializing

    int l,b;
    printf("Enter length and breadth: ");
    cin >>l>>b;
    initialize(&r,l,b);
    int a=area(r);//need not to pass 2 parameters separately make it structure and pass it as one
    int p=perimeter(r);
    std::cout << "area "<<a << std::endl;
    cout<<"perimeter "<<p<<endl;
}