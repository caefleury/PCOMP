#include <bits/stdc++.h>
using namespace std;

// Stack (Pilha)
// Pros:
// - O(1) insertion and removal at one end (top)
// - Ideal for problems requiring LIFO (Last-In-First-Out) behavior
// - Simple and memory efficient
// Cons:
// - No random access to elements
// - Limited to operations only at the top
// Use cases:
// - Function call management
// - Expression evaluation and parsing
// - Backtracking algorithms
// - Undo mechanisms

int main() {
    // Declaração de uma pilha de inteiros
    stack<int> pilha;
    
    // Inserção de elementos (push)
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    
    // Verificando o tamanho
    cout << "Tamanho da pilha: " << pilha.size() << endl; // 3
    
    // Acessando o elemento do topo
    cout << "Elemento do topo: " << pilha.top() << endl; // 30
    
    // Removendo elementos (pop)
    pilha.pop();
    cout << "Após remover um elemento, o topo é: " << pilha.top() << endl; // 20
    
    // Verificando se a pilha está vazia
    if (pilha.empty()) {
        cout << "A pilha está vazia" << endl;
    } else {
        cout << "A pilha não está vazia" << endl;
    }
    
    // Esvaziando a pilha
    while (!pilha.empty()) {
        cout << "Removendo: " << pilha.top() << endl;
        pilha.pop();
    }
    
    return 0;
}