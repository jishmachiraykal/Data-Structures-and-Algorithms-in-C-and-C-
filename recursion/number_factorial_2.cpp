//factorial of a number using iteration:
#include <stdio.h>
#include <iostream>

int fact(int n) {
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main() {
    int result = fact(5);  // Start the recursive calls from fun
    std::cout << "Result: " << result << std::endl;  // Print the result

    return 0;
}