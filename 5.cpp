#include <bits/stdc++.h>

using namespace std;

int main(){
    string n; cin >> n;
    string resp;
    for(int i = n.size()-1; i >= 0; i--)
        resp.push_back(n[i]);
    cout << resp << endl;

    return 0;
}