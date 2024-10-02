#include <iostream>
using namespace std;

int main() {
    int N, num = 100;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << num << " ";
        num -= (i * 2);
    }
    return 0;
}
