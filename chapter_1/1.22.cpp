#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, item;
    if (std::cin >> currItem)
    {
        while (std::cin >> item)
        {
            currItem += item;
        }
    }
    std::cout << currItem << std::endl;
    // $ 1.22.exe <./data/add_item_multi

    return 0;
}