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
        cin >> n;

        bool in_blank = false;
        int lgst_blank = 0;
        int x;
        int count = 0;

        for (int i=0;i<n;i++){
            cin >> x;

            if (x == 1){
                count = 0;
            } else {
                count++;
                if (count >= lgst_blank){
                    lgst_blank = count;
                }
                
            }
        }

        cout << lgst_blank << endl;
    }


    return 0;
}