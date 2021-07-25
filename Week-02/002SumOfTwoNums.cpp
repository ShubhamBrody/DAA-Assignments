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
        int hashArr[1000] = {0};
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            hashArr[arr[i]] = i+1;
        }

        int c;

        for(int i = 0; i < n-1; i++)
        {
            c = 0;
            for(int j = i+1; j < n; j++)
            {
                int sum = arr[i] + arr[j];
                if(hashArr[sum] > 0)
                {
                    cout << i+1 << ", " << j+1 << ", " << hashArr[sum] << endl;
                    c = 1;
                    break;
                }
            }
            if(c)
            break;
        }

        if(!c)
        {
            cout << "No sequence found" << endl;
        }
    }
}