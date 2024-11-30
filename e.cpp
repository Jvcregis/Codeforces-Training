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
    ll vector_size, first, next, count;
    cin >> vector_size;

    cin >> first;

    count = 0;

    if (vector_size == 1) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < vector_size - 1; i++) {
        cin >> next;
        if (next < first) {
            count += first - next;
        } else {
            first = next;
        }
    }

    cout << count << endl;
}