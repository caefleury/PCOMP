//https://codeforces.com/contest/2094/problem/B
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

    int t,l,r,n,m;
    cin >> t;
    
    
    while (t--){
        cin >> n >> m >> l >> r;
        vi houses = {0};

        for (int i = -1;i >= l; i--){
            if (m == 0){
                break;
            } else{
                houses.pb(i);
                m--;
            }
        }

        for (int i = 1;i <= r; i++){
            if (m == 0){
                break;
            } else{
                houses.pb(i);
                m--;
            }
        }

        sort(all(houses));

        cout << houses[0] << ' ' << houses.back() << endl;
    }



    return 0;
}