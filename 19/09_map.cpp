// Ismei hamara data key value ki form mei store hota h okie dekh neeche 
// all keys are unique and point to one value only 

#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;

    m[1]="babbar";
    m[13]="kumar";
    m[2]="love";

    m.insert( {5,"bheem"});

    cout<<"before erase"<<endl;
    for(auto i :m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //  ye oorder mei hi rehte h map okie 
    cout<<"finding - 13-> "<<m.count(-13)<<endl;

    // m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

    auto it = m.find(5);

    for(auto i = it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}