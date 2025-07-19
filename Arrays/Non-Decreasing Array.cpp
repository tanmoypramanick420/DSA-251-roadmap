#include <bits/stdc++.h>
using namespace std;

bool isPossible(int *arr, int n)
{
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            count++;
            if (i == 1 || arr[i - 2] <= arr[i]) {
                arr[i - 1] = arr[i];
            }
            else {
                arr[i] = arr[i -1];
            }
        }
    }
    
    return count <= 1;
}

int main() {
    int testCase;
    cin >> testCase;
    
    while (testCase--) {
        int size;
        cin >> size;
        int arr[size];
        
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << isPossible(arr,size);
    }
	

}
