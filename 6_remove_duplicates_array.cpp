/*
 *   Copyright (c) 2021 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

// O(n2) solution

int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[n - 1];
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

    n = removeDuplicates(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}