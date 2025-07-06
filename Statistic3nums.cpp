#include <iostream>
#include <cmath>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    float num1, num2, num3;
    float numbers[3];

    cout << "Enter First Number to analyze: ";
    cin >> num1;
    cout << "Enter Second Number to analyze: ";
    cin >> num2;
    cout << "Enter Third Number to analyze: ";
    cin >> num3;

    numbers[0] = num1;
    numbers[1] = num2;
    numbers[2] = num3;



    float sum = num1 + num2 + num3;
    float mean = sum / 3;
    sort(numbers, numbers + 3);
    float median = numbers[1];
    float variance = ((pow(num1 - mean, 2) + pow(num2 - mean, 2) + pow(num3 - mean, 2)) / 3);
    float stddeviation = sqrt(variance);




    cout << "Sum of numbers is: " << sum << endl;
    cout << "Mean: " << mean << endl;
    cout << "Median: " << median << endl;
    cout << "Variance: " << variance << endl;
    cout << "Standard Deviation: " << stddeviation << endl;

    return 0;
}
