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
        int n; 
        cin >> n;

        for (int j=0;j<n;j++){
            if (j % 2 == 0){
                for (int i=0;i<n;i++) {
                    if (i % 2 ==0 ){
                        cout<< "##";
                    } else {
                        cout<< "..";
                    }
                }
                cout << endl;
                for (int i=0;i<n;i++) {
                    if (i % 2 ==0 ){
                        cout<< "##";
                    } else {
                        cout<< "..";
                    }
                }
                cout << endl;
            } else {
                for (int i=0;i<n;i++){
                    if (i % 2 == 0){
                        cout<< "..";
                    } else {
                        cout<< "##";
                    }
                }
                cout << endl;
                for (int i=0;i<n;i++){
                    if (i % 2 == 0){
                        cout<< "..";
                    } else {
                        cout<< "##";
                    }
                }
                cout << endl;
            }
        }
}
    return 0;
}