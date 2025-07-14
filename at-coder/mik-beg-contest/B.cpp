#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define size(z) (long long)z.size()
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
    int N;
    cin >> N;
    string sentence;
    ll size = 0;

    while (N--) {
        char c;
        long long l; //10¹⁸
        cin >> c >> l;

        if (size + l > 100) {
            cout << "Too Long" << endl;
            return 0;
        } else {
            size += l;
            string termo = string(l, c); 
            sentence += termo;
        }
    }

    cout << sentence << endl;
    return 0;
}