#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int max = 0;
    int tmax = 0;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            tmax = i;
        }
    }
    int min = arr[0];
    int tmin = 0;
    for (int i = 1; i < t; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
            tmin = i;
        }
    }
    int ans = tmax + (t - 1 - tmin);

    if (tmax > tmin)
    {
        cout << ans-1;
    }
    else
    {
        cout << ans;
    }
}
