/*
You have a basket filled with apples and mangoes. 
Your task is to implement a function called BalanceFruits, 
which accepts three integers as its arguments: 'a', 'm', and 'rs'.
'a' represents the number of apples in the basket, 
'm' represents the number of mangoes, 
and 'rs' represents the total rupees you have.

The function should balance the basket following these rules:

If there are more apples than mangoes (a > m), buy (a - m) mangoes at the rate of Rs 1 per mango. 
If there are more mangoes than apples (a < m), sell (m - a) mangoes at the rate of Rs 1 per mango. 
After balancing the basket, the function should return the total rupees left with you.

Implement the function BalanceFruits with the following signature:

int BalanceFruits(int a, int m, int rs);

Input Format

NA

Constraints

a ≥ 0, m ≥ 0 and rs ≥ 0
rs ≥ (a - m)
Output Format

NA

Sample Input 0

8 
4 
6
Sample Output 0

2
Explanation 0

There are 8 apples and 4 mangoes. Since there are more apples than mangoes (a > m)
we need to buy (a - m) = (8 - 4) = 4 mangoes to balance the basket.

Each mango costs Rs 1, so the total cost of buying mangoes will be 4 * 1 = 4 rupees.

Initially, you had 6 rupees, and after buying the mangoes,
your balance will be 6 - 4 = 2 rupees.

Sample Input 1

4 
7 
6
Sample Output 1

9
Explanation 1

There are 4 apples and 7 mangoes. Since there are more mangoes than apples (a < m), 
we can sell (m - a) = (7 - 4) = 3 mangoes to balance the basket.

Each mango can be sold for Rs 1, so the total profit from selling mangoes will be 3 * 1 = 3 rupees.

Initially, you had 6 rupees, and after buying the mangoes, your balance will be 6 + 3 = 9 rupees.
*/

#include <bits/stdc++.h>
#include <array>
#include <string>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'BalanceFruits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER a
 *  2. INTEGER m
 *  3. INTEGER rs
 */

int BalanceFruits(int a, int m, int rs) 
{

    int diff = a-m;
    int diff2= m-a;


    if(a>m)         //more apple than manggoes
    {
        rs = rs - diff;     //sell manoges
    }
    if(m>a)         //more mangoes than apple
    {
        rs = rs + diff;     //buy mangoes
    }

    return rs;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_temp;
    getline(cin, a_temp);

    int a = stoi(ltrim(rtrim(a_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string rs_temp;
    getline(cin, rs_temp);

    int rs = stoi(ltrim(rtrim(rs_temp)));

    int result = BalanceFruits(a, m, rs);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

