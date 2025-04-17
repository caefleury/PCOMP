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
        int x,y;

        cin >> x >> y;

        for (int i=0;i<x;i++){
            for (int j= 0;j<y;j++){
                if (i == 0 && j == 0){
                    cout << 'W';
                } else {
                    cout << 'B';
                }

            }
            cout << endl;
        }
    }

    return 0;
}