#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    vector<int>a;

    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        a.push_back(element);
    push_heap(a.begin(),a.end(),greater<int>());
    }
cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

cout<<endl;
    int f;
    cin>>f;

    bool found = false;
    for(int i=0;i<a.size();i++){
        if(a[i]==f){
            found = true;
            break;

        }
    }

    if(found){
        cout<<f<<" is present"<<endl;
    }
    else{
        cout<<f <<" is not present "<<endl;
    }

return 0;

}