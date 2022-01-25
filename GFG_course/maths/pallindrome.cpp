#include<iostream>
using namespace std;


int main(){
 int original_number;
 int reverse_number;
 int remainder ;
 int qutient;
int NUM =0;


  
 

 cout<<"enter the number "<<endl;
  cin>>original_number;
  reverse_number = original_number ; 

 while(reverse_number>0){
      
     remainder = reverse_number%10;
     reverse_number = reverse_number/10;
     NUM = NUM*10 + remainder;


 }
 if(NUM == original_number){
     cout<<"yes it is pallindrome" ;

     
 }
else{
    cout<<"no not a pallindrome";

}
}