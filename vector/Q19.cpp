Q first take input as single value and then take the value in it as a rrray and then put the even position in ascending order and odd position in decending order okie 



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i =0;i<n;i=i+2){
        for(int j=i+2;j<n;j=j+2){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
    for(int i =1;i<n;i=i+2){
        for(int j=i+2;j<n;j=j+2){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    
    
 
    return 0;
}

INPUT:
5 
1 2 3 4 5


OUTPUT:
1 2 3 4 5 
1 4 3 2 5 
