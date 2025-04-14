#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
// #define size(z) (long long)z.size()
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
        string p;
        string s;

        cin >> p;
        cin >> s;

        vector<pair<char, int>> chars_p;
        vector<pair<char, int>> chars_s;

        if (!p.empty()) {
            char current_p = p[0];
            int count = 1;
            for (int i = 1; i < p.length();i ++){
                if (p[i] != current_p){
                    chars_p.pb({current_p, count});
                    count = 1;
                    current_p = p[i];
                } else{
                    count ++;
                }
            }
            chars_p.pb({current_p, count});
        }

        if (!s.empty()) {
            char current_s = s[0];
            int count = 1;
            for (int i = 1; i < s.length();i ++){
                if (s[i] != current_s){
                    chars_s.pb({current_s, count});
                    count = 1;
                    current_s = s[i];
                }else{
                    count ++;
                }
            }
            chars_s.pb({current_s, count});
        }

        bool yes = true;
        int s_size = chars_s.size(), p_size =  chars_p.size();
        if (chars_s.size() != chars_p.size()){
            yes = false;
        } else {
            for (int i = 0; i < p_size;i ++){
                int p_count = chars_p[i].second;
                int s_count = chars_s[i].second;

                if (chars_p[i].first != chars_s[i].first ||
                    s_count < p_count || s_count > 2 * p_count){
                    yes = false;
                    break;
                }
            }
        }

        if (yes){
            cout << "YES" << endl;
        } else { 
            cout << "NO" << endl;
        }
        cout.flush();

    }
    return 0;
}