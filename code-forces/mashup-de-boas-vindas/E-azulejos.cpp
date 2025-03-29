// https://codeforces.com/group/zqu5uG7TYT/contest/597362/problem/E

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long Y,X,azulejos;
    cin >> Y >> X;

    if (X % 2 == 0){
        azulejos = (X / 2) * Y;
    } else {
        long long even_rows, odd_rows;
        even_rows = Y/2;
        odd_rows = Y - even_rows;
        azulejos = (even_rows * (X/2)) + (odd_rows * (X/2+1));
    }

    cout << azulejos;
}