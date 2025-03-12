import heapq

def stabilize_matrix(matrix, n, m):
    max_heap = []
    for i in range(n):
        for j in range(m):
            # Push negative value to simulate max-heap
            heapq.heappush(max_heap, (-matrix[i][j], i, j))

    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    while max_heap:
        value, i, j = heapq.heappop(max_heap)
        value = -value  # Convert back to positive

        # Check if it's strictly greater than all neighbors
        is_peak = True
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < m and matrix[ni][nj] >= value:
                is_peak = False
                break

        if is_peak:
            matrix[i][j] -= 1
            # Push the updated value back into the heap
            heapq.heappush(max_heap, (-(matrix[i][j]), i, j))
        else:
            break

    return matrix

# Read input
t = int(input())
results = []
for _ in range(t):
    n, m = map(int, input().split())
    matrix = [list(map(int, input().split())) for _ in range(n)]
    stabilized_matrix = stabilize_matrix(matrix, n, m)
    results.append(stabilized_matrix)

# Output results
for result in results:
    for row in result:
        print(' '.join(map(str, row)))
