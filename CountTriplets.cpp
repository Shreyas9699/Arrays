//Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int n;
	cin>>n;
	int size = 0;
	int op[n];
	for(int x = 0;x<n;x++){
	   cin>>size;
	   int arr[size];
	   for(int y=0;y<size;y++){
	       cin>>arr[y];
	   }
	   // need to sort here
	   sort(arr,arr+size);
	   int counter = 0;
	   int i = 0; int j = size-2; int k = size-1;
	   while( k > 1 ){
	       if(j > i){
    	       if( arr[i] + arr[j] < arr[k] ){
    	           i++;
    	       }
    	       else if( arr[i] + arr[j] > arr[k] ){
    	           j--;
    	       }
    	       else{
    	           counter++;
    	           i++;j--;
    	       }
	       }
	       else{
	           //Resetting
               k = k-1;
	           j = k-1;
	           i=0;
	       }
	   }
	   if(counter == 0)
	    op[x] = -1;
	   else
	    op[x] = counter;
	}
	for(int x = 0;x<n;x++){
	    cout<<op[x]<<endl;
	}
	return 0;
}