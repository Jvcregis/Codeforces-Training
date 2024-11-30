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
    int num_test_cases;
    cin >> num_test_cases;

    int n, m;
    string b1, b2;

    for (int i = 0; i < num_test_cases; i++) {
        cin >> n >> m >> b1 >> b2;

        int imperfection_index_b1 = -1;
        int imperfection_num_b1 = 0;
        for (int j = 0; j < n-1; j++) {
            char cur_char = b1[j];
            char next_char = b1[j + 1];

            if (cur_char == next_char) {
                imperfection_index_b1 = j + 1;
                imperfection_num_b1 ++;
            }
        }

        int imperfection_index_b2 = -1;
        int imperfection_num_b2 = 0;
        for (int j = 0; j < m-1; j++) {
            char cur_char = b2[j];
            char next_char = b2[j + 1];

            if (cur_char == next_char) {
                imperfection_index_b2 = j + 1;
                imperfection_num_b2 ++;
            }
        }

        if (imperfection_num_b1 > 1 or imperfection_num_b2 > 1 or (imperfection_num_b1 == 1 and imperfection_num_b2 == 1)) {
            cout << "NO" << endl;
        } else if (imperfection_num_b1 == 0 and imperfection_num_b2 == 0) {
            cout << "YES" << endl;
        } else if (imperfection_num_b1 == 1) {
            if (b1[n - 1] != b2[m - 1]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            if (b1[n - 1] != b2[m - 1]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

        
    }

    return 0;
}