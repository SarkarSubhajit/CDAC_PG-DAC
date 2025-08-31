/*
Write a program to maintain student information. For each student
 store studid, name, m1, m2 and m3 
 (marks of 3 subjects, use array of int to store marks ).
 Accept information for 2 students and display it as follows.

Student Details:
____________
Student Id-->11
Name: Divya
M1 :    78
M2:     86
M3:     89
*/

#include <iostream>
#include <cstring>
using namespace std;

class Person {
	int studid;
	char name[100];
	int m1, m2, m3;
	
	public:
	
		Person() {
			studid = 0;
			name[0] = '\0';
			m1 = 0;
			m2 = 0;
			m3 = 0;
		}
		
		Person(int id,const char* nm, int m1, int m2, int m3) {
			studid = id;
			strcpy(name, nm);
			this->m1 = m1;
			this->m2 = m2;
			this->m3 = m3;
		}
		
		// setters
		void setStudId(int id) {
			this->studid = id;
		}
		void setName(const char* nm) {
			strcpy(name, nm);
		}
		void setM1(int m1) {
			this->m1 = m1;
		}
		void setM2(int m2) {
			this->m2 = m2;
		}
		void setM3(int m3) {
			this->m3 = m3;
		}
		// getters
		int getStudId() const {
			return this->studid;
		}
		const char* getName() const {
			return this->name;
		}
		int getM1() const {
			return this->m1;
		}
		int getM2() const {
			return this->m2;
		}
		int getM3() const {
			return this->m3;
		}
		
		void calculateGPA() {
			double gpa = ((double)m1/3)+((double)m2/2)+((double)m3/4);
			cout << "GPA of " << name << " is " << gpa << endl;
		}
		
		void display() {
			cout << "Student ID : " << studid << endl;
			cout << "Name : " << name << endl;
			cout << "M1 : " << this->m1 << endl;
			cout << "M2 : " << this->m2 << endl;
			cout << "M3 : " << this->m3 << endl;
			cout << "-----------------------------------" << endl;
		}
};