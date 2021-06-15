#include <iostream>
using namespace std;

int main()
{
    int rows, col;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    cout << "Enter the no. of columns: ";
    cin >> col;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
