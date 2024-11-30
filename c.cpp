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
    cin >> input;
    
    vector<int> result;

    if (input == "|") {
        return 0;
    }

    int count = 0;
    for (int i = 1; i < input.length(); i++) {
        if (input[i] == '|') {
            result.push_back(count);
            count = 0;
        } else {
            count++;
        }
    }

    for (int j = 0; j < result.size() - 1; j++) {
        cout << result.at(j) << " ";
    }
    
    cout << result.at(result.size() - 1) << endl;
}