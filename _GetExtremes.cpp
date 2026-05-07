#include<iostream>
using namespace std;

void getExtremes(float &min, float &max, float a[], int n)
{
    min = a[0];
    max = a[0];

    for(int i=1; i<n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }

        if(a[i] > max)
        {
            max = a[i];
        }
    }
}

int main()
{
    int n;
    float arr[100], min, max;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    getExtremes(min, max, arr, n);

    cout << "Minimum value = " << min << endl;
    cout << "Maximum value = " << max << endl;

    return 0;
}
