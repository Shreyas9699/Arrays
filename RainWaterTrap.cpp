//Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each block is 1. 
//Compute how much water can be trapped in between blocks after raining.

#include <bits/stdc++.h>
using namespace std;

int trapVol(vector<int> arr){
    int n = arr.size();
    std::vector<int> lmax(n,0);
    std::vector<int> rmax(n,0);
    int m = 0;
    for(int i = 1; i<n-1; i++){
        if(m<arr[i-1]) m = arr[i-1];
        lmax[i] = m;
    }
    m = 0;
    for(int i = n-2; i>0; i--){
        if(m<arr[i+1]) m = arr[i+1];
        rmax[i] = m;
    }
    /*for(int i = 0;i<n ; i++) cout<<rmax[i]<<" ";
    cout<<endl;*/
    int sum = 0, temp = 0;
    for(int i=0; i<n; i++){
        temp = min(lmax[i],rmax[i]) - arr[i];
        if(temp<0) temp = 0;
        sum += temp;
    }
    return sum;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        vector<int> arr;
        int n,m;
        cin>>n;
        for(int i = 0; i<n; i++){
            std::cin>>m;
            arr.push_back(m);
        }
        cout<<trapVol(arr)<<endl;
    }
    return 0;
}