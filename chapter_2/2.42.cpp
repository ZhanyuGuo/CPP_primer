#include <iostream>
#include <string>

#include "Sales_data.h"

// just finish 1.25
int main()
{
    Sales_data total;
    double total_price;
    if (std::cin >> total.bookNo >> total.units_sold >> total_price)
    {
        total.revenue = total.units_sold * total_price;

        Sales_data trans;
        double trans_price;
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans_price)
        {
            trans.revenue = trans.units_sold * trans_price;

            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
                if (total.units_sold)
                    std::cout << total.revenue / total.units_sold << std::endl;
                else
                    std::cout << "no sales" << std::endl;

                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
        if (total.units_sold)
            std::cout << total.revenue / total.units_sold << std::endl;
        else
            std::cout << "no sales" << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    // $ 2.42.exe <./data/book_sales
    return 0;
}
