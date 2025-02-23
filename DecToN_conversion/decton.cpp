

#include <iostream>
#include<vector>
#include<array>
#include<algorithm>
#include<string.h>

using namespace std;

string decitoNBase (int n, int num) 
{
        string res = "";  
        int quotient = num/n;     
        
        vector<int> rem;
        
        rem.push_back(num % n);
          
        while(quotient != 0)
        {
            rem.push_back(quotient % n);
            quotient = quotient / n;
        }
        
        for (int i = 0; i < rem.size (); i++)
        {
            if (rem[i] > 9)
    	      {
                res = (char)(rem[i] - 9 + 64) + res;
                // cout<<res<<" "<<"v"<< endl;
            }
    	    else
                res = to_string(rem[i]) + res;
                // cout<<res<<" "<<"a"<< endl;
        }
        
        return res;
}

int main () 
{
  int n;        //base value
  int num;     //718
  cin >> n>>num;
 
  cout << decitoNBase(n, num);
   
  return 0;
}