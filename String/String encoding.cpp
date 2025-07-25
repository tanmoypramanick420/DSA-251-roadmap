#include <bits/stdc++.h>
using namespace std;

string encode(string &message)
{
    stringstream temp;
    //string temp = "";
    int count = 1;
    for (int i = 0; i < message.length(); i++) {
        
        
        if (i+1 < message.length() && message[i] == message[i + 1]) {
            count++;
        }
        else  {
            temp << message[i] << count;
            //temp = temp + message[i] + conString(count);
            count = 1;
        }
        
        
    }
    return temp.str();
}

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) 
    {
        string s;
        cin >> s;
        cout << encode(s) << endl;
    }

}
