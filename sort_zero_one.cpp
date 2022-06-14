#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Problem:01--> short zero one in given array
// Ex: [0,1,1,0,0,1,0,1,0]--> [0,0,0,0,0,1,1,1,1]
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;
}

void sortZeroOne(int arr[], int n)
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
        while(arr[left]==0 && left<right)
        {
            left++;
        }

        while(arr[right]==1 && left<right)
        {
            right--;
        }
        if(left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;

        }

    }
}

//Problem:02--> short zero one in given array
// Ex: [0,1,1,2,0,2,2,1,0]--> [0,0,0,1,1,1,2,2,2]

void sortZeroOneTow(int arr[], int n)
{
}
int main(void)
{
    int arr[8] = {1,1,0,0,0,0,1,0};
    sortZeroOne(arr, 8);
    printArray(arr, 8);
    return 0;
}