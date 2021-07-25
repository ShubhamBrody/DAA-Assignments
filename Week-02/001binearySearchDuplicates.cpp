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
        int found = -1;
        while (l <= r)
        {
            int mid = (r + l) / 2;
            if (a[mid] == k)
            {
                found = mid;
                break;
            }
            else if (a[mid] < k)
                l = mid + 1;
            else
                r = mid - 1;
        }

        if (found != -1)
        {
            int foundNum = a[found];
            int num = 1, kk = 1;
            bool f1 = false, f2 = false;
            while(!(f1 && f2))
            {
                if (found-kk >= 0)
                {
                    if(a[found-kk] == k)
                        num++;
                }
                else
                {
                    f1 = true;
                }
                if (found+kk < n)
                {
                    if(a[found+kk] == k)
                        num++;
                }
                else
                {
                    f2 = true;
                }
                kk++;
            }
            cout << foundNum << " - " << num << endl;
        }
        else
            cout << "Not found" << endl;
    }
}