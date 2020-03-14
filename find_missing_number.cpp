/*

Interview Shuriken 53: Find the Missing Number
Level EASY
You are given an array containing ‘n’ distinct numbers taken from the range: [0, n]. Since the array contains only ‘n’ numbers and count of numbers from 0 to n is ‘n+1’, so, you have to find the missing number.
Example 1:
Input: [4, 0, 3, 1]
Output: 2
Example 2:
Input: [8, 3, 5, 2, 4, 6, 0, 1]
Output: 7
Input Format:
The first line of input contains an integer, that denotes the value of n. The following line contains n space separated integers, that denotes the value of array elements.
Constraints:
1 <= N <= 100000
0 <= A[i] <= N 
Time Limit: 0.5 seconds.
Output Format:
The first and only line of output contains the missing number, as described in the task.
Sample Input 1:
6
1 5 6 0 3 2
Sample Output 1:
4

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    //cout<<"sorted array"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    //}

    //  for (auto x : arr) 
    //     cout << x << " ";
    for(int i=0;i<n;i++){
        if(i!=arr[i]){
        cout<<i<<endl;
        break;
        }
    }
return 0;
	// Write your code here
}