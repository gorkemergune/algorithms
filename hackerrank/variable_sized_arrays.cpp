#include <iostream>
#include <vector>

int main() {

    int n, q;
    std::cin >> n >> q;

    std::vector<std::vector<int>> arr(n);

    for (int i = 0; i < n; i++) {

        int k;
        std::cin >> k;

        for (int j = 0; j < k; j++) {
            int x;
            std::cin >> x;
            arr[i].push_back(x);
        }
    }

    for (int i = 0; i < q; i++) {

        int a, b;
        std::cin >> a >> b;

        std::cout << arr[a][b] << "\n";
    }

    return 0;
}