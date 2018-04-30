#include "exercise8.hpp"
#include "Student.hpp"

#ifndef ROSTER_H
#define ROSTER_H

class Roster {
    private:
        vector<Student> studentList;
    public:
        Roster(const char*);
        inline vector<Student> getStudentList() { return this->studentList;/* Update the studentList vector */ }
        friend ostream& operator<<(ostream&, const Roster&);
};

#endif
