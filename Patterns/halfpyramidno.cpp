#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " "; // i for 1 22 333 && j for 1 12 123
        }
        cout << endl;
    }
    return 0;
}