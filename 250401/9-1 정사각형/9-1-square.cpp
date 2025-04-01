#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;
    int count=9;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << count << "";
            count--;
            if (count == 0) {
                count =9;
            }
        }
        cout << endl;
    }

    return 0;
}