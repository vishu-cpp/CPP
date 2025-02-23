#include <array>
#include <iostream>
#include <algorithm>
#include <utility>
#include <map>
using namespace std;
/*
Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note : that you must do this in-place without making a copy of the array.


Example 1:

Input:  arr = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: arr = [0]
Output: [0]
*/

void endzero(int arr[],int size)
{
  int left=0;
  for(int right=0;right<size;right++)
  {
    if(arr[right]!=0)
    {
      swap(arr[left],arr[right]);
      left++;
    }
  }
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}



int main() {
  int arr[]={0,1,2,0,0,5,4,0};
  int size=sizeof(arr)/sizeof(arr[0]);
  endzero(arr,size);
  return 0;
}