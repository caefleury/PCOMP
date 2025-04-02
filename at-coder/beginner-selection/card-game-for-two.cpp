// https://atcoder.jp/contests/abs/tasks/abc088_b
#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define size(z) (long long)z.size()
#define all(x) x.begin(), x.end()
#define rep(i,a,b) for(int i = a; i <= b; i++)

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

int main (){
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vi cards;

    // Recebe as cartas
    rep(i,1,N){
        int x;
        cin >> x;
        cards.pb(x);
    };

    // Faz o sort e ordem descendente com o argumento greater<int>
    sort(all(cards),greater<int>());
    int alice_count = 0 , bob_count = 0;
    
    for(int i = 0; i <= N; i+=2){
        alice_count += cards[i];
    }

    for(int i = 1; i <= N; i+=2){
        bob_count += cards[i];
    }

    cout << alice_count - bob_count;

    return 0;
}


// Como sortear um vetor em ordem descendente ->
//   sort(all(cards),greater<int>());
