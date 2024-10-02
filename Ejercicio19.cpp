#include <iostream>
using namespace std;

int main() {
    int N, impar = 1, par = 2;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        if(i % 2 != 0) {
            cout << impar << " ";
            impar += 2;
        } else {
            cout << par << " ";
            par += 2;
        }
    }
    return 0;
}
