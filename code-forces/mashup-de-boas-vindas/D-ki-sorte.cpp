// https://codeforces.com/group/zqu5uG7TYT/contest/597362/problem/D

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int A,B,C;
    int k = 1;
    long long modA,modB,modC,num_iter;
    long long num_sorte = LLONG_MAX;
    cin >> A >> B >> C;

    for (int x = 1; x <= 99;x++ ){
        modA = abs(x - A);
        modB = abs(x - B);
        modC = abs(x - C);
        
        num_iter = modA + modB * modB + pow(modC,3);
        
        if (num_iter < num_sorte){
            num_sorte = num_iter;
            k = x;
        }
    }
    cout << k << endl;
 
}