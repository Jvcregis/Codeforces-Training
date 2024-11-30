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
    string input;
    int count = 0;
    for (int i = 1; i <= 12; i++) {
        cin >> input;
        if (input.length() == i) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}