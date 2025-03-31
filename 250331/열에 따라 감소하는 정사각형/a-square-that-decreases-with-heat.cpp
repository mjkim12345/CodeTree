#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i=N; i>0; i--) {
        for (int j=N; j>0; j--) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}