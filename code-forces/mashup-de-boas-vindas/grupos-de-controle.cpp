// https://codeforces.com/group/zqu5uG7TYT/contest/597362/problem/B

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long N;
    
    cin >> N;
    
    if (N % 2 != 0){
        cout << N << endl;
    } else {
        for (long long i = N; i >= 1 ; i /= 2){
            if (i % 2 != 0){
                cout << i;
                return 0;
            }
        }
    }
}

// Conceitos importantes

// 1. long long
