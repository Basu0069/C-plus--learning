Q3 you hv to print the number of occurenec of each number in the array okie 
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    vector<int>v;
    
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    
    map<int,int>frequency;
    
    for(int i=0;i<v.size();i++){
        frequency[v[i]]++;
    }
    
    
    cout<<"Output"<<endl;
    for(auto &pair:frequency){
        cout<<pair.first<<":"<<pair.second<<endl;
    }
}