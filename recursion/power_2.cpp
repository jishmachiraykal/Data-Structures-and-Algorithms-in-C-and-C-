//finding exponent using less computation steps:
#include <stdio.h>
#include <iostream>

int pow(int m,int n) {
    if(n==0){
        return 1;
    }
    if(n%2==0)
        return pow(m*m,n/2);
    return m*pow(m*m,(n-1)/2);
}

int main() {
    int result = pow(2,2);  // Start the recursive calls from fun
    std::cout << "Result: " << result << std::endl;  // Print the result

    return 0;
}