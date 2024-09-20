Q first take the size of the array and then takes values in it and then sort the value and then take another one lemenet and then again sort the value thats it:



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

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    int value;
    cin>> value;

    v.push_back(value);
    sort(v.begin(),v.end());

    cout<<"Updated data points: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;

}



INPUT:
6
25 36 47 58 69 80
19


OUPUT:
Updated data points: 19 25 36 47 58 69 80 