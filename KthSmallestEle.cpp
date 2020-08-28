//Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. 
//It is given that all array elements are distinct.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n, k;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n ; i++){
            cin>>arr[i];
        }
        cin>>k;
        sort(arr, arr+n);
        /*for(int i = 0; i<n ; i++) cout<<arr[i]<<" ";
        cout<<endl;*/
        cout<<arr[k-1]<<endl;
    }
    return 0;
}