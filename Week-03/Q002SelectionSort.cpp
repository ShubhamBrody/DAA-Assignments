#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        //SelectionSort
        int comp = 0, shifts = 0;

        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int j = i+1; j < n; j++)
            {
                comp++;
                if(arr[j] < arr[min])
                {
                    min = j;
                }
            }
            if(i == min)
            continue;
            shifts++;
            arr[i] += arr[min];
            arr[min] = arr[i] - arr[min];
            arr[i] = arr[i] - arr[min];
            // cout << comp << " " << shifts << endl;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ' ';
        }

        cout << endl
             << "comparisons=" << comp << endl;
        cout << "swaps=" << shifts << endl;
    }
}