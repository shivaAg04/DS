#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n, x,y;
	cin>>n;
	cin>>x;
	cin>>y;
	int A[n];
    int count =0;
	for(int i =0;i<n;i++){
	    cin>>A[i];
	    if(A[i]<=x && A[i]/y==0){
            count++;
        }
	}
 cout<<count;
	
	
	return 0;
}
