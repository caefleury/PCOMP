#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define size(z) (long long)z.size()
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

int main (){
    ios::sync_with_stdio(false);

    string s;
    int sum = 0;
    
    cin >> s;

    for (int i = 0; i < size(s); i++) {
        if (s[i] == '1'){
            sum++;
        }
    }   

    cout << sum << endl;
}