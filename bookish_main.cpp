#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class Student{
string studentName;
string studentID;
    public:
        Student(string name,string id){
            studentName=name;
            studentID=id;
        }
        void getstudentData(){
            cout<<"Enter student name:";
            cin>>studentName;
            cout<<"Enter student ID:";
            cin>>studentID;
        }
};
class Book{
string bookName;
string bookID;

bool issued;
string studentID;
string issuedtostudentID;
    public:
    Book(string id,string name){
        bookID=id;
        bookName=name;
        issued=false;
        studentID=-1;
    }
    void issueBook(string id){
    if(issued==false){
        issued=true;
        issuedtostudentID=id;
        cout<<"Book issued successfully."<<endl;
    }
    else
    cout<<"Book is already issued to "<<issuedtostudentID;
    }
};
int main() {
Book b1("B101","CProg"),b2("B102","C++Prog"),b3("B103","Python"),b4("B104","Java");
Student s1("A","S001"),s2("B","S002"),s3("C","S003"),s4("D","S004");
b1.issueBook("S001");
b2.issueBook("S002");
b3.issueBook("S003");
b1.issueBook("S004");
}