#include <iostream>
#include <stdio.h>

using namespace std;

template <class T>
class arithmetic{
private:
    T a;
    T b;

public:
    arithmetic(T a, T b);
    T add();
    T sub();
};   

template <class T>
arithmetic<T>::arithmetic(T a, T b){
       this->a=a;//this->a refers to members of a class.
       this->b=b;
}

template <class T>   
T arithmetic<T>::add(){
        T c;
        c=a+b;
        return c;
        }

template <class T>   
T arithmetic<T>::sub(){
        T c;
        c=a-b;
        return c;
}

int main(){
    arithmetic<int> a(10,2),a1(12,90);

    std::cout << a.add() << std::endl;
    std::cout << a1.sub() << std::endl;

    arithmetic<float> b(10.0,2.7),b1(12.4,90.8);

    std::cout << b.add() << std::endl;
    std::cout << b1.sub() << std::endl;

    arithmetic<char> c('A','B'),c1('C','D');

    std::cout << c.add() << std::endl;
    std::cout << c1.sub() << std::endl;
}