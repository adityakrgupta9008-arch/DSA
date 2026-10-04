#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {5,3,1,4,2};

    for(int i = 1; i < 5; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//| Algorithm      | Best  | Average | Worst |
//| -------------- | ----- | ------- | ----- |
//| Bubble Sort    | O(n²) | O(n²)   | O(n²) |
//| Selection Sort | O(n²) | O(n²)   | O(n²) |
//| Insertion Sort | O(n)  | O(n²)   | O(n²) |
