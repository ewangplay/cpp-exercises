#include <iostream>
#include <vector>
#include <algorithm>
#include "../common/print.hpp"
using namespace std;

template <int add_value>
void add(int& elem)
{
    elem += add_value;
}

int main()
{
    //create a vector collection col1
    vector<int> col1;

    //insert some elements in col1
    for (int i = 1; i <= 9; ++i)
    {
        col1.push_back(i);
    }

    //print all elements
    PRINT_ELEMENTS(col1, "before: ");
    cout << endl;

    for_each (col1.begin(), col1.end(), add<10>);

    PRINT_ELEMENTS(col1, "after: ");
    cout << endl;
}
