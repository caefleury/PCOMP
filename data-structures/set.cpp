#include <bits/stdc++.h>
using namespace std;

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
    
    return 0;
}