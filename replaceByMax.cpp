//replace elements with largest  element
//I/P : 5 1 2 3 0
//O/P : 3 3 3 0 -1


#include<iostream>
#include<bits/stdc++.h>

int main(){
    std::vector<int> arr;
    int n;
    std::cout<<"Enter number of elements"<<std::endl;
    std::cin>>n;
    int m, i = n;
    while(i){
        std::cin>>m;
        arr.push_back(m);
        i--;
    }
    int max= -1;
    std::vector<int> res;
    for(int i = n-1; i>=0; i--){
        res.push_back(max);
        if(max < arr[i]) max = arr[i];
    }
    for(int i = n-1;i>=0;i--){
        std::cout<<res[i]<<' ';
    }
    return 0;
}