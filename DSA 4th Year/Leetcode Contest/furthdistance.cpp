/*
8015. Furthest Point From Origin
User Accepted:7
User Tried:16
Total Accepted:7
Total Submissions:16
Difficulty:Easy
You are given a string moves of length n consisting only of characters 'L', 'R', and '_'. The string represents your movement on a number line starting from the origin 0.

In the ith move, you can choose one of the following directions:

move to the left if moves[i] = 'L' or moves[i] = '_'
move to the right if moves[i] = 'R' or moves[i] = '_'
Return the distance from the origin of the furthest point you can get to after n moves.



Example 1:

Input: moves = "L_RL__R"
Output: 3
Explanation: The furthest point we can reach from the origin 0 is point -3 through the following sequence of moves "LLRLLLR".
Example 2:

Input: moves = "_R__LL_"
Output: 5
Explanation: The furthest point we can reach from the origin 0 is point -5 through the following sequence of moves "LRLLLLL".
Example 3:

Input: moves = "_______"
Output: 7
Explanation: The furthest point we can reach from the origin 0 is point 7 through the following sequence of moves "RRRRRRR".
*/
#include <bits/stdc++.h>
using namespace std;

int furthestDistanceFromOrigin(string moves) {
    
    int l=0,r=0;
    for(auto c:moves){
        if(c=='L'|| c=='_')
            l++;
        else{
            l--;
    }

    
    }
    for(auto c:moves){
        if(c=='R'|| c=='_')
            r++;
        else{
            r--;
    }

    
    }
    // int ans=
    return max(l,r);
    
}

int main() {
    string moves1 = "L_RL__R";
    cout << "Test Case 1: " << furthestDistanceFromOrigin(moves1) << endl;

    string moves2 = "_R__LL_";
    cout << "Test Case 2: " << furthestDistanceFromOrigin(moves2) << endl;

    string moves3 = "_______";
    cout << "Test Case 3: " << furthestDistanceFromOrigin(moves3) << endl;

    string moves4 = "R_";
    cout << "Test Case 4: " << furthestDistanceFromOrigin(moves4) << endl;

    return 0;
}
