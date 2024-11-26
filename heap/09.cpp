pop element in this question this is imp:


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
int sum;


    vector<int>v;

    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
        push_heap(v.begin(),v.end());
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
cout<<endl;


   auto min_it= min_element(v.begin(),v.end());
   int mini=*min_it;
   cout<<"Min element: "<<mini<<endl;

    v.erase(min_it);


make_heap(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}