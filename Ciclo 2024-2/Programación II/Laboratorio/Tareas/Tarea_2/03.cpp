#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int T = 0;
    cin >> T;
    
    vector<int> resultados(T); 

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        long long S = 0;
        vector<int> artistas(N);
        vector<long long> potencias(N);
        potencias[0] = 1;
        for (int i = 1; i < N; ++i) {
            potencias[i] = (potencias[i-1] * 2) % MOD;
        }
        for (int i = 0; i < N; ++i) {
            artistas[i] = i + 1; 
        }
        for (int i = 0; i < N; ++i) {   
            S = (S + (artistas[i] * (potencias[i] - potencias[N-i-1]) % MOD)) % MOD;
        }
        resultados[t] = (S + MOD) % MOD; 
    }
    for (int t = 0; t < T; ++t) {
        cout << resultados[t] << endl;
    }
    return 0;
}