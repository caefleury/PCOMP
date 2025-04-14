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

    int n,k;
    int mins;
    cin >> n >> k;

    mins = (k - (n - 1)) / n;
    
    cout << mins << endl;

    return 0;
}

// remover interavalos (desconsiderar último)
// divisão inteira