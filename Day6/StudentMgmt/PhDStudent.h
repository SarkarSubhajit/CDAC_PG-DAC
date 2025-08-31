#include "Student.h"

class PhDStudent : public Student
{
    private:
        char* thesis;
        int thmarks;
        static char phddegree[100];
        void calculate();

    public:
        PhDStudent();
        PhDStudent(int id, const char *nm, const char *addr, int m1, int m2, int m3, const char *th, int thm);
        ~PhDStudent();
        void setThesis(const char *th);
        void setThMarks(int thm);
        const char* getThesis();
        int getThMarks();
        void display();
};