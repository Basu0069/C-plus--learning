// Here first i have to make min heap and then i have to remove the elements thata are power of 2 and then again make in min heap okayy..

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


    vector<int>b;

    for(int i=0;i<v.size();i++){
        if(!(v[i] & (v[i]-1))){
            continue;
        }
        b.push_back(v[i]);
    }

make_heap(b.begin(),b.end(),greater<int>());


cout<<endl;
cout<<"Updated MiniHeap: ";
    for(auto l: b){
        cout<<l<<" ";
    }







}