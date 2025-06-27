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

    while (t--){

        int n;

        cin >> n;

        ll mins = 9999999999,min1 = 9999999999,min2 = 9999999999;
        bool hab1 = false;
        bool hab2 = false;

        while (n--){

            ll m;
            string hab;

            cin >> m >> hab;

            if (hab == "00"){
                continue;
            } else {
                if (hab == "01" && m<min2){
                    min2 = m;
                    hab2 = true;
                }
    
                if (hab == "10" && m<min1){
                    min1 = m;
                    hab1 = true;
                } 
    
                if (hab == "11" && m<mins){
                    mins = m;
                    hab1 = true;
                    hab2 = true;
                } 
            }
        }

        if (hab1 && hab2){
            ll min_tot = min1 + min2;
            cout << min(mins, min_tot) << endl;
        } else {
            cout << -1 << endl;
        }
     
    }

    return 0;
}