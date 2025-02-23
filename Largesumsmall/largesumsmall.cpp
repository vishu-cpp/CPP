#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
#include <limits.h>
using namespace std;
/*
You are required to implement the following Function def LargeSmallSum(arr). 
The function accepts an integers arr of size ’length’ as its arguments
you are required to return the sum of second largest element from the even positions
and second smallest from the odd position of given ‘arr’.

Assumption:

All array elements are unique
Treat the 0th position a seven

NOTE:

Return 0 if array is empty
Return 0, if array length is 3 or less than 3

Example:-

Input

arr:3 2 1 7 5 4

Output

7

Explanation

Second largest among even position elements(1 3 5) is 3
Second largest among odd position element is(2 7 4) is 4
Thus output is 3+4 = 7
Sample Input

arr:1 8 0 2 3 5 6

Sample Output

8
*/

int largesum(vector<int> &arr)
{
    
    int max=INT_MIN;
    int smax=INT_MIN;
    int smin=INT_MAX;
    int min=INT_MAX;
    if(arr.empty() || arr.size()<=3)    //array khali aur 3 size se chota nhi hona chaiye
    {
        return 0;
    }

    for(int i=0;i<arr.size();i++)
    {
        if(i%2==0)      //even indexes ka second largest 
        {
            if(arr[i]>max)
            {
                smax=max;
                max=arr[i];
            }
            else if(arr[i]<max && arr[i]>smax)      //element max se chota per smax se bada
            {
                smax=arr[i];
            }
    
        }
        else           //odd indexs ka second smallest
        {
            if(arr[i]<min)       
            {
                smin=min;
                min=arr[i];
            }
            else if(arr[i]>min && arr[i]<smin)   //element min se bada per smin se chota
            {
                smin=arr[i];
            }
        }
    }
    return smax+smin;

}

int main()
{
    vector<int> arr {1,8,0,2,3,5,6};

    cout<<largesum(arr);
}