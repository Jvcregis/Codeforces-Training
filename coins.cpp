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
    int test_cases;
    ll n, k;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        cin >> n >> k;

        // 2 * x + k * y = n
        // 2 * x sempre vai ser par. Dito isso se k for par significa que n também tem que ser.
        // O caso que falha portanto é n ser ímpar e k ser par.

        if (k % 2 == 0 and n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}