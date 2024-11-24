

*****************************************************
We use the Boyer-Moore Voting Algorithm because it is a highly efficient and space-saving solution to find the majority element in an array.
Its linear time complexity O(N) and constant space O(1) usage make it ideal for this problem, especially when compared to other methods that may require extra space or sorting.

*********************************************************





#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n) {
    int res = 0;
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res = i;
            count=1;
        }
    }
    
    
    count=0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
    }
    if(count>n/2){
        return arr[res];
    }
    else{
        return -1;
    }
}

int main() {
    int n = 5;
    int arr[n] = {8, 3, 4, 8, 8};
    int result = majorityElement(arr, n);
    
    // Print the result
    if (result != -1) {
        cout << "Majority Element: " << result << endl;
    } else {
        cout << "No Majority Element" << endl;
    }
    
    return 0; 
}

/*
int majorityElement(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int current = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                current++;
                if(current > n / 2) {
                    return arr[i];
                }
            }
        }
    }
    return -1; 
}
*/
