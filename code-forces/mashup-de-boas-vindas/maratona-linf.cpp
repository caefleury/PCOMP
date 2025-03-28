// https://codeforces.com/group/zqu5uG7TYT/contest/597362/problem/F

#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,C,grupos;
    cin >> N >> C ;
    vector<int> numbers(N);

    int alunos = 0;
    for (int i = 0; i < N ; i++){
        cin >> numbers[i];
        alunos += numbers[i];
    };

    alunos = min(alunos,C);
    grupos = alunos / 3;

    cout << min(grupos, N);

}

// Conceitos importantes 

// 1. Conceito de upperbound ->
// Utilizamos a função min para retornar sempre o menor valor entre duas variáveis,
// dessa forma, o valor nunca extrapola o limite que sera sempre o menor valor caso 
// a variável seja maior.

// 2. Conceito de lowerbound ->
// Utilizamos a função max para retornar sempre o maior valor entre duas variáveis,
// dessa forma, o valor nunca extrapola o limite que sera sempre o maior valor caso 
// a variável seja menor.

// 3. Leitura de varíaveis em uma mesma linha
// vector<int> numbers(N);        ----- (N) dita o tamanho do vetor

// for (int i = 0; i < N ; i++){
//     cin >> numbers[i];

// };