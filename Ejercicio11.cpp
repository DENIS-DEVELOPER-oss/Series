#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0)
            cout << (i / 2) * (i / 2) << " ";
        else
            cout << (i + 1) / 2 << " ";
    }
    return 0;
}
