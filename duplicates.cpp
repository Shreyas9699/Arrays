//Given array of n integer 1 to n find duplicate if present

#include<iostream>
#include<bits/stdc++.h>

std::string dup(std::vector<int> arr, int n){
    int actSum = 0;
    int sum = n*(n+1)/2;
    for(auto i : arr) actSum += i;
    if(actSum == sum) return "No";
    else return "Yes";
}

int main(){
    std::vector<int> arr;
    int n;
    std::cout<<"Enter n value\n";
    std::cin>>n;
    std::cout<<"Enter elements from 1 to n\n";
    int m;
    int i = n;
    while(n){
        std::cin>>m;
        arr.push_back(m);
        n--;
    }
    std::cout<<dup(arr, i);
    return 0;
}