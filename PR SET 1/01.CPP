//  Write a program to check whether given number is the prime number or not, using a member
// function.

#include <iostream>
using namespace std;

int main()
{
    int i, n, count = 0;
    cout << "Enter the value : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "the number is prime" << endl;
    }
    else
    {
        cout << "the number is not prime" << endl;
    }
    return 0;
}
