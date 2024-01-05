#include<iostream>
#include<cctype>
using namespace std;

int main() {
	// Write your code here
	   for(int i=1;i<=A.size();i++){
        if(A[i]<A[i+1]&& A[i+1]!=A.size()){
            max = A[i+1];
        }
        cout<< max ;
       }
}