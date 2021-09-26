#include <iostream>

int main()
{
    int sum = 0;
    int val = 1;

    while (val <= 10) {
        sum += val;
        ++val;
    }

    std::cout << " Sum of 1 to 10 inclusive is ";
    std::cout << sum;
    std::cout << std::endl;

    return 0;
}
