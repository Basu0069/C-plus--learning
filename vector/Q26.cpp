press 1 to append left 
2 to append right 
3 to print 
4 to exit 


INPUT:
1 10
1 20 
1 30
2 35
3
4
 
 OUTPUT:
 Linked List:
30 20 10 35


code:

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> v;
    int choice,n;
    
    while(true){
        cin>>choice;
        
        if(choice==1){
            cin>>n;
            v.insert(v.begin(),n);
        }
        else if(choice==2){
            cin>>n;
            v.push_back(n);
        }
        else if(choice==3){
            cout<<"Linked List:"<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(choice==4){
            break;
        }
        else{
            cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}