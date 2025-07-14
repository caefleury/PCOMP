#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define all(x) x.begin(), x.end()

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef set<int> si;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef set<ll> sll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A;
    ll N;
    cin >> A >> N;
    
    ll sum = 0;
    
    for (int d = 1; d <= 9 && d <= N; d++) {
        string baseA = "";
        ll num = d;
        
        while (num > 0) {
            baseA = to_string(num % A) + baseA;
            num /= A;
        }
        
        bool isBaseAPal = true;
        int left = 0, right = baseA.size() - 1;
        
        while (left < right) {
            if (baseA[left] != baseA[right]) {
                isBaseAPal = false;
                break;
            }
            left++;
            right--;
        }
        
        if (isBaseAPal)
            sum += d;
    }
    
    for (int len = 2; len <= 12; len += 2) {
        ll start = pow(10, len / 2 - 1);
        ll end = pow(10, len / 2) - 1;
        
        for (ll half = start; half <= end; half++) {
            string halfStr = to_string(half);
            string revHalfStr = halfStr;
            reverse(revHalfStr.begin(), revHalfStr.end());
            string palStr = halfStr + revHalfStr;
            
            ll pal = stoll(palStr);
            
            if (pal > N)
                break;
            
            string baseA = "";
            ll num = pal;
            
            while (num > 0) {
                baseA = to_string(num % A) + baseA;
                num /= A;
            }
            
            bool isBaseAPal = true;
            int left = 0, right = baseA.size() - 1;
            
            while (left < right) {
                if (baseA[left] != baseA[right]) {
                    isBaseAPal = false;
                    break;
                }
                left++;
                right--;
            }
            
            if (isBaseAPal)
                sum += pal;
        }
    }
    
    for (int len = 3; len <= 13; len += 2) {
        ll start = pow(10, len / 2);
        ll end = pow(10, len / 2 + 1) - 1;
        
        for (ll half = start; half <= end; half++) {
            string halfStr = to_string(half);
            string revHalfStr = halfStr.substr(0, halfStr.size() - 1);
            reverse(revHalfStr.begin(), revHalfStr.end());
            string palStr = halfStr + revHalfStr;
            
            ll pal = stoll(palStr);
            
            if (pal > N)
                break;
            
            string baseA = "";
            ll num = pal;
            
            while (num > 0) {
                baseA = to_string(num % A) + baseA;
                num /= A;
            }
            
            bool isBaseAPal = true;
            int left = 0, right = baseA.size() - 1;
            
            while (left < right) {
                if (baseA[left] != baseA[right]) {
                    isBaseAPal = false;
                    break;
                }
                left++;
                right--;
            }
            
            if (isBaseAPal)
                sum += pal;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}