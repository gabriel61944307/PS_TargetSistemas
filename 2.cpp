#include <bits/stdc++.h>

using namespace std;

int main(){
    int ant1 = 0, ant2 = 1, atual = 2;
    int n; cin >> n;

    if(n == 0 || n == 1) {
        cout << "O numero informado pertence a sequencia de fibonacci" << endl;
        return 0;
    }

    while(atual <= n){
        if(atual == n){
            cout << "O numero informado pertence a sequencia de fibonacci" << endl;
            return 0;
        }

        ant1 = ant2;
        ant2 = atual;
        atual = ant1 + ant2;
    }
    cout << "O numero informado nao pertence a sequencia de fibonacci" << endl;

    return 0;
}