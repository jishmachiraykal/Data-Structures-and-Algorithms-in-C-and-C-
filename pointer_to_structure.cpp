// creating memory in heap using pointers to structure
#include <iostream>
#include <stdio.h>

struct rectangle{
int breadth;
int length;
};

using namespace std;

int main() {
    struct rectangle *p;

    //dynamically creating memory in heap
    p=(struct rectangle *)malloc(sizeof(struct rectangle));//typecasting here otherwise this will return void pointer

    p->length=100;
    p->breadth=200;

    std::cout << p->length << std::endl;
    std::cout << p->breadth << std::endl;
}