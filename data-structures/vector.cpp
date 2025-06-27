#include <bits/stdc++.h>
using namespace std;

// Vector (Vetor Dinâmico)
// Pros:
// - O(1) acesso aleatório a elementos
// - O(1) inserção e remoção no final
// - Armazenamento contíguo na memória (boa localidade de cache)
// - Redimensionamento automático
// Cons:
// - O(n) inserção e remoção no início ou meio
// - Realocação de memória pode ser custosa quando o vetor precisa crescer
// Use cases:
// - Quando é necessário acesso aleatório rápido
// - Quando o tamanho da coleção pode mudar
// - Quando é necessário iterar sequencialmente
// - Base para muitas outras estruturas de dados

int main() {
    // Declaração de um vetor de inteiros
    vector<int> v;
    
    // Inserção de elementos (push_back)
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    // Verificando o tamanho
    cout << "Tamanho do vetor: " << v.size() << endl; // 3
    
    // Acessando elementos por índice
    cout << "Primeiro elemento: " << v[0] << endl; // 10
    cout << "Segundo elemento: " << v[1] << endl;  // 20
    cout << "Terceiro elemento: " << v[2] << endl; // 30
    
    // Acesso com verificação de limites
    cout << "Elemento seguro: " << v.at(1) << endl; // 20
    
    // Modificando elementos
    v[1] = 25;
    cout << "Após modificação: " << v[1] << endl; // 25
    
    // Inserindo no meio do vetor
    v.insert(v.begin() + 1, 15);
    cout << "Após inserção no meio: ";
    for (int x : v) cout << x << " ";
    cout << endl; // 10 15 25 30
    
    // Removendo elementos
    v.pop_back(); // Remove o último elemento
    v.erase(v.begin()); // Remove o primeiro elemento
    
    cout << "Após remoções: ";
    for (int x : v) cout << x << " ";
    cout << endl; // 15 25
    
    // Verificando se o vetor está vazio
    if (v.empty()) {
        cout << "O vetor está vazio" << endl;
    } else {
        cout << "O vetor não está vazio" << endl;
    }
    
    // Inicialização com tamanho e valor
    vector<int> v2(5, 100); // 5 elementos com valor 100
    cout << "Vetor inicializado: ";
    for (int x : v2) cout << x << " ";
    cout << endl; // 100 100 100 100 100
    
    // Redimensionando
    v.resize(5, 0); // Aumenta para 5 elementos, novos são 0
    cout << "Após redimensionar: ";
    for (int x : v) cout << x << " ";
    cout << endl; // 15 25 0 0 0
    
    // Reservando espaço (otimização)
    vector<int> v3;
    v3.reserve(1000); // Reserva espaço para 1000 elementos
    cout << "Capacidade após reserve: " << v3.capacity() << endl;
    
    // Limpando o vetor
    v.clear();
    cout << "Tamanho após clear: " << v.size() << endl; // 0
    
    return 0;
}
