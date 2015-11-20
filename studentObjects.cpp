// Lab 12
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
#include <string>
using namespace std;

static int numStudentsMade = 0;
static int numStudentsShow = 0;

struct Student{
	string name;
	string address, city, state, zip, gender, studentID, GPA;
};

Student makeStudent(Student s){
	numStudentsMade++;
	cout << "Enter for Student " << numStudentsMade << endl;
	cout << " name: ";
	getline(cin,s.name);
    cout << " address: ";
    getline(cin,s.address);
    cout << " city: ";
    getline(cin,s.city);
    cout << " state: ";
    getline(cin,s.state);
    cout << " zip: ";
    getline(cin,s.zip);
    cout << " gender: ";
    getline(cin,s.gender);
    cout << " student id: ";
    getline(cin,s.studentID);
    cout << " GPA: ";
    getline(cin,s.GPA);
    cout << endl;
    return s;
}

void showStudent(Student s){
	numStudentsShow++;
	cout << "Output for Student " << numStudentsShow << endl;
	cout << " name: " << s.name << endl;
    cout << " address: " << s.address << endl;
    cout << " city: " << s.city << endl;
    cout << " state: " << s.state << endl;
    cout << " zip: " << s.zip << endl;
    cout << " gender: " << s.gender << endl;
    cout << " student id: " << s.studentID << endl;
    cout << " GPA: " << s.GPA << endl;
    cout << endl;
}

int main(){
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program prompts for and returns the values of three students." << endl;
	cout << endl;
	Student students[3];
	students[0]=makeStudent(students[0]);
	students[1]=makeStudent(students[1]);
	students[2]=makeStudent(students[2]);
	showStudent(students[0]);
	showStudent(students[1]);
	showStudent(students[2]);
}

