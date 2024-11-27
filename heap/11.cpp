//THIS MOVES THE  MAX ELEMENT IN THE LASST AND REMOVE IT IMP QUESTION THO


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


// remove the top element moves the max element to the end 
pop_heap(v.begin(),v.end());
v.pop_back();

 cout << "Max-Heap after removal: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;


}