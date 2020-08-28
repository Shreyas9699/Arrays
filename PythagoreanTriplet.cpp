//Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a^2 + b^2 = c^2



#include <bits/stdc++.h>
using namespace std;

bool checkTriplet(int arr[], int n) 
{ 
    int maximum = 0; 
    for (int i = 0; i < n; i++){ 
        maximum = max(maximum, arr[i]); 
    } 
    int hash[maximum + 1] = { 0 }; 
    for (int i = 0; i < n; i++) 
        hash[arr[i]]++; 
    for (int i = 1; i < maximum + 1; i++){ 
        if (hash[i] == 0) 
            continue; 
        for (int j = 1; j < maximum + 1; j++){ 
            if ((i == j && hash[i] == 1) || hash[j] == 0) 
                continue;
            int val = sqrt(i * i + j * j); 
            if ((val * val) != (i * i + j * j)) 
                continue;
            if (val > maximum) 
                continue; 
            if (hash[val]){ 
                return true; 
            } 
        } 
    } 
    return false; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n ;i++) cin>>arr[i];
        if(checkTriplet(arr, n)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}