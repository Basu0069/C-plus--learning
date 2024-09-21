// First take array as no. and then input the values you want to delete okie 


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    vector<int>v;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

     // Input the elements to be deleted
        int m;
        cout << "Enter the number of elements to be deleted: ";
        cin >> m;
        vector<int> toDelete;
    
        for (int i = 0; i < m; i++) {
            int element;
            cin >> element;
            toDelete.push_back(element);
        }
    
        // Remove the elements from the original vector
        for (int i = 0; i < toDelete.size(); i++) {
            v.erase(remove(v.begin(), v.end(), toDelete[i]), v.end());
        }
    
        // Print the modified vector
        cout << "Modified Vector: ";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;




return 0;

}

