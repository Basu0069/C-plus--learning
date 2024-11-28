// sei tha question QUEStion 4 krna h okay 


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
int sum;


    vector<int>v;

    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
        push_heap(v.begin(),v.end());
    }


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
cout<<endl;

int maxi=*max_element(v.begin(),v.end());
cout<<"deleted largest element: "<<maxi<<endl;

pop_heap(v.begin(),v.end());
v.pop_back();

// cout << "Max-Heap after removal: ";
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

int product=1;
for(int i=0;i<v.size();i++){
    product=product*v[i];
}


cout<<"product of remaining elements:"<<product<<endl;

}