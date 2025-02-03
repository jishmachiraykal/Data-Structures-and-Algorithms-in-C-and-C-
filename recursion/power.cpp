//power/Exponent using recursion:
#include <stdio.h>
#include <iostream>

int pow(int m,int n) {
    if(n==0){
        return 1;
    }else{
        return pow(m,n-1)*m;
    }
}

int main() {
    int result = pow(2,0);  // Start the recursive calls from fun
    std::cout << "Result: " << result << std::endl;  // Print the result

    return 0;
}