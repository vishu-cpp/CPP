#include <bits/stdc++.h>
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'DivisibleFragmentsCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER num as parameter.
 */

int DivisibleFragmentsCount(int num) 
{
    vector<int> digits;
    
    while (num > 0)
    {
        digits.push_back(num % 10);
        num =num/10;
    }
    
    int count = 0;
    int size = digits.size();
    
    
    for (int i = 0; i < size; i++)
    {
        if(digits[i]==0)
        {
            continue;
        }
        int fragment = 0;
        for (int j = i; j < size; j++)
        {
            fragment = fragment * 10 + digits[j];   //creating fragments
            
            if (fragment % 11 == 0)
            {
                count++;
            }
        }
    }
    
    return count;
    
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string num_temp;
    getline(cin, num_temp);

    int num = stoi(ltrim(rtrim(num_temp)));

    int result = DivisibleFragmentsCount(num);

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
