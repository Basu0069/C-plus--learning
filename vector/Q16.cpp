Q FIrst tkae no. of value in a vecotr arraya and then put the value taken in float and then you have to sort them in ascending order using buuuble sort algorith m and print the final array okie 


#include<bits/stdc++.h>
using namespace std;

   void bubbleSort(vector<float> &v){
       int n=v.size();
       for(int i=0;i<n;i++){
           
           bool value = false;
           for(int j=0;j<n-1;j++){
               if(v[j]> v[j+1]){
                   swap(v[j],v[j+1]);
                   value = true;
               }
           }
           
           if(value){
               cout<<"After iteration "<< i+1 <<": ";
               for(float num: v){
                   cout<<num <<" ";
               }
               cout<<endl;
           }else{
               break;
           }
       }
       
       
       cout<<" SOrted array: ";
       for(float num: v){
           cout<< num << " ";
       }
       cout<< endl;
       
   }


int main(){
    int n;
    cin>>n;
    vector<float>v;
    
    for(int i=0;i<n;i++){
        float element;
        cin>>element;
        v.push_back(element);
    }
    
    for(int i=0;i<v.size();i++){
        cout<<fixed<<setprecision(2)<<v[i]<<" ";
    }
    cout<<endl;
    
    bubbleSort(v);
    
    return 0;
    
    
    return 0;
}



Input: 
3
39.48 32.39 22.1


OUTPUT: 
39.48 32.39 22.10 
After iteration 1: 32.39 22.10 39.48 
After iteration 2: 22.10 32.39 39.48 
 SOrted array: 22.10 32.39 39.48