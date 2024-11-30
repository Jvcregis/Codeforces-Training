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
    ll segments, length;

    cin >> segments;

    vector<ll> lengths;

    for (int i = 0; i < segments; i++) {
        cin >> length;
        lengths.push_back(length);
    }

    sort(lengths.begin(), lengths.end());

    for (int j = 0; j < segments - 2; j++) {
        int a1, a2, a3;
        a1 = lengths[j];
        a2 = lengths[j + 1];
        a3 = lengths[j + 2];

        if (a1 + a2 > a3 and a1 + a3 > a2 and a2 + a3 > a1) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}