#include <iostream>
using namespace std;

int main()
{
    double n, guess, root;
    int j;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter number of iterations: ";
    cin >> j;

    guess = n / 2;

    cout << "Iteration\t" << "Guess\t\t" << "Root\n";

    for (int i = 1; i <= j; i++)
    {
        root = n / guess;
        cout << i << "\t\t" << guess << "\t\t" << root << endl;
        guess = (guess + root) / 2;
    }
}