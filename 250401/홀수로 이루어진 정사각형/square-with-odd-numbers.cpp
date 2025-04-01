#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << 11+(i*2)+(j*2) << " ";
        }
        cout << "\n";
    }

    return 0;
}