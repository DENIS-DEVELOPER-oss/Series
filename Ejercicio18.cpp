#include <iostream>
using namespace std;

int main() {
    int N, num = 1;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; ) {
        if(num % 3 != 0) {
            cout << num << " ";
            i++;
        }
        num++;
    }
    return 0;
}
