#include <iostream>
using namespace std;
void inputArr(int n,int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
}
void printArr(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
cout<<"Enter size: ";
int n;
cin>>n;
int arr[n];
cout<<"Enter elements: \n";
inputArr(n,arr);
cout<<"Your elements are: \n";
printArr(n,arr);

}