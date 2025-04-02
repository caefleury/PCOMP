#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define size(z) (long long)z.size()
#define all(x) x.begin(), x.end()
#define rep(i,a,b) for(int i = a; i <= b; i++)

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

int main (){
    ios::sync_with_stdio(false);
    int N;
    ll missing_sum;
    cin >> N;

    rep(i,1,N-1){
        int x;
        cin >> x;
        missing_sum += x;
    }


    int missing_number = (N*(1+N))/2 - missing_sum;
    cout << missing_number;

    return 0;
}