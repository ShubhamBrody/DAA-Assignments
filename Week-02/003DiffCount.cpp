#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int k;
        cin >> k;

        int c = 0;

        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int diff = arr[i] - arr[j];
                if(abs(diff) == abs(k))
                c++;
            }
        }
        cout << c << endl;
    }
}