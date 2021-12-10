#include <iostream>
using namespace std;
void swap(int arr[], int n)
{
    int i = 0;
    int j = i + 1;

    while (j < n)
    {

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i = i + 2;
        j = i + 1;
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swap(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}