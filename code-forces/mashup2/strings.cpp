#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define size(z) (long long)z.size()
#define all(x) x.begin(), x.end()

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef set<int> si;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef set<ll> sll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<char> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    while(t--){
        vector<char> vc = {}; 
        string s;
        cin >> s; // fced

        // adiciona chars de s no set - C D E F
        for (int i=0; i<s.length();i++){
            vc.pb((char)toupper(s[i]));
        }

        sort(all(vc));

        // pega primeiro valor do set
        char initial_letter = vc [0]; //- C

        // cout << initial_letter << endl; // C

        // pega indice da letra do alfabeto
        auto first = find(alphabet.begin(), alphabet.end(), initial_letter);
        int index = first - alphabet.begin();

        // cout << index << endl; // C - 2

        // itera set verificando se char no set é o mesmo
        // que no alfabeto 
        bool flag = true;
        for (char letter : vc) {
            if ((char)alphabet[index] != (char)letter){
                // cout << " LETRA DO  SET " << letter << endl; // C - 2
                // cout << " LETRA DO ALFABETO " << alphabet[index] << endl; // C - 2
                flag = false;
                break;
            }
            index++;
        }

        // retorna 
        if (flag) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        

    }

    return 0;
}