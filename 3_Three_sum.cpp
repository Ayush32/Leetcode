/*
 *   Copyright (c) 2021 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

// // O(n) solution

// void twoSum(int arr[], int n, int target)
// {
//     unordered_set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         int temp = target - arr[i];
//         if (s.find(temp) != s.end())

//             cout << "pair with given sum is " << arr[i] << " " << temp;
//         s.insert(arr[i]);
//     }
// }

// O(n2) Solution
void threeSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)

                    cout << "Sum is Equal to " << arr[i] << " " << arr[j] << " " << arr[k];
                cout << endl;
            }
        }
    }
}
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

    threeSum(arr, n, target);
    return 0;
}