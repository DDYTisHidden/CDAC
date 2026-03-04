#include<iostream>
#include<cstring>
using namespace std;
void reverseString(char name[500],int i){
    if(i < 0){
        return ;
    }
    cout<<name[i];
    i=i-1;
    reverseString(name,i);
}
int main(){
    char name[500];
    cout<<"Enter a string value to reverse : ";
    cin>>name;
    reverseString(name,strlen(name)-1);
    return 0;
}