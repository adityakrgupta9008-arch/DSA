#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,5,8,12,8};
    int target;
    cout<< "Enter target : ";
    cin>> target;
    for(int i = 0; i <5; i++){
        if (arr[i]== target){
            cout << "Target Found";
        }
        else {
            cout << "Not Found";
        }   
    }
}