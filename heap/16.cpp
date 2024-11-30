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
        make_heap(v.begin(),v.end(),greater<int>());
    }
cout<<"Initial MiniHeap: ";
    for(auto i: v){
        cout<<i<<" ";
    }


}