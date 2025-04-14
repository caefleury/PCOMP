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
        int m,n;

        cin >> n >> m;

        int xi,xf = 0,yi,yf = 0;

        for (int i = 0; i < n;i++){
            int x,y;
            cin >> x >> y;

            if (i == 0){
                xi = x;
                yi = y;  
            }

            xf += x;
            yf += y;  

        }

        int perimeter = ((xf+m-xi) +  (yf+m-yi)) * 2;
        
        cout << perimeter << endl;


    }


    return 0;
}