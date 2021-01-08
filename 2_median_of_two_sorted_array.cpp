/*
 *   Copyright (c) 2021 
 *   All rights reserved.
 */

#include <bits/stdc++.h>
using namespace std;

int getMedian(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    int m1 = 1, m2 = -1;
    int count = 0;

    if ((n + m) % 2 == 1)
    {
        for (count = 0; count <= (n + m) / 2; count++)
        {
            if (i != n && j != m)
            {
                m1 = (arr1[i] > arr2[j]) ? arr2[j++] : arr1[i++];
            }
            else if (i < n)
            {
                m1 = arr1[i++];
            }
            else
            {
                m1 = arr2[j++];
            }
        }
        return m1;
    }
    else
    {

        for (count = 0; count <= (n + m) / 2; count++)
        {
            m2 = m1;
            if (i != n && j != m)
            {
                m1 = (arr1[i] > arr2[j]) ? arr2[j++] : arr1[i++];
            }
            else if (i < n)
            {
                m1 = arr1[i++];
            }
            else
            {
                m1 = arr2[j++];
            }
        }
    }
    return (m1 + m2) / 2;
}

int main()
{
    int n, m, target;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    cout << getMedian(arr1, arr2, n, m);
    return 0;
}