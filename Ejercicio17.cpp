#include <iostream>
using namespace std;

int main() {
    int N, num = 1, count = 1;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        if(count == 4) {
            cout << 0 << " ";
            count = 1;
            num++;
        } else {
            cout << num << " ";
            num += 2;
            count++;
        }
    }
    return 0;
}
