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

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

cout<<endl;

sort(v.begin(),v.end());

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}




}