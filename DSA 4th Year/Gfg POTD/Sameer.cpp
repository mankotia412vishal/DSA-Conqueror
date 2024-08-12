/*

In the great battle of Manchester, the Carmen Army had formed a
circular battle formation, known as the CIRCLE OF DEATH, with
Abraham trapped inside it.
All the N soldiers were standing in a circle with Abraham standing in
front of one of the soldiers. The only way to get out of the formation
was by killing all the soldiers. Abraham, being one of the greatest
warriors, applied a brilliant strategy te save as much energy as
possible. He moved in the clockwise direction inside the formation
killing every alternate soldier starting from where he was standing
initially. Every time he reached the point from wh
remaining soldiers moved to the inner circle but/
killing them accordingly (killing alternate soldiers,
was left in the innermost circle.
The strongest of all the Carmen soldiers was Dary
and return that how many soldiers should stand t
and Daryl (clockwise direction starting from Abral
the soldier standing in front of Abraham initially), so that Daryl nignts
the fully exhausted Abraham in the innermost circle?

Input Specification:
input1: N, total number of soldiers
Output Specification:
Return number of soldiers that should stand between Abraham
and Daryl as asked in the question.
Example 1:
input1: 3
Output: 1
Explanation:
The 18 and 3rd soldiers would be killed in the first round. Hence, Daryl
will be on the 2'd position with 1 person between him and
Abraham. Therefore, 1 is returned as the output.
Example 2:
input1: 4
Output: 3
Explanation:
The 15! and 3rd soldiers would be killed in the first round. In the 2nd
round, only the soldier initially standing on the 2nd position with
respect to Abraham would be killed. Hence, there must be 3 people in
between Abraham and Daryl.Therefore, 3 is returned as the output.


*/
#include <iostream>

int numberOfSoldiers(int input1) {
    int result = 0;
    
    // Calculate the highest power of 2 less than or equal to input1
    int powerOfTwo = 1;
    while (2 * powerOfTwo <= input1) {
        powerOfTwo *= 2;
    }
    
    // Calculate the remaining soldiers after the first round
    int remainingSoldiers = input1 - powerOfTwo;
    
    // Calculate the position of Daryl after the first round
    int darylPosition = 2 * remainingSoldiers + 1;
    
    // Calculate the number of soldiers between Abraham and Daryl
    result = (darylPosition - 1) / 2;
    
    return result;
}

int main() {
    // Example usage
    std::cout << "Example 1: " << numberOfSoldiers(3) << std::endl;  // Output: 1
    std::cout << "Example 2: " << numberOfSoldiers(4) << std::endl;  // Output: 3

    return 0;
}
