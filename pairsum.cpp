#include <iostream>
#include <bits/stdc++.h>
#include <array>
#include <vector>

using namespace std;

// Find all the pairs(sorted order) whose sum gives targeted value
// Ex: input: [1,2 3 4 5 ],tagtet:5--> [1,4], [2,3]

//printVector

vector<vector<int>> findPairSum(int arr[],int n, int target)
{
    // int n = sizeof(arr) / sizeof(int);
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
        }

            }

    }
    return ans;
}

void printVector(vector<vector<int>> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }

}

int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<vector<int>> ans = findPairSum(arr,n, target);
    printVector(ans);


    return 0;
}

//link https://www.youtube.com/watch?v=oVa8DfUDKTw