#include <bits/stdc++.h>
using namespace std;

string reverseWords(string input) 
{
        vector<string> str;
        int size = input.length();
        for (int i = size - 1; i >= 0; i--) 
	{
            string temp = "";
            while (i >= 0 && input[i] != ' ') 
	    {
                temp.push_back(input[i]);
                i--;
            }
            reverse(temp.begin(), temp.end());
            if (temp != "") 
	    {
                str.push_back(temp);
            }
        }

        string rev = "";
        for (int i = 0; i < str.size(); i++) 
	{
            rev.append(str[i]);
            if (i < str.size() - 1)
                rev.push_back(' ');
        }
        return rev;
}

int main() {
    string demo;
    getline (cin, demo);
	cout << reverseWords (demo);

}
