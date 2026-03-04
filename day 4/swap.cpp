#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    
    cout<<"Enter x: ";
    int x;
    cin>>x;
    
    cout<<"Enter y:";
    int y;
    cin>>y;
    cout<<"BEFORE SWAP X:  "<<x<<" &"<< y<<"y\n";
swap(x,y);
cout<<"After SWAP: x"<<x<<"& y"<<y;
}