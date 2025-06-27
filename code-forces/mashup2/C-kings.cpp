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

bool mesmoQuadrante(int a, int b){
    return (a*b) >= 0;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ver se ambos estão no mesmo quadrante
    // se estiver, em teoria sempre da. 
    // checar apenas a distancia ja que o maximo são 8 movimentações

    int n,ax,ay,bx,by,cx,cy;

    cin >> n;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    int kingx = bx - ax;
    int kingy = by - ay;
    int winx = cx - ax;
    int winy = cy - ay;

    bool mesmoX = mesmoQuadrante(kingx,winx);
    bool mesmoY = mesmoQuadrante(kingy,winy);


    if (mesmoX && mesmoY ){
        cout << "YES"<< endl;
    } else {
        cout << "NO"<< endl;
    }

    return 0;
}