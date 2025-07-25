#include <bits/stdc++.h>
using namespace std;

int minimumParentheses(string pattern) 
{
    for (int i = 0; i < pattern.length(); i++) 
    {
        if (pattern[i] == '(') 
        {
            if (i + 1 < pattern.length() && pattern[i + 1] == ')')
            {
                pattern.erase(i, 2);
                i = -1;
            }
        }
    }
    return pattern.length();
}

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) 
    {
        string s;
        cin >> s;
        cout << minimumParentheses(s) << endl;
    }

}
