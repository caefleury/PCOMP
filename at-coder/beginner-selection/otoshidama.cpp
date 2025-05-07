// https://atcoder.jp/contests/abs/tasks/abc085_c
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

    int N,Y;

    cin >> N >> Y;

    int a,b,c;

    for (int a=0;a<=N;a++){
        for (int b=0;b<=N-a;b++){
            for (int c=0;c<=N-(a+b);c++){ 
                if (a*10000+b*5000+c*1000==Y && (a+b+c) == N){
                    cout << a << " " << b << " " << c << endl;
                    return 0;
                }
            }
        }
    }

    cout << "-1 " << "-1 " << "-1 " << endl;
    return 0;

}