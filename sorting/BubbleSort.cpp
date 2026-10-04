//Bubble short means compare first & second than 2 & 3rd so on
//than compare 1& 2 nd so on continue 
#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {5,3,1,4,2};

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}