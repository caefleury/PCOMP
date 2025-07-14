#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define sz(z) (long long)z.size()
#define all(x) x.begin(), x.end()

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef set<int> si;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef set<ll> sll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;

    vector<ll> X(N);
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    sort(X.begin(), X.end());


    vector<ll> unique_X;
    for (int i = 0; i < N; ++i) {
        if (i == 0 || X[i] != X[i-1]) {
            unique_X.push_back(X[i]);
        }
    }
    

    if (M >= (int)unique_X.size()) {
        cout << 0 << endl;
        return 0;
    }


    ll low = 0;
    ll high = 1e18;
    ll ans = -1;
    
    while (low <= high) {
        ll mid = (low + high) / 2;
        

        int stations_needed = 1;
        ll current_pos = X[0];
        ll max_reach = current_pos + mid;
        
        for (int i = 1; i < N; ++i) {
            if (X[i] > max_reach) {
    
                stations_needed++;
                current_pos = X[i];
                max_reach = current_pos + mid;
            }
        }
        
        if (stations_needed <= M) {

            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans * M << endl;
    return 0;
}