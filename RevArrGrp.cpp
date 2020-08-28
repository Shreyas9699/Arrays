//Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.

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
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i<n ;i++){
            cin>>arr[i];
        }
        for(int i= 0; i<n ; i+=k){
            int l = i;
            int r = min(i + k -1, n-1);
            while(l<r){
                swap(arr[l++], arr[r--]);
            }
        }
        for(int i = 0; i<n-1; i++){
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-1]<<endl;
    }
    return 0;
}