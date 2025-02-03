#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int length=0, breadth=0;
    printf("Enter length and breadth: ");
    cin >>length>>breadth;

    int area=length*breadth;
    int perimeter=2*(length + breadth);

    std::cout << "area "<<area << std::endl;
    cout<<"perimeter "<<perimeter<<endl;
}