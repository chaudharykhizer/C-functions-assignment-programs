#include<iostream>
#include<cmath>
using namespace std;

double stdev(double x[], int n)
{
    double mean = 0;
    double variance = 0;

    for(int i=0; i<n; i++)
    {
        mean = mean + x[i];
    }

    mean = mean / n;

    for(int i=0; i<n; i++)
    {
        variance = variance + pow(x[i] - mean, 2);
    }

    variance = variance / n;

    return sqrt(variance);
}

int main()
{
    int n;
    double arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << "Enter value " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Standard Deviation = " << stdev(arr, n);

    return 0;
}
