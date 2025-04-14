//https://codeforces.com/contest/2094/problem/A
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
        string str1, str2, str3;
        cin >> str1 >> str2 >> str3;
        string result = "";

        result += str1[0];
        result += str2[0];
        result += str3[0];

        cout << result << endl;
    }



    return 0;
}