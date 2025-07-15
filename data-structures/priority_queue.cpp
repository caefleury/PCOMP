#include <bits/stdc++.h>
using namespace std;

// Priority Queue (Fila de Prioridade)
// Pros:
// - O(log n) insertion and removal of the highest priority element
// - Automatically maintains elements in priority order
// - Efficient for finding min/max elements repeatedly
// Cons:
// - No direct access to elements other than the top
// - Slower than regular queue for simple FIFO operations
// - Modification of existing elements requires removal and reinsertion
// Use cases:
// - Dijkstra's algorithm and other graph algorithms
// - Task scheduling by priority
// - Heap sort implementation
// - Event-driven simulation

int main() {
    // Declaração de uma fila de prioridade (max heap por padrão)
    priority_queue<int> pq;
    
    // Inserção de elementos
    pq.push(10);
    pq.push(30);
    pq.push(20);
    
    // Verificando o tamanho
    cout << "Tamanho da fila de prioridade: " << pq.size() << endl; // 3
    
    // Acessando o elemento de maior prioridade
    cout << "Elemento de maior prioridade: " << pq.top() << endl; // 30
    
    // Removendo o elemento de maior prioridade
    pq.pop();
    cout << "Após remover o maior elemento: " << pq.top() << endl; // 20
    
    // Criando uma min heap (menor elemento tem maior prioridade)
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(30);
    min_pq.push(20);
    
    cout << "Elemento de maior prioridade na min heap: " << min_pq.top() << endl; // 10
    
    // Esvaziando a fila de prioridade
    cout << "Elementos em ordem de prioridade (max heap): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    
    cout << "Elementos em ordem de prioridade (min heap): ";
    while (!min_pq.empty()) {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
    cout << endl;
    
    
    // --- Exemplos Avançados ---

    // 1. Usando com std::pair para priorizar pelo primeiro elemento (útil em grafos)
    cout << "\n--- Exemplo com std::pair ---" << endl;
    priority_queue<pair<int, string>> pq_pair;
    pq_pair.push({10, "Tarefa C"});
    pq_pair.push({30, "Tarefa A"}); // Maior prioridade
    pq_pair.push({20, "Tarefa B"});

    cout << "Tarefa de maior prioridade: " << pq_pair.top().second 
         << " com prioridade " << pq_pair.top().first << endl; // Tarefa A com prioridade 30

    // 2. Usando com struct e comparador customizado
    cout << "\n--- Exemplo com struct customizada ---" << endl;
    struct Pessoa {
        string nome;
        int idade;

        // Para facilitar a impressão
        friend ostream& operator<<(ostream& os, const Pessoa& p) {
            return os << p.nome << " (" << p.idade << " anos)";
        }
    };

    struct ComparaIdade {
        bool operator()(const Pessoa& a, const Pessoa& b) {
            // Min heap pela idade (o mais novo tem maior prioridade)
            return a.idade > b.idade;
        }
    };

    priority_queue<Pessoa, vector<Pessoa>, ComparaIdade> pq_pessoas;
    pq_pessoas.push({"Ana", 25});
    pq_pessoas.push({"Beto", 30});
    pq_pessoas.push({"Caio", 22}); // Mais novo, maior prioridade

    cout << "Pessoa com maior prioridade (mais nova): " << pq_pessoas.top() << endl; // Caio (22 anos)

    // 3. Usando emplace para construção in-place (mais eficiente)
    cout << "\n--- Exemplo com emplace ---" << endl;
    pq_pessoas.emplace("Diana", 28);
    cout << "Topo após emplace: " << pq_pessoas.top() << endl; // Caio ainda é o topo

    cout << "\nEsvaziando a fila de pessoas (por idade crescente): ";
    while(!pq_pessoas.empty()){
        cout << pq_pessoas.top() << "; ";
        pq_pessoas.pop();
    }
    cout << endl;

    return 0;
}
