
"""
Watering plants
Imagine you are a park ranger responsible for maintaining N plants along a hiking trail. The plants are
arranged in a straight line and numbered from 0 to N - 1, with the ith plant located at x = i. You have a water
source at z = -1, which you must use to refill your watering can.
Each plant requires a different amount of water and you must water them in order, from left to right. If you run
out of water while watering a plant, you must return to the water source to refill your watering can before
continuing to the next plant. You cannot refill your watering can before it is empty or it cannot water the next
plant, and it takes one step to move one unit on the x-axis
Determine the number of steps you must take to water all of the plants along the hiking trail successfully.
Notes
• You start at -1.
• The location of the plants starts from 0.
Function description
Complete the function solution® provided in the editor. The function takes the following 3 parameters and
returns the solution:
• N. Represents the number of plants
• C. Represents the capacity of the water can
• plants: Represents the water requirements of the plant
Input format for custom testing
Note: Use this input format if you are testing against custom input or writing code in a language where we
don't provide boilerplate code
• The first line contains N denoting the number of plants.

Note: Use this input format if you are testing against custom input or writing code in a language where we
don't provide boilerplate code
• The first line contains N denoting the number of plants.
• The second line contains C denoting the capacity of the can.
• The third line contains plants denoting the water requirements of the plants.
Output format
Print an integer representing the steps needed.
Constraints
1 ≤ N ≤ 105
1 ≤ plantsli] ≤ C ≤ 10%

Input:
6 
4
1 1 1 4 2 3

Ouptut:
30

"""
def solution(N, C, plants):
    steps = 0
    water_can = C

    for plant in plants:
        if water_can < plant:
            steps += 2 * water_can
            water_can = C
        steps += 1
        water_can -= plant

    return steps

# Test case
if __name__ == "__main__":
    N = int(input().strip())  # Number of plants
    C = int(input().strip())  # Capacity of the watering can
    plants = list(map(int, input().strip().split()))  # Water requirements of the plants

    result = solution(N, C, plants)
    print(result)
