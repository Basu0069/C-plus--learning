Q Basically you hv given two array and u hv to merge them okie. without duplicates just that nigga!!


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
    
    int m;
    cin>>m;
    vector<int>q;
    
    
    for(int i=0;i<m;i++){
        int value;
        cin>>value;
        q.push_back(value);
    }
    
    
    set<int>combine;
    
    for(int i=0;i<n;i++){
        combine.insert(v[i]);
    }
    
    for(int i=0;i<m;i++){
        combine.insert(q[i]);
    }
    
    cout<<"total no. of unique elements "<<combine.size()<<endl;
    
    for(int i=0;i<combine.size();i++){
        cout<<combine[i]<<" ";
    }
    cout<<endl;
    
    
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }cout<<endl;
    
    // for(int i=0;i<q.size();i++){
    //     cout<<q[i]<<" ";
    // }cout<<endl;
    
    
    
    
    return 0;
}