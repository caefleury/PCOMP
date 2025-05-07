// https://atcoder.jp/contests/abs/tasks/abc085_b
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

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // add kagami mochis to set and then find the size
    int n;
    cin >> n;
    set<int> kagami;
    int k;

    while (n--){
        cin >> k;
        kagami.insert(k);
    }

    cout << kagami.size() << endl; 

    return 0;
}