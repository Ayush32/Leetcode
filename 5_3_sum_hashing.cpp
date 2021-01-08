/*
 *   Copyright (c) 2021 
 *   All rights reserved.
 */
/*
 *   Copyright (c) 2021 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

// O(n) solution

void threeSum(int arr[], int n, int target)
{

    for (int i = 0; i < n - 2; i++)
    {
        unordered_set<int> s;
        int curr_sum = target - arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (s.find(curr_sum - arr[j]) != s.end())

                cout << "pair with given sum is " << arr[i] << " " << arr[j] << " " << curr_sum - arr[j];
            s.insert(arr[j]);
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