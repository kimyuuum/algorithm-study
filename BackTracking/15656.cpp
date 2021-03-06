//
//  15656.cpp
//  
//
//  Created by 김유민 on 2020/01/23.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[9];
int n,m,num;
vector<int> v;

void dfs(int count){
    
    if(count == m){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        for(int i=0; i<n; i++){
            v.push_back(arr[i]);
            dfs(count+1);
            v.pop_back();
        }
    }
}

int main(){
    
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>num;
        arr[i] = num;
    }
    sort(arr,arr+n);
    dfs(0);
    
}

