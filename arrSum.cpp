//Given an array of n elemets and sum k. find if pair of elements present in array with sum = k.

#include<iostream>
#include<bits/stdc++.h>

int main(){
    std::vector<int> arr;
    int n, k;
    std::cout<<"Enter number of elements and sum"<<std::endl;
    std::cin>>n>>k;
    int m;
    for(int i = 0; i<n; i++){
        std::cin>>m;
        arr.push_back(m);
    }
    std::sort(arr.begin(),arr.end());
    int i=0, j=arr.size()-1;
    while(i<j){
        if(arr[i]+arr[j]==k){
            std::cout<<arr[i]<<','<<arr[j]<<std::endl;
            return 0;
        }
        else if(arr[i]+arr[j]<k) i++;
        else j--;
    }
    std::cout<<"Not Found";
    return 0;
}