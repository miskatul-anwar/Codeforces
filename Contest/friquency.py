import sys
from collections import defaultdict


class TreeNode:
    def __init__(self, value):
        self.value = value
        self.children = []


def dfs(node, parent, freq, values):
    freq[node] = defaultdict(int)
    freq[node][values[node]] = 1
    for child in node.children:
        if child != parent:
            dfs(child, node, freq, values)
            for key, value in freq[child].items():
                freq[node][key] += value


def main():
    n = int(input())
    values = [0] + list(map(int, input().split()))
    tree = [TreeNode(i) for i in range(n + 1)]
    freq = [None] * (n + 1)

    for _ in range(n - 1):
        u, v = map(int, input().split())
        tree[u].children.append(tree[v])
        tree[v].children.append(tree[u])

    dfs(tree[1], None, freq, values)

    q = int(input())
    for _ in range(q):
        u1, v1, u2, v2, k = map(int, input().split())
        freq_diff = 0
        values_diff = []

        for val in range(1, 10**5 + 1):
            count_u1 = freq[u1][val] - freq[v1][val]
            count_u2 = freq[u2][val] - freq[v2][val]
            if count_u1 != count_u2:
                freq_diff += 1
                values_diff.append(val)
            if freq_diff == k:
                break

        print(min(freq_diff, k))
        print(*values_diff[: min(freq_diff, k)])


if __name__ == "__main__":
    main()
