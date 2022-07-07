#include <iostream>
using namespace std;

int myRand()   
{ 
  static int num = 3669; //Number of our choice, exceptions - 0000, 0100, 2500, 3792, 7600, 0540, 2916, 5030 or 3009
                           
  num = ((num * num)/100)%10000 ; 
  return num; 
} 
 
int myRandRange ( int min, int max )  // max-min must be <10000 
{ 
  return myRand()%(max+1-min) + min ;  
} 


int main(){
    int a,b,num;
    cout<<"Enter starting range: ";
    cin>>a;
    cout<<"Enter ending range: ";
    cin>>b;
    num=myRandRange(a,b);
    cout<<"The Random number generated is "<<num;
}