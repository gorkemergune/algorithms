T = int(input())

for _ in range(T):
    N, M = map(int, input().split())
    K = 2 * max(N, M) - 1
    print(K)