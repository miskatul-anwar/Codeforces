MOD = 10**9 + 7


def solve(n, k, moves):
    dp = [1] * n  # Initialize dp with all rows having 1 configuration
    cnt = [0] * n
    bad = 0

    for r, c in moves:
        r -= 1
        c -= 1
        if r == c:
            continue  # Skip if r == c

        if cnt[r] == 0:
            bad += 1
        elif cnt[r] == 1:
            bad -= 1

        cnt[r] += 1

        # Update dp for each row
        if cnt[r] > 1:
            dp[r] = 0
        elif cnt[r] == 1:
            dp[r] = 1
        else:
            dp[r] = n - bad

    total_configurations = sum(dp) % MOD
    return total_configurations


t = int(input().strip())
for _ in range(t):
    n, k = map(int, input().split())
    moves = [tuple(map(int, input().split())) for _ in range(k)]
    result = solve(n, k, moves)
    print(result)
