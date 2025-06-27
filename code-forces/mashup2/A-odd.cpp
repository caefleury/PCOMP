#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
// #define size(z) (long long)z.size()
// #define all(x) x.begin(), x.end()

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

    int t,n;
    cin >> t;

    while (t--){
        cin >> n;
        vector<int> nums = {};
        int x;
        while (n--){
            cin >> x;
            nums.push_back(x);
        }

        bool all_odds = false;
        sort(nums.rbegin(), nums.rend());

        int divisions = 0;
        while(!all_odds){
            int c;
            bool c_chosen = false;
            bool has_even = false;
            sort(nums.rbegin(), nums.rend());
            for (int i=0;i<nums.size();i++){
                if (nums[i] % 2 == 0){
                    has_even = true;
                    if (c_chosen){
                        if (nums[i] == c){
                            nums[i] = nums[i] / 2;
                        } else {
                           break;
                        }
                    } else {
                        c_chosen = true;
                        c = nums[i];
                        nums[i] = nums[i] / 2;   
                    }
                }
                if (i == nums.size() - 1){ 
                    c_chosen = false;
                    if (has_even == false){
                        all_odds = true;
                        break;
                    }
                }
            }

            // cout << " " << endl;

            if (all_odds == false){
                divisions += 1;
            }
        }
        cout << divisions << endl;
    
    }


    

    return 0;
}