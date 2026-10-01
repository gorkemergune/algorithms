#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, A;
    cin >> N;
    vector<int> arr(N);
    
    for (int i = N - 1; i >= 0; i--) {
        cin >> A;
        arr[i] = A;
    }
    
    for (int j = 0; j < N; j++) {
        cout << arr[j] << " "; 
    }
    return 0;    
}