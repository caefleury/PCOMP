#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define size(z) (long long)z.size()
#define all(x) x.begin(), x.end()
#define rep(i,a,b) for(int i = a; i <= b; i++)

typedef vector<int> vi;
typedef set<int> si;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

int main (){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    while (t--){
        ll x,y;
        cin >> x >> y;
        if (x-y > 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


    return 0;
}