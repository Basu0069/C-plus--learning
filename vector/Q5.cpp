Q5 Take no. of students first and then take total no. of subjects and then their marks and the nfind me the average value of each student okie 

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,m;
    cin>>n>>m;
 
    vector<vector<int>> grades(n,vector<int>(m));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grades[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        double sum=0;
        for(int j=0;j<m;j++){
            sum=sum+grades[i][j];
        }
        
    double average= sum/m;
    
    cout<<"Student "<<i+1 <<":" << fixed << setprecision(1)<< average<< endl;
    }
 return 0;   
}