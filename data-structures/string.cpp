#include <bits/stdc++.h>
using namespace std;

// String (Cadeia de Caracteres)
// Use cases:
// - Text processing and manipulation
// - Parsing input
// - Any problem involving textual data

int main() {
    // Declaração e inicialização
    string s1 = "Ola";
    string s2 = "Mundo";

    // Concatenação
    string s3 = s1 + " " + s2 + "!"; // "Ola Mundo!"
    cout << "Concatenação: " << s3 << endl;

    // Tamanho
    cout << "Tamanho de s3: " << s3.size() << endl; // 10

    // Acesso a caracteres
    cout << "Primeiro caractere: " << s3[0] << endl; // 'O'

    // Substring
    string sub = s3.substr(4, 5); // Pega 5 caracteres a partir do índice 4
    cout << "Substring: " << sub << endl; // "Mundo"

    // Encontrar uma substring
    size_t pos = s3.find("Mundo");
    if (pos != string::npos) {
        cout << "'Mundo' encontrado no índice: " << pos << endl; // 4
    }

    // Substituição
    s3.replace(pos, 5, "Galera");
    cout << "Após substituição: " << s3 << endl; // "Ola Galera!"

    // Conversão de/para string
    cout << "\n--- Conversões ---" << endl;
    string num_str = "123";
    int num = stoi(num_str); // String para int
    cout << "String para int: " << num << endl;

    int val = 456;
    string val_str = to_string(val); // Int para string
    cout << "Int para string: " << val_str << endl;

    // Leitura de linha inteira
    cout << "\nDigite uma frase: ";
    string line;
    // cin.ignore() é necessário para limpar o buffer do cin anterior
    // se você misturar cin >> var com getline
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(cin, line);
    cout << "Você digitou: " << line << endl;

    return 0;
}
