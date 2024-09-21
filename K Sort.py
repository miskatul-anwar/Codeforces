import sys


def minsort(t, tcases):
    results = []
    idx = 0
    for _ in range(t):
        n = tcases[idx]
        a = tcases[idx + 1]
        idx += 2
        total_cost = 0
        current_max = a[0]
        for i in range(1, n):
            if a[i] < current_max:
                total_cost += current_max - a[i]
            else:
                current_max = a[i]
        results.append(total_cost)
    return results


def main():
    input = sys.stdin.read()
    data = list(map(int, input.split()))

    t = data[0]
    idx = 1
    tcases = []
    for _ in range(t):
        n = data[idx]
        a = data[idx + 1 : idx + 1 + n]
        tcases.append(n)
        tcases.append(a)
        idx += 1 + n

    results = minsort(t, tcases)

    for result in results:
        print(result)


if __name__ == "__main__":
    main()
