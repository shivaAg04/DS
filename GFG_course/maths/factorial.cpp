#include<iostream>
using namespace std;

int fact(int x){
   if (x==1 || x==0){
       return 1;
   }else{
       return x*fact(x-1);

   }
}


int main(){
  
cout<<fact(4)<<"   ";



}