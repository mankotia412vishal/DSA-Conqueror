# def findAliveSoldiers(n, k, soldiers_to_kill):
#     soldiers = set(range(1, n+1))
#     for soldier in soldiers_to_kill:
#         queue = [soldier]
#         while queue:
#             current = queue.pop(0)
#             if current in soldiers:
#                 soldiers.remove(current)
#                 queue.append(2*current)
#                 queue.append(2*current + 1)
#     return sorted(list(soldiers)) if soldiers else [0]




# print(findAliveSoldiers(7, 1, [1]))
# print(findAliveSoldiers(7, 2, [2, 7]))

def findAliveSoldiers(n, k, soldiers_to_kill):
    if n == 0:  # Edge case: no soldiers
        return []
    if k == 0:  # Edge case: no soldiers to be killed
        return list(range(1, n+1))

    soldiers = set(range(1, n+1))
    for soldier in soldiers_to_kill:
        queue = [soldier]
        queued = set(queue)  # Keep track of soldiers that are already in the queue
        while queue:
            current = queue.pop(0)
            if current in soldiers:
                soldiers.remove(current)
                if 2*current not in queued:  # Only add soldier to queue if not already in queue
                    queue.append(2*current)
                    queued.add(2*current)
                if 2*current + 1 not in queued:  # Only add soldier to queue if not already in queue
                    queue.append(2*current + 1)
                    queued.add(2*current + 1)
    return sorted(list(soldiers)) if soldiers else [0]

print(findAliveSoldiers(7, 1, [1]))
print(findAliveSoldiers(7, 2, [2, 7]))

