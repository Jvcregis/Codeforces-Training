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
    int n, m, vote;
    cin >> n >> m;

    int arr[n] = {0 * n};

    cin >> vote;
    int curr_winner = vote; // Vencedor inicial
    arr[vote - 1] += 1;

    cout << curr_winner << endl;

    for (int i = 1; i < m; i++) {
        cin >> vote;

        arr[vote - 1] += 1;

        if (arr[vote - 1] > arr[curr_winner - 1]) {
            curr_winner = vote;
        } else if (arr[vote - 1] == arr[curr_winner - 1]) {
            if (vote < curr_winner) {
                curr_winner = vote;
            }
        }

        cout << curr_winner << endl;
    }

    return 0;
}