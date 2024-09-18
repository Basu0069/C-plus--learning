// SET INSERSECTION VECTOR:

Q First take size of array and tthem take element and the again take size of second element adn take elelements and then found out the common element between them oki adn print it 



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
    }cout<<endl;
    
    int m;
    cin>>m;
    
    vector<int> p;
    for(int i=0;i<m;i++){
        int elements;
        cin>>elements;
        p.push_back(elements);
    }
    
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }cout<<endl;
    
  sort(v.begin(),v.end());
  sort(p.begin(),p.end());
  
  
 vector<int>intersection;
 set_intersection(v.begin(),v.end(),p.begin(),p.end(),back_inserter(intersection));
    
    
    if(intersection.empty()){
        cout<<"No common Ids found"<< endl;
    }else{
        for(int i=0;i<intersection.size();i++){
            cout<< intersection[i]<<" ";
        }
        cout<< endl;
    }
    
    
    
    
 return 0;
}

INPUT: 4
101 110 122 157
3
97 122 157

OUTPUT:

101 110 122 157 
97 122 157 
122 157