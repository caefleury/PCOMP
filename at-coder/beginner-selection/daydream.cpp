// https://atcoder.jp/contests/abs/tasks/arc065_a
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

    string s;
    cin >> s;
    
    // We'll work from the end of the string to the beginning
    // This is more reliable for this problem
    bool possible = true;
    int i = s.size();
    
    while (i > 0) {
        if (i >= 7 && s.substr(i-7, 7) == "dreamer") {
            i -= 7;
        } else if (i >= 6 && s.substr(i-6, 6) == "eraser") {
            i -= 6;
        } else if (i >= 5 && s.substr(i-5, 5) == "dream") {
            i -= 5;
        } else if (i >= 5 && s.substr(i-5, 5) == "erase") {
            i -= 5;
        } else {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}