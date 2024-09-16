Q an array and u hv to print the number which doesnt inlcude 0 in it okie 



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
    
    vector<int>b;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            b.push_back(v[i]);
        }
    }
    
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
}