// https://atcoder.jp/contests/abs/tasks/abc083_b
#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define size(z) (long long)z.size()
#define all(x) x.begin(), x.end()
#define rep(i,a,b) for(int i = a; i <= b; i++)

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

// extract digits using modulo 10 (mod 10)
int digitSum(int num){
    int sum = 0;
    while (num>0){
        sum += num % 10; // 123 % 10 = 3, 12 % 10 = 2
        num /= 10;
    }
    return sum;
}

int main (){
    ios::sync_with_stdio(false);
    int N,A,B;
    int output= 0;

    cin >> N >> A >> B;

    for(int i = 1; i <= N; i++){
        int sum = 0;
        sum += digitSum(i);
        if (sum >= A && sum <= B){
            output += i;
        }    
    }

    cout << output<< endl;
    return 0;
}


// First approach

// for(int i = 1; i <= N; i++){
//     int sum = 0;
//     string digits = to_string(i);
//     for(char& c: digits){
//         sum += (int)(c - '0'); 
//     }
//     if (sum >= A && sum <= B){
//         output += i;
//     }    
// }

// turns the number into a string an iterates its characters
// extracting the digits using mod 10 is a better approach