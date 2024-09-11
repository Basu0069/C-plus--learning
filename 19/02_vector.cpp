// mostly used vector kyunki sika size bda ya kam kr sakte h aap apne se 
//  capacity ka mtlb hota h total kitni memory isko allocate ki h okie kitna space h ismei ok
// size tera btata h ki kitna element pda h ismei okie 

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    vector<int> a(5,1);
    //  iska mtlb h ki size h 5 aur sb elements h 1 okie 

    // ab ek last vector create kiya h jiske andar a ke elements aajayega okie. 
    vector<int> last(a);

    cout<<"print last " <<endl;
    for(int i:last){
        cout<<i<<" ";
    }

    cout<<"print a " <<endl;
    for(int i:a){
        cout<<i<<" ";
    }

    cout <<"Capacity->"<<v.capacity()<<endl;

    v.push_back(1);
    cout <<"Capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout <<"Capacity->"<<v.capacity()<<endl;

    v.push_back(3);
    cout <<"Capacity->"<<v.capacity()<<endl;
    cout<<"Size "<<v.size()<<endl;

    cout<<"Element at 2nd index"<<v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    // pop tera element nikal deta h okie 

    cout<<"before pop" <<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop" <<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;

}

