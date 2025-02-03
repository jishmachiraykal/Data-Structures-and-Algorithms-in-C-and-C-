//sum of first n natural numbers using loop:
//time taken : o(n), here x=x+i is evaluated more times
#include <stdio.h>
#include <iostream>

int sum(int n) {
        int x=0;
    for (int i=1;i<=n;i++){
        x=x+i;
    }
        return x;
}

int main() {
    int result = sum(3);  // Start the recursive calls from fun
    std::cout << "Result: " << result << std::endl;  // Print the result

    return 0;
}