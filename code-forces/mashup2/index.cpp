#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back

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

    int p; // preço
    int n; // n reuniões
    cin >> p >> n;
    // output : preço final

    stack<int> aumentos;

    int d,v;
    while (n--){
        cin >> d >> v;

        if (d == 1){
            aumentos.push(v);
        } else {
            while (v--){
                aumentos.pop();
            }
        }

    }

    while(!aumentos.empty()){
        p += aumentos.top();
        aumentos.pop();
    }

    cout << p<< endl;
}