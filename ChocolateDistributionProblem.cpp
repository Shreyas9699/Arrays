/*
Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. 
Each packet can have variable number of chocolates. There are M students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students having packet with maximum chocolates and 
student having packet with minimum chocolates is minimum.
*/

#include <bits/stdc++.h>
using namespace std;

int minDiff(int arr[], int n, int k){
    sort(arr, arr+n);
    if(n==k) return (arr[n-1]-arr[0]);
    int mini = 9999999;
    for(int i = 0; i+k-1<n;i++){
         mini = min(mini, arr[i+k-1]-arr[i]);
    }
    return mini;
}

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
        for(int i = 0; i<n ; i++) cin>>arr[i];
        cin>>k;
        cout<<minDiff(arr, n, k)<<endl;
    }
    return 0;
}