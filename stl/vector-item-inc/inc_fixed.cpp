#include <iostream>
#include <vector>
#include <algorithm>
#include "../common/print.hpp"
using namespace std;

void add10(int& elem)
{
    elem += 10;
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

    //add 10 to each element
    for_each (col1.begin(), col1.end(), add10);

    PRINT_ELEMENTS(col1, "after: ");
    cout << endl;
}
