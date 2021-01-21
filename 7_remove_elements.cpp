/*
 *   Copyright (c) 2021 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

// O(n) solution

int removeDuplicates(int arr[], int n, int value)
{
    if (n == 0 || n == 1)
        return n;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != value)
        {
            arr[j++] = arr[i];
        }
    }

    return j;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int value;
    cin >> value;
    n = removeDuplicates(arr, n, value);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}