#include "matakuliah.h"

void createCourse(Course &C){
    // Nur Ahsar Setiyowen
    // 1301180506
    firstC(C) = NULL;
    lastC(C) = NULL;
}
adrCo AllocationCr(string name){
    // Nur Ahsar Setiyowen
    // 1301180506
    adrCo P = new elmCourse;
    infoC(P) = name;
    nextC(P) = NULL;
    return P;
}
void insertCourse(Course &M, adrCo P){
    // Nur Ahsar Setiyowen
    // 1301180506
    if(firstC(M) == NULL){
        if(firstC(M) == NULL){
            firstC(M) = P;
            lastC(M) = P;
        } else{
            nextC(P) = firstC(M);
            firstC(M) = P;
        }
    } else{
        nextC(lastC(M)) = P;
        lastC(M) = P;
    }
}
void deleteCourse(string name, Course &C){
    // Nur Ahsar Setiyowen
    // 1301180506
    adrCo P = searchCourse(name, C);
    if(P != NULL){
        if (P == firstC(C)){
            firstC(C) = nextC(P);
        } else {
            adrCo X = firstC(C);
            while (nextC(X) != P){
                X = nextC(X);
            }
            nextC(X) = nextC(P);
        }
        nextC(P)== NULL;
    } else{
        cout<<"Course doessn't exist"<<endl;
    }
}
adrCo searchCourse(string name, Course M){
    // Nur Ahsar Setiyowen
    // 1301180506
    adrCo P = NULL;
    if(firstC(M) != NULL){
        if(infoC(firstC(M)) != name){
            adrCo X = nextC(firstC(M));
            while(X != firstC(M) && P == NULL){
                if(infoC(X) == name){
                    P = X;
                }
                X = nextC(X);
            }
        } else{
            P = firstC(M);
        }
    }
    return P;
}

void printCourse(Course C){
    // Nur Ahsar Setiyowen
    // 1301180506
    adrCo P = firstC(C);
    cout<<"List Daftar kuliah:"<<endl;
    while(P != nextC(lastC(C))){
        cout<<infoC(P)<<endl;
        P = nextC(P);
    }
     cout<<endl<<endl;
}
