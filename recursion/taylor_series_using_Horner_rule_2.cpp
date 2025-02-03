//Taylor series using Horner's rule - recursion:
#include <stdio.h>
#include <iostream>

double e(int x,int n) {
    static double s=1;// result is returned during calling phase so using static variable
    if (n==0)
        return s;
    s=1+x*s/n; // changed this s=1+x/n*s to s=1+x*s/n to avoid typecasting between int and double
    return e(x,n-1);
}

int main() {
    double result = e(3,10);  // Start the recursive calls from fun
    std::cout << "Result: " << result << std::endl;  // Print the result
    
    return 0;
}