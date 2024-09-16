Q First take the no. of size of of array then element and then you hv to take one element and find its index value at present oki 

// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    vector<int> v;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    
    int m;
    cin>>m;
    
    bool found = false;
    for(int i=0;i<v.size();i++){
        if(m==v[i]){
            cout<<"Target found at index: "<<i<<endl;
            found=true;
            break;
    
        }
    }
    
    if(!found){
        cout<<"-1" <<endl;
    }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }cout<<endl;
    
    
    return 0;
}


input values: 
5
10 20 30 40 50
20