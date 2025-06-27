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

    int Q;
    cin >> Q;

    stack<int> presentes;
    stack<int> max_presentes;
    
    char c;
    int x;


    while (Q--){
        
        cin >> c >> x;

        if (c == 'A'){
            // usar auxiliar como max e presentes como pilha real
            presentes.push(x);
            if (max_presentes.empty() || x >= max_presentes.top()) {
                max_presentes.push(x);
            } else {
                max_presentes.push(max_presentes.top());
            }
        } else if (c == 'V'){
            if (presentes.empty()){
                cout << '0' << endl;
            } else {
                cout << max_presentes.top() << endl;
            }
        } else if (c == 'R'){
            presentes.pop();
            max_presentes.pop();
        }
    }
}