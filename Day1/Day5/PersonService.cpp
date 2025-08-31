#include <iostream>
#include "Person.cpp"
using namespace std;

class PersonService {
    static Person Student[100];
    static int count;

    public:
    static Person acceptData()
    {
        int id, m1, m2, m3;
        char name[100];
        cout << "Enter ID : ";
        cin >> id;
        cin.ignore();
        cout << "Enter name : ";
        cin.getline(name, 100);
        cout << "Enter M1 : ";
        cin >> m1;
        cout << "Enter M2 : ";
        cin >> m2;
        cout << "Enter M3 : ";
        cin >> m3;
        cout << "-----------------------------------" << endl;
        return Person(id, name, m1, m2, m3);
    }

    static void addPerson(Person &p){
        if(count<100){
            Student[count]=p;
            cout<<"Person added at "<<count<< " position";
            count++;
        }
        else{
            cout<<"List is full";
        }
    }

    static void displayAll() {
        if (count == 0) {
            cout << "No students found!" << endl;
            return;
        }
        cout << "Student List:" << endl;
        for (int i = 0; i < count; i++) {
            Student[i].display();
        }
    }

    static void searchByName(const char* name) {
        bool found = false;
        for (int i = 0; i < count; i++) {
            if (strcmp(Student[i].getName(), name) == 0) {
                Student[i].display();
                found = true;
            }
        }
        if (!found) cout << "No student found with name " << name << endl;
    }

    static void sortById() {
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; j < count - i - 1; j++) {
                if (Student[j].getStudId() > Student[j + 1].getStudId()) {
                    swap(Student[j], Student[j + 1]);
                }
            }
        }
        cout << "Sorted by ID successfully!" << endl;
    }

    static void sortByName() {
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; j < count - i - 1; j++) {
                if (strcmp(Student[j].getName(), Student[j + 1].getName()) > 0) {
                    Person temp = Student[j];
                    Student[j] = Student[j + 1];
                    Student[j + 1] = temp;
                }
            }
        }
        cout << "Sorted by Name successfully!" << endl;
    }

    static void sortByM1() {
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; j < count - i - 1; j++) {
                if (Student[j].getM1() > Student[j + 1].getM1()) {
                    Person temp = Student[j];
                    Student[j] = Student[j + 1];
                    Student[j + 1] = temp;
                }
            }
        }
        cout << "Sorted by M1 Marks successfully!" << endl;
    }

    static void showGPA() {
        for (int i = 0; i < count; i++) {
            Student[i].calculateGPA();
        }
    }

    static Person* searchById(int id){
        for(int i=0;i<count;i++){
            if(Student[i].getStudId()==id){
                return &Student[i];
            }
        }
        return nullptr;
    }
};