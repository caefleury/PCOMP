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
 
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n ;
        int sum = 0;

        while(n--){
            sum += n;
        }
              
        if (sum%2 == 0){
            cout << "YES"
        } else{
            cout << "NO"
        }
    return 0;
}