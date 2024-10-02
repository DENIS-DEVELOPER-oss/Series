#include <iostream>
using namespace std;

int main() {
    int N, num = 1, suma = 1;
    cout << "Ingrese N: ";
    cin >> N;
    cout << suma << " ";
    for(int i = 2; i <= N; i++) {
        num += 1;
        suma += num;
        cout << suma << " ";
    }
    return 0;
}
