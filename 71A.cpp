#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Enter number of lines";
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
    }
    while (n--)
    {
        int l = s.length();
        if (l > 10)
        {
            cout << s[0] << l - 2 << s[l - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}