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

    stack<int> stack;

    string lista;
    cin >> lista;
    bool flagPair = false;

    for (char digit : lista) {
        digit = digit - '0';

        if (!stack.empty() && stack.top() == digit) {
            stack.pop();
            flagPair = true;
        } else {
            stack.push(digit);
        }
    }

    if (flagPair && stack.empty()) {
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }

    return 0;
}
