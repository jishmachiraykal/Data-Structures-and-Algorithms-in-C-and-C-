//sum of first n natural numbers using direct formula:
//time taken o(1)
#include <stdio.h>
#include <iostream>

int sum(int n) {
        return n*(n+1)/2 ;
}

int main() {
    int result = sum(3);  // Start the recursive calls from fun
    std::cout << "Result: " << result << std::endl;  // Print the result

    return 0;
}