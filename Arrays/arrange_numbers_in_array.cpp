#include <iostream>
using namespace std;
void arrange_numbers(int arr[], int n)
{
    int i = 0;
    int j = 0;

    while (j <= n)
    {
        if (j % 2 != 0)
        {
            arr[i] = j;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    j = n;
    while (j >= 1)
    {
        if (j % 2 == 0)
        {
            arr[i] = j;
            i++;
            j--;
        }
        else
        {
            j--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[10000];

    arrange_numbers(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
