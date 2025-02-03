#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle{
    int length;
    int breadth;
    char a;// now this will create structure padding
};

int main()
{
    struct rectangle r={12,32};
    printf("Size of structure is : %lu\n", sizeof(r));

    // displaying structure members
    cout <<"Before:"<< r.length << endl;
    cout<<"Before:" << r.breadth<<endl;

    //accessing the structure members
    r.length=23;
    r.breadth=78;

    cout << "After:"<< r.length << endl;
    cout<<"After:" <<r.breadth<<endl;
    return 0;

}