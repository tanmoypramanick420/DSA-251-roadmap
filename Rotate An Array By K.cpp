#include <bits/stdc++.h>

using namespace std;

vector < int > rotateArray(vector < int > arr, int k) {
    vector < int > rotateArr(arr.size());
    int rotateRem = k % arr.size();
    for (int i = 0; i < arr.size(); i++) {
        int index;
        if ((i - rotateRem) < 0) {
            index = arr.size() + (i - rotateRem);
        }
        else {
            index = i - rotateRem;
        }

        rotateArr[index] = arr[i];
    }
    return rotateArr;
}


int main() {
    vector < int > arr = {
        1,
        2,
        3,
        4,
        5
    };
    rotateArray(arr, 2);

}