#include <iostream>
using namespace std;

int main() {
    int N, num = 0;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << num << " ";
        num = i * (i + 1);
    }
    return 0;
}
