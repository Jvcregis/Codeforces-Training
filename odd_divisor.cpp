#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endll '\n'
#define fIo                      \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define pii pair<int, int>
#define pll pair<ll, ll>

int main()
{
    int test_cases, mod;
    ll num;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        cin >> num;
        while (num % 2 == 0)
        {
            num = num / 2;
        }

        if (num != 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}