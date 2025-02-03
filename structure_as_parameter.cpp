#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle {
  int length;
  int breadth;
};

int area(struct rectangle r1){
    r1.length++;
    return r1.length*r1.breadth;   
}

int main(){
    struct rectangle r={10,20};
    printf("%d\n", area(r));
    std::cout << r.length << std::endl;// this is to demonstrate that changing formal parameter
    //doesn't change actual parameter in pass by value
}