#include "Student.h"

class MScStudent : public Student
{
    private:
        int spmarks;
        int lnmarks;
        static char mscdegree[100];
        void calculate();

    public:
        MScStudent();
        MScStudent(int id, const char *nm, const char *addr, int m1, int m2, int m3, int spmarks, int lnmarks);
        ~MScStudent();
        void setSpMarks(int spmarks);
        void setLnMarks(int lnmarks);
        int getSpMarks();
        int getLnMarks();
        void display();
};