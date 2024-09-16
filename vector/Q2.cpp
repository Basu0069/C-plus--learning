Q2 so you hav to insert a value in the given index okie and if the index value is not present in it then u hv to print invalid postion!


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
    
        cout<<"Original array: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    int p;
    cin>>p;
    
    if(p<0 || p>n){
        cout<<"Invalid postion!";
        return 0;
    }
    
    int s;
    cin>>s;
    
    v.insert(v.begin()+p-1,s);
    
        cout<<"Updated array : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    
    
    
    return 0;
}