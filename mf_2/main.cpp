#include <iostream>
#include "math.h"

int main() {
    int a = 5;
    int b = 7;
    int result = add(a, b);
    
    std::cout << "The sum of " << a << " and " << b << " is " << result << std::endl;
    return 0;
}