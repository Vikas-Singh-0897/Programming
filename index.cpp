#include <iostream>
#include <math.h>
using namespace std;
// Bubble Sort
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
// Main Function
int main()
{
    int arr[] = {1, 3, 5, 2, 1, 4, 5, 6, 7, 8};
    int size = 10;
    cout << "Welcome to the programme" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}