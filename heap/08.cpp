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
    }

    priority_queue<int , vector<int> , greater<int>>min_heap(v.begin() , v.end());


//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// cout<<endl;

while(!max_heap.empty()){
    cout<<max_heap.top() <<" ";
    max_heap.pop();
}
}















