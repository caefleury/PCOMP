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

    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
    
        // edge case  
        if (n == 1){
            int dummy;
            cin >> dummy;
            cout << 1 << endl;
            continue;
        }

        set<int> numbers;
        bool flag = false;

        // get nums
        for(int i=0;i<n;i++){
            int num;
            cin >> num;
            if(!flag){
                numbers.insert(num);
                if (numbers.count(num + 1) || numbers.count(num - 1)){
                    flag = true;
                }
            }
        }

        cout << (flag ? 2 : 1) << endl;
        
    }


    return 0;
}