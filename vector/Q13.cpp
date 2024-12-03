Q first take input as a interger and then take values as a array 
and then put the value and see if that value is present int it or not 
and if the array is in linear form then print 
Using linear search 
303 found at index 2 like this 





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
    }
    cout<<endl;
    
    
    int m;
    cin>>m;
    
    for(int i=0;i<v.size();i++){
        if(v[i]>v[i+1]){
            cout<<"Using Linear Search"<<endl;
            break;
            
        }
        if(v[i]<v[i+1]){
            cout<<"Using Binary Search"<<endl;
            break;
        }
    }
    
    int occurence =-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==m){
            occurence= i;
            cout<<m<<"found at index"<<occurence;
            break;
        }
        
    }
    if(occurence==-1){
            cout<<m<<"not found in the list"<<endl;
    
    }
    
    return 0;
}



input:
5
101 405 303 604 505
303 

output:
Using Linear Search 
303 found at index 2 


input:
5
101 205 303 404 505 
404 

output:
Using Binary Search 
404 found at index 3 
