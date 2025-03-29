// https://codeforces.com/group/zqu5uG7TYT/contest/597362/problem/C

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    float L, G, jogos;
    cin >> L >> G;
    
    jogos = L + G;
    float prob_cara, prob_coroa;
    
    prob_coroa = G/jogos * 100;
    prob_cara = L/jogos * 100;
    
    cout << (int)prob_cara << " " << (int)prob_coroa << endl;
}