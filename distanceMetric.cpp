/*
Distance Metrics
For each element in a given array, calculate the absolute value of index difference between it and all elements of the same value.
Print the result values.
eg:
n = 6
arr = [1, 2, 1, 1 ,2, 3]
Idx    0  1  2  3  4  5
op =  [5, 3, 3, 4, 3, 0]
*/

#include<bits/stdc++.h>

void countWays(int a[], int n){
    std::vector<long> res(n);
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<n; j++){
            if(i!=j && a[i]==a[j])
                res[i] += std::abs(i-j);
        }
    }
    for(int i =0; i<n ; i++){
        std::cout << res[i] << " ";
    }
}

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for(int i = 0; i<n ; i++){
        std::cin >> a[i];
    }
    countWays(a, n);
}