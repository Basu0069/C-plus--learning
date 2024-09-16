Find the last occurence of an element x in a given array.

1,2,3,2,1,3,1
x=1;
last occurence of 1 is 6 


#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;


    int occurence=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         occurence=i;
    //     }
    // }

    // second method 
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            occurence=i;
            break; 
        }
    }

    cout<<occurence<<endl;

    return 0;
}






Q2 COunt the number occurence of a particular element x 

 #include<bits/stdc++.h>
 using namespace std;

 int main(){

    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout <<"Enter x: ";
    int x;
    cin>>x;

    int occurences=0;
    
    // ab yah pe for each loop try krte h oki 

    for(int ele:v){
        if(ele==x){
            occurences++;
        }
    }
    cout<<occurences<<endl;

    return 0;
 }

 Q3 Count the number of elements stricly greater than value x 

 #include<bits/stdc++.h>
 using namespace std;

 int main(){

    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"Enter x:";
    int x;
    cin>>x;

    int count =0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }

    }
    cout<<count<<endl;


    return 0;
 }



 Q Find the differeence between the sum of elements at even indices to the sum of elemenets at odd indices;


 #include
