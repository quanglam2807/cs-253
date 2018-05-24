#include "exercise8.hpp"

#ifndef COLLEGE_H
#define COLLEGE_H

class College {
    private:
        string name;
        int rank;
        inline void setRank(int rank) { this->rank = rank;/* Update rank value */ }
    public:
        College(string, int);
        friend ostream& operator<<(ostream&, const College&);
        friend void changeCollegeRank(College&, int);
};

#endif
