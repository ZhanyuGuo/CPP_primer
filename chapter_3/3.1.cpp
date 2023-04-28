#include <iostream>
#include <string>

#include "Sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

// int main()
// {
//     int num = 50, sum = 0;
//     while (num <= 100)
//     {
//         sum += num;
//         ++num;
//     }
//     cout << sum << endl;

//     return 0;
// }

// int main()
// {
//     int num = 10;
//     while (num >= 0)
//     {
//         cout << num << endl;
//         --num;
//     }

//     return 0;
// }

// int main()
// {
//     int v1, v2;
//     cout << "Enter two numbers" << endl;
//     cin >> v1 >> v2;

//     // 使v1始终小于等于v2
//     if (v1 > v2)
//     {
//         int tmp = v1;
//         v1 = v2;
//         v2 = tmp;
//     }

//     while (v1 <= v2)
//     {
//         cout << v1 << endl;
//         ++v1;
//     }

//     return 0;
// }

int main()
{
    Sales_data total;
    double total_price;
    if (cin >> total.bookNo >> total.units_sold >> total_price)
    {
        total.revenue = total.units_sold * total_price;

        Sales_data trans;
        double trans_price;
        while (cin >> trans.bookNo >> trans.units_sold >> trans_price)
        {
            trans.revenue = trans.units_sold * trans_price;

            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
                if (total.units_sold)
                    cout << total.revenue / total.units_sold << endl;
                else
                    cout << "no sales" << endl;

                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
        if (total.units_sold)
            cout << total.revenue / total.units_sold << endl;
        else
            cout << "no sales" << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }

    // $ 3.1.exe <./data/book_sales
    return 0;
}
