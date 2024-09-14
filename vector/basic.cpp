vector<int> v;

v.size()= gives size 
v.resize(newsize);
v.resize(8);
 
other operator 
v.pushback(element);
v.insert(postion,element);

v.begin()
v.end()

2,3,4 
ab tereko 2 nd index pe add krna h element then hwo?
v.insert(v.begin()+2,5);
ab bna gya 
2,3,5,4 


// delete element 
v.pop_back();

v.erase(postion) in order to remeove specific element 

eg- 
2,3,4,5
v.erase(v.end()-2);
2,3,5 



v.clear()- all clear elements 

code:



#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;

    cout <<"Size: "<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.resize(5);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
}



// looping 
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
        // ye tb h jab tune define hi ni kiya h vector ka size okie 


        // if u define vector ka size then 
        // v[5];
        // for(int i=0;i<5;i++){
        //     cin>>v[i];

        // }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,6);


    // for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;


    v.erase(v.end()-2);

    // while loop 
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
    return 0;
    
}