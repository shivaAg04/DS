#include<iostream>
using namespace std;
int main(){
int num1,num2;
cout<<"enter the num 1 :"<<endl;
cin>>num1;
cout<<"enter the srcond no:"<<endl;
cin>>num2;
int count =0;

int MIN = min(num1,num2);
 while(count==0){
if(num1 % MIN ==0 && num2 %MIN ==0){
    cout<<"gcd is "<<MIN;
    count =1;
}else{
    MIN = MIN-1;
    if(num1 % MIN ==0 && num2 %MIN ==0){
    cout<<"gcd is "<<MIN<<endl;
    count =1;
}
}

}
return 0;
}
