Q Take no. of input as name and then write the names as values in an array and then sort the array according to their intitial letter in the corret order ok 



#include<bits/stdc++.h>
using namespace std;



    void sortNames(vector<string> &v){
        int n=v.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]> v[j]){
                    string temp= v[i];
                    v[i]=v[j];
                    v[j]=temp;
                }
            }
            cout<<"After iteration "<<i+1<<" ";
            for(string name: v){
                cout<< name<< " ";
            }
            cout<< endl;
        }
        cout<<" Sorted array: ";
        for(string name: v){
            cout<< name<<" ";
        }
        cout<< endl;
    }

int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string element;
        cin>> element;
        v.push_back(element);
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    sortNames(v);
    
    return 0;
}

INPUT:
3
Lucifer Ellen Annabell


OUPUT:
Lucifer Ellen Annabell 
After iteration 1 Annabell Lucifer Ellen 
After iteration 2 Annabell Ellen Lucifer 
 Sorted array: Annabell Ellen Lucifer