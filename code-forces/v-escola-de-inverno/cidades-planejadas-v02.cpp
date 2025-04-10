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

    int n;
    cin >> n;

    char matriz[n][n];

    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            cin >> matriz[i][j];
        }
    }


    for (int i=0;i<=n/2;i++){
        for (int j=0;j<=n-1;j++){
            if (matriz[i][j] != matriz[j][i]){
                cout << "Nao";
                return 0;
            }
        }
    }

    cout << "Sim";
    return 0;
}