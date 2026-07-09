#include <iostream>
using namespace std;
int main()
{
    cout << "enter no of problem";
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;

        cout << "enter numbers b/w 0-1";
        cin >> x >> y >> z;
        int total = x + y + z;

        if (total >= 2)
        {
            sum++;
        }
    }
    cout << sum;

    return 0;
}