#include<iostream>
#include<deque>

using namespace std;
int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // for(int i: d){
    //     cout <<i<<" ";
    // }
    // d.pop_front();
    cout<<endl;
    // for(int i: d){
    //     cout<<i<<" ";
    // }

    cout <<"Print First Index ELement->"<<d.at(1)<<endl;

    cout<<"front "<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;
     
    cout<<"Empty or not"<<d.empty()<<endl;


// if u want to delete the element 
    cout<<"before erase"<< d.size()<<endl;
    // erase mei aapko starting deni h aur endig deni h okei 
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase" <<d.size()<<endl;
    
    for(int i: d){
        cout<<i<<" ";
    }

}