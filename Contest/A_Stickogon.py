def max_polygons(t, test_cases):
    results = []
    for _ in range(t):
        n = test_cases[_][0]
        sticks = sorted(test_cases[_][1], reverse=True)
        polygons = 0
        used = [False] * n

        for i in range(n):
            if not used[i]:
                current_stick = sticks[i]
                sides = 0
                for j in range(i, n):
                    if not used[j] and sticks[j] == current_stick:
                        sides += 1
                        used[j] = True
                polygons += current_stick // sides

        results.append(polygons)

    return results


# Example usage:
t = 2
test_cases = [(5, [2, 2, 2, 2, 2]), (6, [1, 2, 3, 4, 5, 6])]
print(*max_polygons(t, test_cases), sep="\n")
