#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 1){

    for(int i = start;i<n;i++){
        cout<< arr[i]<<endl;

    }
}

int main(){
    int arr[5]={1,4,7,8,9};
    int size = 5;

    print(arr,size);
    cout << endl;
    print(arr,size,2);

    return 0;
}

// default argument mei right se start hota h mind it