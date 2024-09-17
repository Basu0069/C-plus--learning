Q taking size of array and then element and then again size and again value and then merged both of them oki 


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    
    cin>>m;
    vector<int>b;
    for(int i=0;i<m;i++){
        int element;
        cin>>element;
        b.push_back(element);
    }
    
    vector<int> merged(n+m);
merge(v.begin(),v.end(),b.begin(),b.end(),merged.begin());

for(int i=0;i<merged.size();i++){
    cout<< merged[i]<<" ";
}
cout<<endl;
    
    return 0;
}

4
101 203 305 407
4
102 204 306 408


output:
101 102 203 204 305 306 407 408 
