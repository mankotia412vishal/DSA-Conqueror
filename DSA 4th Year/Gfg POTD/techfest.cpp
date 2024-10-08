/*
Techfest and the Queue
MediumAccuracy: 67.41%Submissions: 6K+Points: 4
90% Refund available on all premium courses 
Discover How  

banner
A Techfest is underway, and each participant is given a ticket with a unique number. Organizers decide to award prize points to everyone who has a ticket ID between a and b (inclusive). The points given to a participant with ticket number x will be the sum of powers of the prime factors of x.

For instance, if points are to be awarded to a participant with ticket number 12, the amount of points given out will be equal to the sum of powers in the prime factorization of 12 (22 × 31), which will be 2 + 1 = 3.

Given a and b, determine the sum of all the points that will be awarded to the participants with ticket numbers between a and b (inclusive).

Example 1:

Input: 
a = 9
b = 12
Output: 
8
Explanation: 
For 9, prime factorization is:32 
So, sum of the powers of primes is: 2
For 10, prime factorization is : 21x51 
So, sum of the powers of primes is: 2
For 11, prime factorization is : 111 
So, sum of the powers of primes is: 1
For 12, prime factorization is : 22x 31 
So, sum of powers of primes is: 3
Therefore the total sum is 2+2+1+3=8.
Example 2:

Input: 
a = 24, b = 27
Output: 
11
Explanation: 
For 24, prime factorization is: 23x31 
So, sum of the powers of primes is: 4
For 25, prime factorization is : 52 
So, sum of the powers of primes is: 2
For 26, prime factorization is : 131x21 
So, sum of the powers of primes is: 2
For 27, prime factorization is : 33  
So, sum of powers of primes is: 3
Therefore the total sum is 4+2+2+3=11.
Your Task:
You don't need to read or print anything. Your task is to complete the function sumOfPowers() which takes a and b as input parameters and returns the sum of the power of primes that occur in prime factorization of the numbers between a to b (inclusive).

Expected Time Complexity: O( b*log(b) )
Expected Space Complexity: O( b*log(b) )

Constraints:
1 <= a <= b <= 2x105
1 <= b-a <= 105

*/

#include <bits/stdc++.h>
using namespace std;
int sumOfPowers(int a, int b){
	    // use seive to find prime numbers and save all the prime numbers in a vector
        // use prime factorization to find the prime factors of a number
        // use the formula to find the sum of powers of prime factors
        // return the sum
        // step 1 create a seive
        vector<int>seive(b+1,1);
        seive[0]=0;
        seive[1]=0;
        for (int i = 2; i*i <= b; i++)
        {
            if(seive[i]==1){
                for (int j = i*i; j <= b; j+=i)
                {
                    seive[j]=0;
                }
                
            }
        }
        // step 2 create a vector of prime numbers
        vector<int>prime;
        for (int i = 0; i <= b; i++)
        {
            if(seive[i]==1){
                prime.push_back(i);
            }
        }
        // step 3 create a vector of prime factors
        vector<int>primeFactors(b+1,0);
        for (int i = 2; i <= b; i++)
        {
            int temp=i;
            for (int j = 0; j < prime.size(); j++)
            {
                if(temp%prime[j]==0){
                    primeFactors[i]++;
                    temp/=prime[j];
                    j--;
                }
            }
            
        }
        // step 4 create a vector of sum of powers of prime factors
        vector<int>sumOfPowers(b+1,0);
        for (int i = 2; i <= b; i++)
        {
            sumOfPowers[i]=sumOfPowers[i-1]+primeFactors[i];
        }
        // step 5 return the sum
        return sumOfPowers[b]-sumOfPowers[a-1];

	}
int main(){
    int a=24;
    int b=27;
    cout<<sumOfPowers(a,b)<<endl;

    
    return 0;

}