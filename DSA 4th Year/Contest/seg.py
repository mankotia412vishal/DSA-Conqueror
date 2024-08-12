MOD = 10**9 + 7

class SegmentTree:
    def __init__(self, n):
        self.size = n
        self.tree = [0] * (4 * n)

    def update(self, idx, left, right, pos, new_val):
        if left == right == pos:
            self.tree[idx] = new_val
            return
        
        mid = (left + right) // 2
        if pos <= mid:
            self.update(2 * idx + 1, left, mid, pos, new_val)
        else:
            self.update(2 * idx + 2, mid + 1, right, pos, new_val)
        self.tree[idx] = self.tree[2 * idx + 1] + self.tree[2 * idx + 2]

    def query(self, idx, left, right, q_left, q_right):
        if q_left <= left and q_right >= right:
            return self.tree[idx]
        if q_right < left or q_left > right:
            return 0
        
        mid = (left + right) // 2
        left_sum = self.query(2 * idx + 1, left, mid, q_left, q_right)
        right_sum = self.query(2 * idx + 2, mid + 1, right, q_left, q_right)
        return left_sum + right_sum

def calculate_sum(arr):
    n = len(arr)
    segment_tree = SegmentTree(n)
    total_sum = 0

    for i in range(n):
        prev = arr[0]
        arr[0] = min(arr[0], arr[n - 1])
        segment_tree.update(0, 0, n - 1, 0, arr[0])
        
        for j in range(1, n):
            temp = min(arr[j], prev)
            prev = arr[j]
            arr[j] = temp
            segment_tree.update(0, 0, n - 1, j, arr[j])

        total_sum = (total_sum + segment_tree.query(0, 0, n - 1, 0, n - 1)) % MOD

    return total_sum

n = int(input())
arr = [int(input()) for _ in range(n)]
result = calculate_sum(arr)
print(result)
