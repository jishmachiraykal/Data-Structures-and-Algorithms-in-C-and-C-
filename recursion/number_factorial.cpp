//factorial of a number using recursion:
#include <stdio.h>
#include <iostream>

int fact(int n) {
    if(n==0)
        return 1;
    return fact(n-1)*n;   
}

int main() {
    int result = fact(5);  // Start the recursive calls from fun
    std::cout << "Result: " << result << std::endl;  // Print the result
    
    return 0;
}