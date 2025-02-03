#include <stdio.h>
#include <iostream>

double e(int x,int n) {
    static double p=1, f=1;
    double r;
    if (n==0){
        return 1;
    }else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main() {
    double result = e(3,10);  // Start the recursive calls from fun

    std::cout << "Result: " << result << std::endl;  // Print the result

    return 0;
}