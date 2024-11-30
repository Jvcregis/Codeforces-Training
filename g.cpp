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
    int test_cases, path_length, coins, curr_pos;
    string path;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        cin >> path_length;
        cin >> path;
        curr_pos = 0;
        coins = 0;
        while (true) {
            if (curr_pos >= path_length) {
                break;
            }

            if (path[curr_pos] != '*') {
                if (path[curr_pos] == '@') {
                    coins++;
                }

                if (curr_pos + 1 < path_length) {
                    char next_pos = path[curr_pos + 1];

                    if (next_pos != '*') {
                        curr_pos++;
                    } else {
                        curr_pos += 2;
                    }
                } else {
                    break;
                }
            } else {
                break;
            }

        }

        cout << coins << endl;

    }

    return 0;
}