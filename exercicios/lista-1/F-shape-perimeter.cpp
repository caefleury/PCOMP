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

    while (t--){
        int m,n;

        cin >> n >> m;

        int xi,xf = 0,yi,yf = 0;

        for (int i = 0; i < n;i++){
            int x,y;
            cin >> x >> y;

            if (i == 0){
                xi = x;
                yi = y;  
            }

            xf += x;
            yf += y;  

        }

        int perimeter = ((xf+m-xi) +  (yf+m-yi)) * 2;
        
        cout << perimeter << endl;


    }


    return 0;
}

// Para essa questão, a chave é entender que a posição de cada bloco não importa.

// Se pegarmos, por exemplo, o terceiro bloco do primeiro teste e movermos ele uma 
// unidade para a esquerda, o perimetro do lado x, visto de baixo, se mantem. Ele "perde"
// uma uniadade de perimetro mas ganha ao expor uma unidade de perimetro do quarto bloco.

// Isso é verdade para qualquer movimentação.

// Diante disso, basta pegarmos a distancia em x do inicio do primeiro bloco até o fim 
// do quarto bloco e teremos a distancia desse lado (x visto de baixo).

// Supondo que a distancia se mantem para todos os lados, basta multiplicar esse valor por dois
// e teremos a distancia para todo o eixo x.

// Fazer o mesmo para o eixo y e a soma será o perimetro total.