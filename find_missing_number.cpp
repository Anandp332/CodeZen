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