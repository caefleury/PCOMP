#include <bits/stdc++.h>
using namespace std;

// Queue (Fila)
// Pros:
// - O(1) insertion at the back and removal from the front
// - Follows FIFO (First-In-First-Out) principle, which is intuitive for many problems
// - Simple and efficient for its specific use case
// Cons:
// - No random access to elements
// - Can only access the front and back elements
// Use cases:
// - Breadth-First Search (BFS) in graphs
// - Simulating any process that requires first-come, first-served processing
// - Buffering in I/O operations

int main() {
    // Declaração de uma fila de inteiros
    queue<int> q;

    // Inserção de elementos (enqueue)
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "--- Operações Básicas ---" << endl;
    cout << "Tamanho da fila: " << q.size() << endl; // 3

    // Acessando o elemento da frente e de trás
    cout << "Elemento da frente: " << q.front() << endl; // 10
    cout << "Elemento de trás: " << q.back() << endl;   // 30

    // Removendo um elemento (dequeue)
    q.pop();
    cout << "Após remover um elemento, a frente é: " << q.front() << endl; // 20

    // Verificando se a fila está vazia
    if (q.empty()) {
        cout << "A fila está vazia" << endl;
    } else {
        cout << "A fila não está vazia" << endl;
    }

    // Esvaziando a fila em ordem
    cout << "\nEsvaziando a fila: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
