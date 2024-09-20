Q First take total no. of array and then takes values and then provide a number and see if thatt number is present in the given array or not 


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
    
    int m;
    cin>>m;
    
    bool found = false;
    
    for(int i=0;i<n;i++){
        if(v[i]==m){
            found=true;
            break;
        }
    }
    
    if(found){
        cout<<"Plabt species "<< m <<"is present"<<endl;
    }else{
        cout<<"Plabt species "<< m <<"is not  present"<<endl; 
    }
}

5
6 8 7 4 2 
2