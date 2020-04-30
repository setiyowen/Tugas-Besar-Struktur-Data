#ifndef MATAKULIAH_H_INCLUDED
#define MATAKULIAH_H_INCLUDED

#include <iostream>
#define firstC(C) C.firstC
#define lastC(C) C.lastC
#define nextC(P) P->nextC
#define infoC(P) P->infoC

using namespace std;

typedef struct elmCourse *adrCo;
typedef string infotype;

struct elmCourse {
    infotype infoC;
    adrCo nextC;
    adrCo siswa;
};
struct Course {
    adrCo firstC;
    adrCo lastC;
};

void createCourse(Course &C);
adrCo AllocationCr(string name);
void insertCourse(Course &C, adrCo P);
adrCo searchCourse(string name, Course C);
void printCourse(Course C);
void deleteCourse(string name, Course &C);



#endif // MATAKULIAH_H_INCLUDED
