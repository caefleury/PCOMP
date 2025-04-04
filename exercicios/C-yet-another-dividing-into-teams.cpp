#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define size(z) (long long)z.size()
#define all(x) x.begin(), x.end()
#define rep(i,a,b) for(int i = a; i <= b; i++)

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

    int q;
    cin >> q;
    
    while (q--){
        vi numbers;
        int n;
        cin >> n;

        // get numbers
        rep(i,0,n-1){
            int num;
            cin >> num;
            numbers.pb(num);
        }

        // edge case    
        if (n == 1){
            cout << 1 << endl;
            continue;
        }

        // iterate sorted numbers and check condition
        sort(all(numbers));
        bool flag = false;
        rep(i,0,size(numbers)-2){
            if (numbers[i+1]-numbers[i] == 1){
                flag = true;
                break;
            }
        }
        
        cout << (flag ? 2 : 1) << endl;
        
    }


    return 0;
}