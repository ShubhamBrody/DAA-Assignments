#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i+1;
        }
    }
    return i;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1000];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x;
        cin >> x;
        int idx = linearSearch(a, n, x);
        if(idx == n)
        cout << "Not Present " << idx << endl;
        else
        cout << "Present " << idx << endl;
    }
}