Q1 1 2 3 4
   1 2 3 4 
   1 2 3 4

//  IMP baat agr ulta start krna h toh remember
//  n-j+1

#include <iostream>
    using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j; // agr tu idr kr de n-j+1   toh fir sara ka sar code ulta aayega reverse mei jaise 654321 is order mei okie.
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}



// NOw u hv to print this see

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i =1;
    int count =1;
    while(i<=n){

        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count= count +1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}





// QUestion traingle pattern 
*
**
***
****



