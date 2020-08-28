//Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n;
	    vector<int> arr;
	    for(int i = 0; i<n-1;i++){
            cin>>m;
            arr.push_back(m);
        }
	    int sum = 0;
	    for(auto i: arr){
	        sum += i;
	    }
	    int acSum = n*(n+1)/2;
	    //cout<<acSum<<" "<<sum<<endl;
	    cout<<acSum-sum<<endl;
	}
	return 0;
}