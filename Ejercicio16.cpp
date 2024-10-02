#include <iostream>
using namespace std;

int main() {
    int N, num = 1, count = 1;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        if(count > num) {
            cout << 0 << " ";
            num++;
            count = 1;
        } else {
            cout << num - count << " ";
            count++;
        }
    }
    return 0;
}
