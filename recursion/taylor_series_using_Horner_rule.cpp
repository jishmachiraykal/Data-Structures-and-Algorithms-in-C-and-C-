//Taylor series using for loop Horner's rule:
#include <stdio.h>
#include <iostream>

double e(int x,int n) {
double s=1;

if (n==0){
return 1;
}else{
for(;n>0;n--)
{
s=1+x*s/n;
}
return s;
}
}

int main() {
double result = e(4,10); // Start the recursive calls from fun
std::cout << "Result: " << result << std::endl; // Print the result

return 0;
}