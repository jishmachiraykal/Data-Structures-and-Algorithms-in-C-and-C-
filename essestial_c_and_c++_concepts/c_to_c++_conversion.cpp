#include <iostream>
#include <stdio.h>

using namespace std;

class rectangle {// the functions are members of this class, so need not to include structure or variable(r)
private:   
  int length;
  int breadth;

public:
rectangle(int l, int b){// this is a constructor, instead of initialize function this will initialize
//at the time of declaration itself
    length=l;
    breadth=b;
}

int area(){
    return length*breadth;
}

void changelength(int l){
    length=l;
}
};

int main(){
    rectangle r(10,20);//this does the job of initialization using constructor instead of having a
    // separate function for initialization
    r.area();
    r.changelength(20);
}