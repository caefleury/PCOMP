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
    
    
    // --- Algoritmos e Métodos Comuns ---

    // 1. Ordenação (std::sort)
    cout << "\n--- Exemplo: Ordenação ---" << endl;
    vector<int> v_sort = {40, 10, 50, 20, 30};
    sort(v_sort.begin(), v_sort.end()); // Ordena em ordem crescente
    cout << "Vetor ordenado (crescente): ";
    for (int x : v_sort) cout << x << " ";
    cout << endl; // 10 20 30 40 50

    sort(v_sort.begin(), v_sort.end(), greater<int>()); // Ordena em ordem decrescente
    cout << "Vetor ordenado (decrescente): ";
    for (int x : v_sort) cout << x << " ";
    cout << endl; // 50 40 30 20 10

    // 2. Busca
    cout << "\n--- Exemplo: Busca ---" << endl;
    // Busca Linear (std::find)
    auto it_find = find(v_sort.begin(), v_sort.end(), 30); // v_sort é {50, 40, 30, 20, 10}
    if (it_find != v_sort.end()) {
        cout << "Elemento 30 encontrado via find." << endl;
    }

    // Busca Binária (requer vetor ordenado)
    sort(v_sort.begin(), v_sort.end()); // Reordena para {10, 20, 30, 40, 50}
    cout << "Vetor reordenado para busca binária: ";
    for (int x : v_sort) cout << x << " ";
    cout << endl;

    bool found = binary_search(v_sort.begin(), v_sort.end(), 40);
    cout << "Elemento 40 encontrado via binary_search? " << (found ? "Sim" : "Não") << endl;

    // lower_bound/upper_bound em vetor ordenado
    auto it_lower = lower_bound(v_sort.begin(), v_sort.end(), 25);
    cout << "lower_bound(25) em vetor: " << *it_lower << endl; // 30

    // 3. Acesso rápido e inserção eficiente
    cout << "\n--- Exemplo: Acesso e Inserção Eficiente ---" << endl;
    cout << "Primeiro elemento (front): " << v_sort.front() << endl; // 10
    cout << "Último elemento (back): " << v_sort.back() << endl;   // 50

    v_sort.emplace_back(60); // Adiciona 60 no final de forma eficiente
    cout << "Vetor após emplace_back(60): ";
    for (int x : v_sort) cout << x << " ";
    cout << endl; // 10 20 30 40 50 60
    
    return 0;
}
