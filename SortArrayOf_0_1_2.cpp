//Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

#include <bits/stdc++.h>
using namespace std;

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
        int count[3]={0,0,0};
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            count[arr[i]]++;
        }
        int j=0;
        for(int i = 0; i<3;i++){
            while(count[i]--){
                arr[j]=i;
                j++;
            }
        }
        for(int i = 0; i<n-1; i++){
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-1]<<endl;
    }
    return 0;
}