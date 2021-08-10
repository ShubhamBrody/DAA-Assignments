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

        //InsertionSort
        int comp = 0, shifts = 0;

        for (int i = 1; i < n; i++)
        {
            int curr = i;
            for (int j = i - 1; j >= 0; j--)
            {
                comp++;
                if (arr[curr] > arr[j])
                    break;

                shifts++;
                arr[j] += arr[curr];
                arr[curr] = arr[j] - arr[curr];
                arr[j] = arr[j] - arr[curr];
                curr = j;
            }
            // cout << comp << " " << shifts << endl;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ' ';
        }

        cout << endl
             << "comparisons=" << comp << endl;
        cout << "shifts=" << shifts << endl;
    }
}