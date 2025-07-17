#include <bits/stdc++.h> 
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
            continue;
            
        }
        if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }
    if (secondMax == INT_MIN) {
        return -1;
    }
    return secondMax;

}


int main() {
    vector <int> arr = {1,2,3,4,5};
    findSecondLargest(5, arr);

}