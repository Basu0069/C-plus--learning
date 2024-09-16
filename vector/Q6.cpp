Q6 You hv given first total no. of cases and then take total total number of elements and then elements and then takes all cases and u hv to merge the array ok 


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int>v;
    
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        
        for(int j=0;j<m;j++){
            int element;
            cin>>element;
            v.push_back(element);
        }
    }
    
    cout<<"Merged array: ";
    for(int ele: v){
        cout<< ele<<" ";
    }
    cout<<endl;
    
    
    return 0;
    
  
}



inputs: 
3
4
1 2 3 4 
3
-5 -6 7
2
8 -9




// Other method of this question 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;  // Number of arrays
    cin >> N;
    
    vector<int> mergedArray;  // To store the merged array
    
    // Loop through each array
    for (int i = 0; i < N; ++i) {
        int M;  // Size of the current array
        cin >> M;
        
        vector<int> currentArray(M);  // Store elements of the current array
        
        // Input the elements of the current array
        for (int j = 0; j < M; ++j) {
            cin >> currentArray[j];
        }
        
        // Append current array to the merged array
        mergedArray.insert(mergedArray.end(), currentArray.begin(), currentArray.end());
    }
    
    // Output the merged array
    cout << "Merged array: ";
    for (int element : mergedArray) {
        cout << element << " ";
    }
    cout << endl;
    
    return 0;
}


 vector.insert(position, value);

vector.insert(position, first, last);

// Push_back and insert difference 
push_back tera ek hi element ko push krta h 
insert tera puri row ko bi ya middle element ko change kr deta h okie 
