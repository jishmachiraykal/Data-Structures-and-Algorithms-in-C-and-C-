#include <iostream>

using namespace std;

int main() {
    int a=19;
    int &r=a; //declaration and initialization should be in same line for reference
    
    std::cout << a << std::endl;
    r++;
    cout<<r<<endl;
    cout<<a<<endl;

    int b=40;
    r=b;
    cout<<r<<endl<<a<<endl<<b<<endl;
}