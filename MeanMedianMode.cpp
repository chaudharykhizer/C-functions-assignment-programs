#include<iostream>
using namespace std;

float mean(int arr[], int n)
{
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    return (float)sum / n;
}

float median(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if(n % 2 == 0)
    {
        return (arr[n/2] + arr[(n/2)-1]) / 2.0;
    }
    else
    {
        return arr[n/2];
    }
}

int mode(int arr[], int n)
{
    int mode = arr[0];
    int maxCount = 0;

    for(int i=0; i<n; i++)
    {
        int count = 0;

        for(int j=0; j<n; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}

int main()
{
    int n;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << "Enter value " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Mean = " << mean(arr, n) << endl;
    cout << "Median = " << median(arr, n) << endl;
    cout << "Mode = " << mode(arr, n) << endl;

    return 0;
}
