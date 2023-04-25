#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

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

    // $ 2.41.exe <./data/book_sales
    return 0;
}
