// https://atcoder.jp/contests/abs/tasks/abc081_b

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define size(z) (long long)z.size()
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

int main (){
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> numbers;

    for (int i = 0 ; i < N ; i++){
        int x;
        cin >> x;
        numbers.pb(x);
    }

    int n_ops = 0;
    bool even = true;
    while (even){
        for (int i = 0 ; i < N ; i++){
            if (numbers[i] % 2 != 0){
                cout << n_ops;
                return 0;
            } 
            numbers[i] /= 2;
        }
        n_ops++;
    }
}