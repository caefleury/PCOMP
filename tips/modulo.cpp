#include <bits/stdc++.h>

using namespace std;


// extracting digits using mod 10
int sumOfDigits(int num){
    int sum = 0;
    while (num>0){
        sum += num % 10; // 123 % 10 = 3, 12 % 10 = 2, 1 % 10= 1
        num /= 10;
    }
    return sum;
}

int main(){
     
     

}