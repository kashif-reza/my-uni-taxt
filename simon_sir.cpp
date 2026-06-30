#include<iostream>
#include<string>
using namespace std;
class student {
    public:
string name;
int id ;
string course;
string section;
void takestudentdetails()
{
cout<<"enter student name";
getline(cin ,name);
cout<<"enter student Id";
cin>>id;
cin.ignore();
cout<<"enter student course name";
getline(cin ,course);
cout<<"enter student section name";
getline(cin ,section);

}
void showstudentdetails() {
        cout << " Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Course: " << course << endl;
        cout << "Section: " << section << endl;
    }
};
int  main(){
    student c1;
    c1.takestudentdetails();
    c1.showstudentdetails();
    return 0;
}
