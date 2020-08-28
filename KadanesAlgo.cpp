//Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Kadane(vector<int> arr, int n){
    if(n==1) return arr[0];
    int max_so_far=0, max_ending=0;
    for(auto i : arr){
        max_ending += i;
        if(max_so_far < max_ending) max_so_far = max_ending;
        if(max_ending < 0) max_ending=0;
    }
    return max_so_far==0?-1:max_so_far;
}

int main() {
	//code
	int t;
	std::cin>>t;
	while(t--){
	    int n;
	    std::vector<int> arr;
	    std::cin>>n;
	    int m;
	    for(int i = 0; i<n;i++){
	        std::cin>>m;
	        arr.push_back(m);
	    }
	    cout<<Kadane(arr, n)<<endl;
	}
	return 0;
}