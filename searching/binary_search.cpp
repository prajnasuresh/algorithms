#include <iostream>
using namespace std;

//to apply binary_search on any array array must be sorted
//otherwise answer we may be not correct

int binary_search_function(int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 13;
    int result = binary_search_function(arr, 0, n - 1, key);

    if (result == -1)
    {
        cout << key << " not found in arr\n";
    }
    else
    {
        cout << key << " found at index " << result << "\n";
    }
    return 0;
}