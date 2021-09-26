#include <iostream>

int main()
{
    int sum = 0;

    int range_start = 1;
    int range_end = 10;

    std::cout << "Enter two numbers:";
    std::cout << std::endl;

    std::cin >> range_start;
    std::cin >> range_end;

    int current_value = range_start;

    while (current_value <= range_end) {
        sum += current_value;
        ++current_value;
    }

    std::cout << " Sum of " << range_start << " to " << range_end << " inclusive is ";
    std::cout << sum;
    std::cout << std::endl;

    return 0;
}
