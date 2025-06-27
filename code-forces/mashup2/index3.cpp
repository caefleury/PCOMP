#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

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

    int n; // n cabos
    cin >> n;
    vector<int> tam_cabos;

    // adicionar cabos
    int tam_cabo;
    while(n--){
        cin >> tam_cabo;
        tam_cabos.push_back(tam_cabo);
    }

    sort(all(tam_cabos),greater<int>());

    int tam_lista;
    int custo = 0;
    int menor_valor;
    int maior_valor;
    int soma;

    while (tam_cabos.size() > 1){
        tam_lista = tam_cabos.size();
        menor_valor = tam_cabos[tam_lista-1];
        maior_valor = tam_cabos[tam_lista-2];


        custo += maior_valor;
        soma = menor_valor + maior_valor;

        tam_cabos.pop_back();
        tam_cabos.pop_back();

        tam_cabos.push_back(soma);
        sort(all(tam_cabos),greater<int>());
    }
    
    cout << custo << endl; 
}