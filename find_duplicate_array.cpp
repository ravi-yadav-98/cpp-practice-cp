#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//leetcode problem:
//1. Find dupliated element in arry(which is repeating twice)
//Ex: N=5 [1,2,3,4,3]: --> ans:3
//brute force approach: Count number of occurance for elements

int findDuplicateElemenet(int arr[], int n)
{
  int ans =0;
  for(int i=0;i<n;i++)
  {
    ans = ans^arr[i];
  }
  for(int i=1;i<n;i++)
  {
    ans = ans^i;
  }
  return ans;
}

//2. find all duplicates in array
// ex: [1,2,3,4,5,3,2,6]--> [2,3]
//link https://www.youtube.com/watch?v=oVa8DfUDKTw
int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<findDuplicateElemenet(arr, n);
  return 0;
}

