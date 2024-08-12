# Ḥ,‘$€F>ÐḟðƬF⁴R¤ḟ  Main Link
#          ðƬ       While the results don't reach a fixed point
# Ḥ                 Double each value (killed soldier)
#  , $              Pair            with
#     €                  each value
#   ‘                                    itself incremented
#      F            Flatten the result
#        Ðḟ         Filter out (remove) elements that are
#       >           Greater than the right argument (the number of soldiers)
#            F      Flatten the accumulated list of killed soldiers
#                ḟ  Filter; remove the killed soldiers from
#             ⁴R¤   [1, 2, ..., N], the list of all soldiers


# write the optimised answer
# time complexity ?
def kill(n, k, soldier):
    if n == 0:
        return []
    if k == 0:
        return list(range(1, n+1))
    soldiers = set(range(1, n+1))
    for i in soldier:
        queue = [i]
        queued = set(queue)
        while queue:
            current = queue.pop(0)
            if current in soldiers:
                soldiers.remove(current)
                if 2*current not in queued:
                    queue.append(2*current)
                    queued.add(2*current)
                if 2*current+1 not in queued:
                    queue.append(2*current+1)
                    queued.add(2*current+1)
    return sorted(list(soldiers)) if soldiers else [0]


print(kill(7, 1, [1]))
print(kill(7, 2, [2, 7]))
# time complexity ?
# O(n^2)
# can we make it more optimised ?
# yes
# make it best optimal
# O(n)
