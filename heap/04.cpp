
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    vector<int>a;

    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        a.push_back(element);
    make_heap(a.begin(),a.end());
    }

    
cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
cout<<endl;

    for(int i=0;i<a.size();i++){
        cout<<a[i]*a[i]*a[i]<<" ";
    }








}