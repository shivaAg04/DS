#include<iostream>
using namespace std;
bool prime()
{
    int x;
    cin>>x;
    for(int i=2;i<=(x/2);i++){
      if(x%i==0){
          return false;
         
      }
       
    }
    return true;
}  

int main()
{
    bool i = prime();
    if(i == 0){
        cout<<"no it is not prime no."<<endl;

    }else{
        cout<<"yes  it is   a prime no."<<endl;

    }
    
}    

