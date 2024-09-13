int n;
cin>>n;
int arr[n];

// this is bad practice 
// kyunii hame runtime pta chla ga baad mie 
// hame compile time pta hona chaiye 

// run time mei mat dalana okie 

program start -> memory - > stack and heap 


// ye jo upr h na ye tera stack h okie 
now in heap we will use new keyboard okie 
heap memory bdi hoti h 
stack vali static memory 
heap vali dynamic memory 


// char *ch= new char;
ismei aise likhte h 
what is happening here see down there:

ek stack bna h tera jismei ch h aur uski value 710 h teri 
aur fir ek bid heap memory bnayi h uska address 710 h tera okie 


#include<iostream>
using namespace std;

int main(){

    char ch = 'q';
    cout<< sizeof(ch)<<endl;

    char*c = &ch;
    cout << sizeof(c) <<endl;

    return 0;
}

int * arr = new int[5];
ismei int * arr = 8 size ka h - stack h ye 
aur new int tera 5*4 = 20 size ka heap h 



#include<iostream>
using namespace std;

int getSum(int *arr,int n){

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int n;
    cin>>n;

    // variable size array 
    int* arr = new int[n];

    // taking inputs in array 
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int ans = getSum(arr,n);

    cout<< "answer is "<< ans << endl;

    // case1 
    while(true){
        int i = 5;
    }
    // case 2 
     while(true){
        int* ptr = new int;
     }

    return 0;
}






static   & Dyanamic 


int arr[50]                    int *arr = new int[50]
= 50*4= 200 Byte                 = 8byte stack + 50*4 =200 
stack                               = 208 heap 



// u hv to delete the array too in dynamic casse 
int*  arr = new int[50]
delete[]arr;
