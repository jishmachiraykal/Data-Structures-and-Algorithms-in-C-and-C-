#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle {
  int length;
  int breadth;
};

void fun(struct rectangle *r1){
    r1->length++;
    cout<<r1->length<<endl;
}

int main(){
    struct rectangle r={10,20};
    fun(&r);
    cout << r.length<<endl;
}