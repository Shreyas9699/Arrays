//Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subarraySum(vector<int> arr, int k){
    int n = arr.size();
    int temp=0, end=0, start=0;
    while((!(temp < k && start == n)&& !(temp == k))) {
    if (temp < k) temp += arr[start++];
    if (temp > k) temp -= arr[end++];
    }
    if(temp == k)  std::cout<<end+1<<" "<<start;
    else std::cout<<"-1";
    
}

int main() {
	//code
	int t;
	std::cin>>t;
	while(t--){
	    int n, k;
	    std::vector<int> arr;
	    std::cin>>n>>k;
	    int m;
	    for(int i = 0; i<n;i++){
	        std::cin>>m;
	        arr.push_back(m);
	    }
	    subarraySum(arr, k);
	    std::cout<<endl;
	}
	return 0;
}