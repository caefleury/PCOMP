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

// Função de exemplo: Verificação de parênteses balanceados
bool areParenthesesBalanced(string expr) {
    stack<char> s;
    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) {
                return false; // Fecha sem ter aberto
            }
            char top = s.top();
            s.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false; // Parênteses não correspondem
            }
        }
    }
    return s.empty(); // Se a pilha estiver vazia, está balanceado
}

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
    
    
    // --- Exemplos Avançados e Casos de Uso ---

    // 1. Validando parênteses balanceados
    cout << "\n--- Exemplo: Validando Parênteses ---" << endl;
    string expr1 = "{a + (b * c)}";
    string expr2 = "([)]";
    cout << expr1 << " está balanceado? " << (areParenthesesBalanced(expr1) ? "Sim" : "Não") << endl;
    cout << expr2 << " está balanceado? " << (areParenthesesBalanced(expr2) ? "Sim" : "Não") << endl;

    // 2. Usando um container diferente (std::vector)
    cout << "\n--- Exemplo: Stack com std::vector ---" << endl;
    stack<int, vector<int>> stack_com_vector;
    stack_com_vector.push(1);
    stack_com_vector.push(2);
    cout << "Topo da pilha com vector: " << stack_com_vector.top() << endl;

    // 3. Usando emplace para construção in-place
    cout << "\n--- Exemplo: Usando emplace ---" << endl;
    stack<pair<int, string>> sp;
    sp.emplace(1, "item 1"); // Mais eficiente que push({1, "item 1"})
    cout << "Topo da pilha de pares: (" << sp.top().first << ", " << sp.top().second << ")" << endl;

    return 0;
}