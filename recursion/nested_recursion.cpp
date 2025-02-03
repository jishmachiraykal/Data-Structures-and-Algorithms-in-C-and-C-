#include <stdio.h>
#include <iostream>

int fun(int n) {
    if (n > 100) {
        return n - 10;
    } else {
        return fun(fun(n + 11));  // Recursive call must return a value
    }
}

int main() {
    int result = fun(95);  // Start the recursive calls from fun
    std::cout << "Result: " << result << std::endl;  // Print the result

    return 0;
}