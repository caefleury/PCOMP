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
    
    return 0;
}
