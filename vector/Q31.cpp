
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr1(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }

    // vector<int> odd;
    vector<int> even;

    // int maxi = max(m , n);

    int i = 0;
    int j = 0;

    while(i != n && j != m){
        if(i < n){
            even.push_back(arr1[i]);
            i++;
        }
        if(j < m){
            even.push_back(arr2[j]);
            j++;
            }
        }

        for(int i = 0; i < even.size(); i++){
            cout<< even[i] <<" ";
        }


        
    }

    INPUT:
    5
    1 2 3 4 5 
    5 
    6 7 8 9 10

    OUTPUT:
    1 6 2 7 3 8 4 9 5 10











#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }cout<<endl;


    int tar;
    cin >> tar;

    v.erase(remove(v.begin() , v.end() , tar) , v.end());

    for(int i=0;i<n - 1;i++){
        cout<<v[i] <<" ";
    }cout<<endl;


    // 5 6 2 7 8 




}





#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            cnt++;
        }
    }

    if(cnt < 2){
        cout<<"Prime";
    }
    else{
        cout<< "Not Prime" ;
    }
}



v.insert(v.begin() + 3 , 5);
v.erase(unique(v.begin() , v.end()) , v.end());
..