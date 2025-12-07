#include <iostream>
using namespace std;
int main()
{
    float n, m;
    cin >> n >> m;
    char c;
    cin >> c;
    if (c == '+')
        cout << n + m << endl;
    else if (c == '-')
        cout << n - m << endl;
    else if (c == '*')
        cout << n * m << endl;
    else if (c == '/')
    {
        if (m == 0)
            cout << "0 in denominator" << endl;
        else
            cout << n / m << endl;
    }
    return 0;
}