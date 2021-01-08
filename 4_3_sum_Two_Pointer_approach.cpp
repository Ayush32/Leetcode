/*
 *   Copyright (c) 2021 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

// O(n2) Solution
void threeSum(int arr[], int n, int target)
{
    int l, r;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        l = i + 1;
        r = n - 1;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] + arr[j] + arr[r] == target)
            {

                cout << "Sum is Equal to " << arr[i] << " " << arr[l] << " " << arr[r];
            }
            else if (arr[i] + arr[l] + arr[r] < target)
                l++;
            else
                r--;
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