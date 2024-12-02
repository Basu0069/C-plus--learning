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
        make_heap(v.begin(),v.end());
    }


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    pop_heap(v.begin(),v.end()); // it moves the largest element to the last okay....
cout<<endl;

v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}