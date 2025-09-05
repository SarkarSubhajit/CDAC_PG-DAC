#ifndef STU
#define STU

class Student
{
    private:
        int id;
        char *name;
        char *addr;
        int m1, m2, m3;
        static int passpercent;

    public:
        Student();
        Student(int id, const char *nm, const char *addr, int m1, int m2, int m3);
        virtual ~Student();
        // setter methods
        void setId(int id);
        void setName(const char *nm);
        void setAddr(const char *addr);
        void setM1(int m1);
        void setM2(int m2);
        void setM3(int m3);
        // getter methods
        int getId();
        const char *getName();
        const char *getAddr();
        int getM1();
        int getM2();
        int getM3();
        static int getPassPercent();
        virtual void display();
};

#endif