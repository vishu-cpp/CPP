/*
Implement the following Function

The function def ProductSmallestPair(sum, arr) accepts an integers sum and an integer array arr of size n.
Implement the function to find the pair, (arr[j], arr[k]) where j!=k
Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair

NOTE:

Return -1 if array is empty or if n<2
Return 0, if no such pairs found
All computed values lie within integer range

Example

Input

sum:9

Arr:5 2 4 3 9 7 1 

Output

2

Explanation

Pair of least two element is (2, 1) 2 + 1 = 3 < 9, Product of (2, 1) 2*1 = 2. Thus, output is 2

Sample Input

sum:4

Arr:9 8 3 -7 3 9

Sample Output

-21
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
#include <limits.h>
#include <array>
#include <stdlib.h>
using namespace std;

int productsmallestpair(int sum,int arr[],int size)
{
    if(size==0 || size<2)
    {
        return -1;
    }
    int min=INT_MAX;
    int smin=INT_MAX;

    for(int i=0;i<size;i++)
    {
        
        if(arr[i]<min)
        {
            smin=min;
            min=arr[i];
        }
        else if(arr[i]>min && arr[i]<smin)
        {
            smin=arr[i];   
        }
    }

    pair<int,int> v1(smin,min);

    cout<<v1.first<<" "<<v1.second<<endl;
    
    return min*smin;
}

    



int main()
{
    int arr[]={9,8,3,-7,3,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum=4;

    cout<<productsmallestpair(sum,arr,size);


}


