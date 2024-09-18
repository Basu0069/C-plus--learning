Q FIrst take no. of element adn take values and then find the first index value 


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
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    
    int ele=v.front();
    cout<<ele<<endl;
}

INPUT:
5
5 4 3 2 1 

OUPUT:

5 4 3 2 1 
1 2 3 4 5 
1