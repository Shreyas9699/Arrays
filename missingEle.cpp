//Given an array on n-1 elements with range 1 to n, find missing element

#include<iostream>
#include<bits/stdc++.h>

int missingEle(std::vector<int> arr){
    int n, sum, actSum;
    n = arr.size()+1;
    sum = (int)n*(n+1)/2;
    for(auto i : arr){
        actSum += i;
    }
    return std::abs(sum - actSum);
}

int main(){
    int n, m;
    std::vector<int> arr;
    std::cout<<"Enter n value\n";
    std::cin>>n;
    std::cout<<"Enter n-1 values\n";
    for(int i = 0; i<n-1;i++){
        std::cin>>m;
        arr.push_back(m);
    }
    std::cout<<missingEle(arr);
    return 0;
}