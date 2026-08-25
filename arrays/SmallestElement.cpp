#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 25, 7, 40, 15};
    int smallest;
    for(int i =0; i<5; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        } 
    }
    cout << "Smallest : "<< smallest;
    return 0;
}
