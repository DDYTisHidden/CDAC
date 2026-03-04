#include<iostream>
#include<cstring>
using namespace std;
class Student{
 private: 
    int rollNum;
    //string name;
    char name[280];
    // char surname[120]="Mishra";
 public: 
    Student(){
        rollNum=0;
        name=" ";
    }
    Student(int roll,char nm){
        rollNum=roll;
        name=nm;
    }
    int getRollNumber(){
        return rollNum;
    }
    string getName(){
        return name;
    }
    void setRollNumber(int rollNum){
      rollNum=rollNum;
    }
};
void inputStudent(Student stds[],int idx){
    int rollNum;
    char tempName[200];
    cout<<"Enter roll number ";
    cin>>rollNum;
    cout<<"\nEnter student name ";
    cin>>tempName;
    Student std = Student(rollNum,tempName);
    stds[idx]=std;
}
void outputStudents(Student stds[],int strength){
    for(int i = 0 ; i < strength; i ++){
        Student std = stds[i];
        cout<<"Roll Number "<<std.getRollNumber()<<" name is "<<std.getName()<<endl;
    }
}
int main(){
    int strength;
    cout<<"Enter class strength :";
    cin>>strength;
    Student students[strength];
    cout<<"\nEnter "<<strength<<"student details :\n";
    for(int i = 0 ; i < strength ; i ++){   
        inputStudent(students,i);
    }
    cout<<"Class students are "<<endl;
    outputStudents(students,strength);
    return 0;
}