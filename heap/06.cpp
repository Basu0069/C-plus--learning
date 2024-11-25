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

    int even=0;
    int odd=0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout<<"even elements count: "<<even;
    cout<<endl;
    
    cout<<"odd elements count: "<<odd;

}