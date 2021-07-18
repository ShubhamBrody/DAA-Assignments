#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100000];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int key, loops = 0;
    cin >> key;
    int found = 0;
    int i;

    for (i = 1; i <= n; i *= 2)
    {
        loops++;
        if (arr[i] == key)
        {
            cout << "Present " << loops << endl;
            found = 1;
        }
        else if (arr[i] > key)
        {
            int init;
            if(i <= 2)
            init = 0;
            else
            init = i / 2 + 1;

            for (int j = init; j < min(n, i); j++)
            {
                loops++;
                if (arr[j] == key)
                {
                    cout << "Present " << loops << endl;
                    found = 1;
                }
            }
        }
        if(i == 0){
            i += 2;
        }
    }

    for(int j = i/2+1; j < n; j++)
    {
        loops++;
        if(arr[j] == key)
        {
            cout << "Present " << loops << endl;
            found = 1;
        }
    }

    if(!found)
    {
        cout << "Not Present " << loops << endl;
    }
}