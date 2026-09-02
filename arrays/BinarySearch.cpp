//Binary Search

// Requirements:
// 1. Array must be sorted.

// Time Complexity:
// O(log n)

// Idea:
// Check middle element.
// If target is greater, search right half.
// If target is smaller, search left half.

#include <iostream>
#include <algorithm>
using namespace std;

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[7] = {10,20,30,40,50,60,70};

    cout << binarySearch(arr, 7, 50);

    return 0;
}