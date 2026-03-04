#include <iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
void outputFactSeries(int n){
    for(int i=1;i<n;i++){
        cout<<"factorial of  "<<i<<":"<<factorial(i)<<endl;
    }
}
int main(){
    cout<<"Enter num: ";
    int n;
    cin>>n;
    outputFactSeries(n);
    factorial(n);
}