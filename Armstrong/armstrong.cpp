#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;

    double sum = 0;
    int lastDigit;
    int temp = n;
    while (n > 0)
    {
        lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }
    if (sum == temp)
    {
        cout << "Armstrong number" << endl;
    }

    else
    {
        cout << "Not Armstrong number " << endl;
    }

    return 0;
}