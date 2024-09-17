Q 
1 Traversal: throught the list and then 
2 Insertion:
3 Deletion:

the code is :


#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int x;
    cout<<"Enter the number of items in the inventory: ";
    cout<<endl;
    cin>>x;
    
    vector<int> v;
    for(int i=0;i<x;i++){
        int element;
        cin>> element;
        v.push_back(element);
    }
    
    cout<<" Inventory list: ";
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
    
    
    int n;
    cout<<"Enter the number of new items to be added: ";
    cin >> n;
    
    for(int i=0;i<n;i++){
        int quantity;
        cin>>quantity;
        v.push_back(quantity);
        cout<<"Inserting Item: " << quantity << endl;
        cout<<"Inventory List: ";
        for(int j=0;j< v.size();j++){
            cout<< v[j] <<" ";
        }
        cout<< endl;
    }
    
    
    int m;
    cout<<"ENter the quantiy of the itme ot be removed: ";
    cin>>m;
    
    for(int i=0;i<m;i++){
        int quantity;
        cin >> quantity;
        for(int j=0;j<v.size();j++){
            if(v[j]==quantity){
                v.erase(v.begin()+ j);
                cout<<"Removing Item: "<< quantity<< endl;
                cout<<"Inventory List: ";
                
                for(int k=0; k<v.size();k++){
                    cout<< v[k]<<" ";
                }
                cout<< endl;
                break;
            }
        }
    }
    return 0;
}



input value 
3
50 120 30
2
75 200 
2 
120 50
