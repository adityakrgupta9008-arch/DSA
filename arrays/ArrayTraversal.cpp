// Topic: Array Traversal
// Concept:
// Traversal means visiting every element of the array.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}