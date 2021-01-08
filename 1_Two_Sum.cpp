/*
 *   Copyright (c) 2021 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

// O(n) solution

void twoSum(int arr[], int n, int target)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        int temp = target - arr[i];
        if (s.find(temp) != s.end())

            cout << "pair with given sum is " << arr[i] << " " << temp;
        s.insert(arr[i]);
    }
}

// O(n2) Solution
// void twoSum(int arr[], int n, int target)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == target)

//                 cout << "Sum is Equal to " << arr[i] << " " << arr[j];
//             cout << endl;
//         }
//     }
// }

int main()
{
    int n, target;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> target;

    twoSum(arr, n, target);
    return 0;
}