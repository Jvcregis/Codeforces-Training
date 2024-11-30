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

    ll message_number, charge, consumption, on_off, message_instant, interval;

    for (int i = 0; i < num_test_cases; i++) {
        cin >> message_number >> charge >> consumption >> on_off;

        ll curr_inst = 0;

        bool possible = true;

        for (int j = 0; j < message_number; j++) {
            cin >> message_instant;

            interval = message_instant - curr_inst;

            // Verificar o que é melhor: desligar e ligar ou esperar a mensagem com ele ligado
            ll charge_lost = consumption * interval;

            charge -= min(charge_lost, on_off);

            curr_inst = message_instant;

            if (charge <= 0) {
                possible = false;
            }
        }

        if (possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}