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

    while(t--){
        int n;
        cin >> n ;
        vi nums;

        int i;
        while (n--){
            cin >> i;
            if (i % 2 == 0){
                nums.pb(0);
            } else {
                nums.pb(1);
            }
        }

        while (size(nums) != 2){
            vi aux;
            if size(nums % 2 == 0){
                for( int k == 0;k < size(nums);k++){
                    if (nums[k] && nums [k+1])
                }
            } else {
                aux.pb(nums[0])
                for(int k == 1;k < size(nums);k++){
                    if (nums[k] && nums [k+1]){
                        aux.pb(0)
                    }
                }
            }
            nums = aux;
            aux = {};
        }


    }




    return 0;
}