#include <iostream>
#include <stdio.h>

using namespace std;


struct rectangle {
  int length;
  int breadth;
};



void initialize(struct rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int area(struct rectangle r1){
    return r1.length*r1.breadth;
}

void changelength(struct rectangle &r1, int l){
    r1.length=l;
}

int main(){
    struct rectangle r;

    initialize(&r,10,20);
    area(r);
    changelength(r,20);

    std::cout << "length "<<r.length<<endl<<"Breadth "<<r.breadth << std::endl;

}