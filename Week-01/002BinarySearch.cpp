#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int a[1000];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> k;
        int l = 0, r = n - 1;
        int loops = 0;
        bool found = false;
        while (l <= r)
        {
            loops++;
            int mid = (r + l) / 2;
            if (a[mid] == k)
            {
                found = true;
                break;
            }
            else if (a[mid] < k)
                l = mid + 1;
            else
                r = mid - 1;
        }

        if(found)
            cout << "Present " << loops << endl;
        else
            cout << "Not present " << loops << endl;
    }
}