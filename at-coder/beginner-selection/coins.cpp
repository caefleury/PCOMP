// https://atcoder.jp/contests/abs/tasks/abc087_b
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

    int A,B,C,X;
    int options = 0;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;

    for (int a=0;a<=A;a++){
        for (int b=0;b<=B;b++){
            for (int c=0;c<=C;c++){ 
                if (a*500+b*100+c*50==X){
                    options++;
                }
            }
        }
    }

    cout << options<< endl;
}

// No need for cheks before each inner loop
// <= necessary to avoid going through 0 to N-1
// *Not a roman numeral problem since there are many options
// No need for dinamic sum count and reset.
