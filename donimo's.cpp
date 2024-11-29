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
    // Ideia: cada pessoa vai comer 2 fatias de pizza --> tem 2 * n fatias. Objetivo é agrupar dois a dois
    // de modo que a soma do tamanho das duas fatias seja parecida com a dos outros pares de fatias.
    int n;
    cin >> n;

    vector<int> slices;

    int slice_size;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> slice_size;
        slices.push_back(slice_size);
    }

    sort(slices.begin(), slices.end());

    vector<int> added_pairs;

    int end = 2 * n - 1;
    for (int j = 0; j < n; j++)
    {
        int min = slices.at(j);
        int max = slices.at(end - j);

        added_pairs.push_back(min + max);
    }

    int min_pair = *min_element(added_pairs.begin(), added_pairs.end());

    int max_pair = *max_element(added_pairs.begin(), added_pairs.end());

    cout << max_pair - min_pair << endl;

    return 0;
}