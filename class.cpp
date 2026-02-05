#include<bits/stdc++.h>
using namespace std;
class Student{
    int rno;
    string name;
    float marks;
    public:
    Student(){
        rno=0;
        name=" ";
        marks=0.0;
    }
    void input(){
        cout<<"Enter rno,name,marks:\n";
        cin>>rno>>name>>marks;
    }
    void display(){
        cout<<rno<<"\t"<<name<<"\t"<<marks;
    }
    ~Student(){
        cout<<"student object with rno "<<rno<<"is destroyed\n";
    }
};
int main(){
    int n;
    cout<<"enter number of students:";
    cin>>n;
    Student *students=new Student[n];
    for(int i=0;i<n;i++){
        cout<<"enter details of student "<<i+1<<"\n";
        students[i].input();
    }
    cout<<"Rolno\tNmae\tMarks";
    for(int i=0;i<n;i++){
        students[i].display();
    }
    delete[] students;
    return 0;
}