//Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m.
//The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).
//Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as following.

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	//code
	int T;
    cin>>T;
    
    while(T--){
        ll m, n;
        cin>>m;
        cin>>n;
        ll* arr1 = new ll[m];
        ll* arr2 = new ll[n];
        for(ll i=0; i<m; i++){
            cin>>arr1[i];
        }
        
        // Taking arr2 as input
        for(ll i=0; i<n; i++){
            cin>>arr2[i];
        }
        
        ll i = m-1; 
        ll j = 0; 
        
        for(; i>=0 && j<n ; i--,j++){   
            if(arr1[i]>=arr2[j])
             swap(arr1[i],arr2[j]);
            else
             break;
        }
        sort(arr1,arr1+m); 
        sort(arr2,arr2+n);
        
        for(ll i=0; i<m; i++){
            cout<<arr1[i]<<" ";
        }
        for(ll i=0; i<n; i++){
            cout<<arr2[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}