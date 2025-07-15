#include <bits/stdc++.h>
using namespace std;

// Map e Unordered_Map (Mapa e Mapa de Hash)
// Pros:
// - (map) O(log n) operations, keeps keys sorted.
// - (unordered_map) O(1) average time operations, very fast.
// - Efficient for frequency counting and key-value associations.
// Cons:
// - (map) Slower than unordered_map.
// - (unordered_map) No element ordering, higher memory usage, worst-case O(n).
// Use cases:
// - Frequency counting (e.g., counting occurrences of words)
// - Storing associations (e.g., name to phone number)
// - Implementing caches (unordered_map)

int main() {
    // --- std::map (Ordenado) ---
    cout << "--- std::map (Chaves Ordenadas) ---" << endl;
    map<string, int> ages;

    // Inserção
    ages["Beto"] = 30;
    ages["Ana"] = 25;
    ages.insert({"Caio", 22});

    // Acesso
    cout << "Idade da Ana: " << ages["Ana"] << endl; // 25

    // Iteração (em ordem de chave)
    cout << "Idades no mapa: ";
    for (auto const& [key, val] : ages) {
        cout << key << ":" << val << " ";
    }
    cout << endl; // Ana:25 Beto:30 Caio:22

    // Verificando existência
    if (ages.count("Beto")) {
        cout << "Beto existe no mapa." << endl;
    }

    // --- std::unordered_map (Hash) ---
    cout << "\n--- std::unordered_map (Sem Ordem, Rápido) ---" << endl;
    unordered_map<string, int> u_ages;
    u_ages["Beto"] = 30;
    u_ages["Ana"] = 25;
    u_ages.insert({"Caio", 22});

    // Iteração (sem ordem garantida)
    cout << "Idades no mapa não ordenado: ";
    for (auto const& pair : u_ages) {
        cout << pair.first << ":" << pair.second << " ";
    }
    cout << endl;

    // Exemplo: Contagem de Frequência
    cout << "\n--- Exemplo: Contagem de Frequência ---" << endl;
    vector<int> nums = {1, 2, 1, 3, 2, 1, 4};
    unordered_map<int, int> freq;
    for (int n : nums) {
        freq[n]++;
    }
    cout << "Frequência de 1: " << freq[1] << endl; // 3
    cout << "Frequência de 2: " << freq[2] << endl; // 2

    return 0;
}
