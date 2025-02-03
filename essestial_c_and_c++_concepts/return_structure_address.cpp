#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle {
  int length;
  int breadth;
};

struct rectangle *fun(){ //function return pointer of type rectangle
    struct rectangle *p;
    p=new rectangle;
   //in C: p=(struct rectangle *)malloc(sizeof(struct rectangle));
   p->length=10;
   p->breadth=20;

   return p;
}

int main(){
    struct rectangle *p=fun();
    cout << "Length: "<<p->length<<endl<<"Breadth: "<<p->breadth<<endl;
}