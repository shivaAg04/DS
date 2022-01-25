#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter the number "<<endl;
cin>>num;
int remainder = 0;
int count = 0;

while(remainder == 0){
    remainder = num %10;
     count++;

}
cout<<"the no. of trailing zeros is "<<count;

return 0;
}