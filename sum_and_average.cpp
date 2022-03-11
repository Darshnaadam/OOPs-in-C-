#include <iostream>

using namespace std;

int main()
{
    int num1, num2, sum;
    float average;

    cout << "Enter two numbers: \n";
    cin >> num1; "\n";
    cin >> num2;

    sum = num1 + num2;
    average = sum/2;

    cout << "Sum of two number is: " << sum << "\n";
    cout << "Average of two number is: " << average << "\n";

    return 0;
}
