def min_cost_to_sort(t, test_cases):
    for s in test_cases:
        n = len(s)
        segments = []
        curr_segment = [0]
        
        for i in range(1, n):
            if s[i] < s[i-1]:
                segments.append(curr_segment)
                curr_segment = [i]
            else:
                curr_segment.append(i)
        
        segments.append(curr_segment)
        
        total_cost = 0
        for segment in segments:
            total_cost += len(segment)
        
        print(total_cost)

# Input
t = int(input())
test_cases = []
for _ in range(t):
    s = input().strip()
    test_cases.append(s)

# Output
min_cost_to_sort(t, test_cases)
