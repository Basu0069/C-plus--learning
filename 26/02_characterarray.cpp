//char aur array ke case mei 
arr-> address se implement hoag 
character mie print entire content smka 
Both have dfferent implementation 



#include<iostream>
using namespace std;
int main(){

int arr[5]={1,2,3,4,5};
char ch[6]= "abcde";

cout <<arr <<endl;
cout << ch << endl;

char *c = &ch[0];
// prints entire sting 
cout << c << endl;


char temp = 'z';
char *p = &temp;

cout << p << endl;
return 0;
}

//  here jo character h tera vo tb tk print hoga jab tk usee null character ni ni mil jata 

char ch[6]="abcde";
// ismei kya ho ha h vo dekh 
sbse phele temporary memoryb bn rhi h  6 block ki adcde 
aur ab ek memory ch bn rhi h aur usmei ye copy ho jaaayega okie 

char *c= "abcde";
ismei kya hua 
temporray mememory bni " abcede " 
aur ab jo uska address h na " 723"
ye tera aajayeaga c block ke andar okie as 723 

//  ye bhohot rsky h ye ni krna h kbi bi okie 


