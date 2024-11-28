#include<iostream>
using namespace std;

int main(){
    
    int size, nfk;
    
    cin>>size>>nfk;
    
    int hashTable[size];
    
    for(int i=0;i<size;i++){
        hashTable[i]= -1;
        
    }
    
    
    int key;
    for(int i=0;i<nfk;i++){
        cin>>key;
        int index;
        index= key%size;
        
        while(hashTable[index]!= -1){
            index=(index+1)%size;
        }
        
        hashTable[index]= key;
    cout<<index<<"-"<<hashTable[index]<<endl;
    
    }
    
    return 0;
    
}
value 

INput:1

6 
5
15 30 9 21 12

ouptput:
3 0 4 5 1 






Input 2 :
10
5
123 456 789 321 654
Output 2 :
3 6 9 1 4 