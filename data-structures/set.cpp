#include <bits/stdc++.h>
using namespace std;

// Set
// Pros:
// - O(log n) insertion, deletion, and lookup
// - Automatically maintains elements in sorted order
// - Guarantees uniqueness of elements
// Cons:
// - Slower than unordered_set for simple lookups
// - No direct access to elements by index
// - Cannot modify elements in-place (must remove and reinsert)
// Use cases:
// - Removing duplicates from a collection
// - Checking for element existence efficiently
// - Maintaining a sorted collection of unique items
// - Set operations (union, intersection, difference)

int main() {
    // Declaração de um set de inteiros
    set<int> s;
    
    // Inserção de elementos
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10); // Tentativa de inserir valor duplicado (será ignorado)
    
    // Verificando o tamanho
    cout << "Tamanho do set: " << s.size() << endl; // 3
    
    // Verificando se um elemento existe
    if (s.count(20)) {
        cout << "O elemento 20 existe no set" << endl;
    }
    
    // Iterando pelo set (os elementos estarão em ordem crescente)
    cout << "Elementos do set: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl; // 10 20 30
    
    // Removendo um elemento
    s.erase(20);
    
    // Verificando novamente os elementos
    cout << "Após remover 20: ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl; // 10 30
    
    
    // --- Métodos Avançados ---
    s.insert(5);  // {5, 10, 30}
    s.insert(40);

    // 1. find(): Retorna um iterador para o elemento ou s.end() se não encontrado
    cout << "\n--- Exemplo com find() ---" << endl;
    auto it_find = s.find(10);
    if (it_find != s.end()) {
        cout << "Elemento 10 encontrado: " << *it_find << endl;
    }

    // 2. lower_bound() e upper_bound()
    cout << "\n--- Exemplo com lower/upper_bound ---" << endl;
    // lower_bound(x): primeiro elemento >= x
    // upper_bound(x): primeiro elemento > x
    cout << "Set atual: { ";
    for(int x : s) cout << x << " ";
    cout << "}" << endl; // { 5 10 30 40 }

    auto it_lower = s.lower_bound(15);
    cout << "lower_bound(15): " << *it_lower << endl; // 30

    auto it_upper = s.upper_bound(30);
    cout << "upper_bound(30): " << *it_upper << endl; // 40

    // 3. Set com ordem customizada (decrescente)
    cout << "\n--- Exemplo com comparador customizado ---" << endl;
    set<int, greater<int>> s_desc;
    s_desc.insert(10);
    s_desc.insert(30);
    s_desc.insert(20);
    cout << "Set em ordem decrescente: ";
    for (int x : s_desc) {
        cout << x << " ";
    }
    cout << endl; // 30 20 10

    // 4. Multiset: um set que permite elementos duplicados
    cout << "\n--- Exemplo com multiset ---" << endl;
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(10);
    cout << "Contagem de 10 no multiset: " << ms.count(10) << endl; // 3
    cout << "Elementos do multiset: ";
    for(int x : ms) cout << x << " ";
    cout << endl; // 10 10 10 20

    return 0;
}