#include <bits/stdc++.h>
using namespace std;

int firstMissing(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count ++;
            if (arr[i] == 1) {
                
                for (int j = i + 1; j < n; j++) {
                    if (arr[j] == arr[i] + 1 || arr[j] == arr[i]) {
                        i++;
                    }
                    else {
                        return arr[i] + 1;
                    }
                }
                
            }
            else {
                return 1;
            }
        }
    }
    
    if (count == 0) return 1;
    return arr[n - 1] + 1;
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
	    cout << firstMissing(arr,size) << endl;
	}
	

}
