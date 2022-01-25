#include<iostream>
using namespace std;

 


int main(){
  
int x;
cout<<"enter the number "<<endl;
cin>>x;

int count =0;
while(x>0){
    x = x/10;
    count++;

}
cout<<"number is "<<count<<endl;




}