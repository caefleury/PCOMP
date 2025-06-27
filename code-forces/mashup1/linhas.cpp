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

    // vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12}

    while (t--){
        int a,b,c,d;

        cin >> a >> b >> c >> d;

        vector<int> invalidos;

        int menor = min(c,d);
        int maior = max(c,d)
;
        for (int i = menor+1; i <maior;i++){
            invalidos.pb(i);
        }

        auto a_find = find(invalidos.begin(), invalidos.end(), a);
        auto b_find = find(invalidos.begin(), invalidos.end(), b);

        if (a_find != invalidos.end() && b_find == invalidos.end() ||
        a_find == invalidos.end() && b_find != invalidos.end()) {
            cout << "YES"<< endl;
        } else {
            cout << "NO"<< endl;
        }
    }


    return 0;
}