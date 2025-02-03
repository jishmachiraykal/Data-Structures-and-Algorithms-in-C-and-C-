#include <iostream>
#include <stdio.h> //to include C code in C++. In some compiler, this needs to be included to add C code

using namespace std;

int main()
{
    int data[5]= {1,2,3,4,5};
    cout << sizeof(data)<<endl;
    cout<<data[2]<<endl;
    printf("%d\n", data[4]);

    //displaying the array
    for(int i=0;i<5;i++){
        cout<<data[i]<<endl;
        //printf("%d\n",data[i]);
    }

    //displaying array using for each loop
    for(int x:data){// x will take all the elements value and prints it
        cout<<x<<endl;
    }

    //taking input from user for no.of array elements
    int n1;
    cout<<"Enter Size of array";
    cin>>n1;

    int a[n1]; // initialization of array is not allowed if we are taking input from user, so initialize separately
    a[0]=1;   //the remaining elements will be having some garbage value

    for(int x:a){// x will take all the elements value and prints it
        cout<<x<<endl;
    }
    return 0;
}