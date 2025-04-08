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

    int n;
    cin >> n;

    unordered_set<int> nums ;

    // edge case
    if (n == 1){
        int x;
        cin >> x;
        if(x == 0){
            cout << 0;
        } else {
            cout << 1;
        }
        return 0;
    }

    while(n--){
        int x;
        cin >> x;
        if (x != 0){
            nums.insert(x);
        }
    }

    cout << size(nums) << endl;


    return 0;
}