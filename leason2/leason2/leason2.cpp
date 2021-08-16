#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n < 0) {
        cout << "\n Fail ! Please enter again: ";
        cin >> n;
    }
    cout << "\n" << "Factorial: " << n << "! = " << factorial(n) << "\n";
    return 0;
}
