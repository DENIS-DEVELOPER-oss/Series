#include <iostream>
using namespace std;

int main() {
    int N, num = 0, incremento = 1;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << num << " ";
        num += incremento;
        incremento += i;
    }
    return 0;
}
