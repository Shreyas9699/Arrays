//Giver 2d array with only 0's and 1's in sorted formate, find row with max numbers of 1's

#include<iostream>
#include<bits/stdc++.h>

int main(){
    std::vector<std::vector<int>> arr;
    int m, n, k;
    std::cout<<"Enter number of rows and colums"<<std::endl;
    std::cin>>n>>m;
    std::cout<<"Enter 2d array"<<std::endl;
    for(int i = 0; i < n; i++){
        std::vector<int> temp;
        for(int j = 0; j < m; j++){
            std::cin>>k;
            temp.push_back(k);
        }
        arr.push_back(temp);
        temp.clear();
    }
    int row,i,j;
    for(i = 0,j=n-1; i<n;i++){
        while(arr[i][j]==1 && j>=0){
            row = i;
            j--;
        }
    }
    std::cout<<"Row number : "<<row<<" and Count: "<<n-1-j<<"\n";
    return 0;
}


// T.C = O(n), worstcase = O(max(m,n))