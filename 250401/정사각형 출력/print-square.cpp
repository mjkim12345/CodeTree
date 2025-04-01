#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;
    int count=1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}