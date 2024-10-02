#include <iostream>
using namespace std;

int main() {
    int N, num1 = 1, num2 = 3;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        if(i % 2 != 0) {
            cout << num1 << " ";
            num1++;
        } else {
            cout << num2 << " ";
            num2++;
        }
    }
    return 0;
}
