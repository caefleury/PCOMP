#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back

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

    int n; // n candidatos
    cin >> n;
    priority_queue<int> maiores_votos;

    int s_votes; // votos de saranduva
    cin >> s_votes;
    n--; // ignorar sananduva

    int votos_do_candidato;
    while (n--){
        cin >> votos_do_candidato;
        maiores_votos.push(votos_do_candidato);
    }

    int compras = 0;
    int maior_voto_atual;
    
    while (s_votes < maiores_votos.top()){
        maior_voto_atual = maiores_votos.top();
        maiores_votos.pop();

        maior_voto_atual--;
        s_votes++;
        compras ++;

        maiores_votos.push(maior_voto_atual);
        
    }
    compras ++;
    cout << compras;
}