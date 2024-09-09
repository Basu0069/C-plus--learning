0,1,2,3,4,5,6
10,1,7,4,8,2,11


1,10,7,4,8,2,11
ab 7<10 h toh 
7>1 h 

1,7,10,4,8,2,11

now 4<10 left 

1,4,7,10,8,2,11 

now 
1,2,4,7,8,10,11


https://www.naukri.com/code360/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2


void insertionSort(int n, vector<int> &arr){

    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0;j--){

            if(arr[j]> temp){
                // shift
                arr[j+1] = arr[j];
            }
            else{
                // ruk jao 
                break;
            }
        }
        arr[j+1] = temp;
    }
}