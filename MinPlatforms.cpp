//Given arrival and departure times of all trains that reach a railway station. 
//Your task is to find the minimum number of platforms required for the railway station so that no train waits.

#include <bits/stdc++.h>
using namespace std;

int platNo(vector<pair<int, int>> train){
    int n = train.size();
    sort(train.begin(), train.end());
    queue <int> q;
    for(int i = 0; i<n; i++){
        if(q.empty()) q.push(train[i].second);
        else{
            if(q.front()<train[i].second){
                q.pop();
                q.push(train[i].second);
            }
            else q.push(train[i].second);
        }
    }
     return q.size();
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
        vector<pair<int, int>> train;
        int arr[n], dep[n];
        
        for(int i = 0; i<n ; i++){
            cin>>arr[i];
        }
        for(int i = 0; i<n ; i++){
            cin>>dep[i];
        }
        for(int i = 0; i<n ; i++){
            train.push_back(make_pair(arr[i],dep[i]));
        }
        cout<<platNo(train)<<endl;
    }
    return 0;
}