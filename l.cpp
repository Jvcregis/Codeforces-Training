#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endll '\n'
#define fIo                      \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define pii pair<int, int>
#define pll pair<ll, ll>

ll factorial(ll n) {
    if (n == 0 or n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main()
{
    ll num;
    cin >> num;

    ll trailling_zeros = num / 5 + num / 100 + num / 1000 + num / 100000 + num / 1000000 + num / 10000000 + num / 100000000 + num / 1000000000;

    cout << trailling_zeros;

    return 0;
}