def findAliveSoldiers(n, k, soldiers_to_kill):
    if n == 0:  # Edge case: no soldiers
        return []
    if k == 0:  # Edge case: no soldiers to be killed
        return list(range(1, n+1))

    soldiers = set(range(1, n+1))
    queued = set()
    
    for soldier in soldiers_to_kill:
        if soldier in soldiers:
            soldiers.remove(soldier)
            if 2*soldier not in queued:  # Only add soldier to queue if not already in queue
                queued.add(2*soldier)
            if 2*soldier + 1 not in queued:  # Only add soldier to queue if not already in queue
                queued.add(2*soldier + 1)

    return sorted(list(soldiers)) if soldiers else [0]

# Test cases
print(findAliveSoldiers(7, 1, [1]))
# Expected Output: [0]

print(findAliveSoldiers(7, 2, [2, 7]))
# Expected Output: [1, 3, 6]


def get_alive_soldiers(N, K, killed_soldiers):
    soldiers = set(range(1, N+1))
    for soldier in killed_soldiers:
        if soldier in soldiers:
            soldiers.remove(soldier)
            i = soldier
            while i <= N:
                if i * 2 in soldiers:
                    soldiers.remove(i * 2)
                if i * 2 + 1 in soldiers:
                    soldiers.remove(i * 2 + 1)
                i *= 2
    return sorted(list(soldiers))

# Example usage:
N = 7
K = 1
killed_soldiers = [1]
result = get_alive_soldiers(N, K, killed_soldiers)
print(result)  # Output: [0]