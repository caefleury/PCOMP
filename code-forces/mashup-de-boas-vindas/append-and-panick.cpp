// https://codeforces.com/group/zqu5uG7TYT/contest/597362/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    set<char> letters;
    int t_length;

    cin >> s;

    for (int i = s.size() - 1; i >= 0; i--){
        letters.insert(s[i]);
    }

    t_length =  s.size() - letters.size();

    cout << t_length << endl;
}