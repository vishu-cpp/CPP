#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
using namespace std;

/*
The function def differenceofSum(n,m) accepts two integers n, m as arguments
Find the sum of all numbers in range from 1 to m(both inclusive) that are not divisible by n.
Return difference between sum of integers not divisible by n with sum of numbers divisible by n.

Example :-

Input
n:4
m:20
Output
90

Explanation

Sum of numbers divisible by 4 are 4 + 8 + 12 + 16 + 20 = 60
Sum of numbers not divisible by 4 are 1 +2 + 3 + 5 + 6 + 7 + 9 + 10 + 11 + 13 + 14 + 15 + 17 + 18 + 19 = 150
Difference 150 – 60 = 90

Sample Input
n:3
m:10
Sample Output
19


*/
int sdifference(int n,int m)
{
    int divisible=0;
    int notdivisible=0;
    for(int i=1;i<=m;i++)
    {
        if(i%n==0)         
        {
            divisible=divisible+i;
        }
        else
        {
            notdivisible=notdivisible+i;
        }
    }
    return notdivisible-divisible;
}
int main()
{
    cout <<sdifference(3,10);

}