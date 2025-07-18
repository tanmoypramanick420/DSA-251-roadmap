#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& arr) {
    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        rightSum += arr[i];
    }

    for (int i = 0; i < arr.size(); i++) {

        if (i == 0) {
            rightSum -= arr[i];
        } else {
            leftSum += arr[i - 1];
            rightSum -= arr[i];
        }
        if (leftSum == rightSum) {
            return i;
        }
    }
    return -1;
    }

int main() {
    int testCase;
    cin >> testCase;
    
    while (testCase--) {
        int size;
        cin >> size;
        vector<int> arr(size);
        
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << pivotIndex(arr) << endl;
    }
	

}
