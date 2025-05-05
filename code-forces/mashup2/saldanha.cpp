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

    int x1,x2,x3,x4;
    
    cin >> x1 >> x2 >> x3 >> x4;

    vector<int> sums = {x1,x2,x3,x4};
    sort(sums.rbegin(), sums.rend());

    int a,b,c;

    a = abs(-sums[0] + sums[1] + sums[2]);

    b = abs(a - sums[1]);

    c = abs(a - sums[2]);

    cout << a << " " << b << " " << c <<endl;

    return 0;
}