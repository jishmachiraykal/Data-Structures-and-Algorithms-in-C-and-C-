#include <iostream>
#include <stdio.h>

struct rectangle{
    int length;
    int breadth;
};

using namespace std;

int main() {
    struct rectangle r={12,24};
    struct rectangle *p = &r;
   
    //accessing member element using pointer
    p->length=10;//or (*p).length;
    std::cout << p->length << std::endl;
    std::cout << p->breadth << std::endl;
}