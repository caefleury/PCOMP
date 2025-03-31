#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 15;
    int a = 10, b = 30;
    // one statement if's dont need curly braces
    if (x>0) cout << x << " is negative" << endl;

    //ternary
    int maxVal = (b > a) ? b : a; // if b > a, assign b; otherwise, assing y;
    cout << maxVal;

}