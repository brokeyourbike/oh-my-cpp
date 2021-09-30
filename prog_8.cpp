#include <iostream>
#include "Sales_Item.h"

int main()
{
    Sales_Item item1, item2;

    std::cin >> item1, item2;

    // check if item1 and item2 represents the same book
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    } else {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }
}
