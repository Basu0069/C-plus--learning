Q First take the size of array and then take elements in it and then take another integer value and find it index value where it should be put in okie 


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
    };
    
    int newson;
    cin>>newson;
    
    int index=0;
    while(index<n && v[index]<newson){
        index++;
    };
    
    cout<<"The new song should be inserted at index "<< index<<endl;
    
    return 0;
    
}


4
1 3 5 6 
5 