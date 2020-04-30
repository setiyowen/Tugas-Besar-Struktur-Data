#include "kelas.h"

void createList(List_c &L){
    // Nur Ahsar Setiyowen
    // 1301180506
    first(L) = NULL;
}
address_c alokasi(infotype_c x){
    // Nur Ahsar Setiyowen
    // 1301180506
    address_c P = new elm_c;
    info(P) = x;
    next(P) = NULL;
    siswa(P) = NULL;
    return P;
}
void insertFirst(List_c &L, address_c P){
    // Nur Ahsar Setiyowen
    // 1301180506
    next(P) = first(L);
    first(L) = P;
}
void deleteFirst(List_c &L, address_c &P){
    // Nur Ahsar Setiyowen
    // 1301180506
    P = first(L);
    if(P != NULL){
        first(L) = next(P);
        next(P) = NULL;
    }
}
void printinfo(List_c L){
    // Nur Ahsar Setiyowen
    // 1301180506
    address_c P = first(L);
    cout<<"List Kelas:"<<endl;
    while(P != NULL){
        cout<<info(P)<<", ";
        P = next(P);
    }
    cout<<endl<<endl;
}
address_c findElement(List_c L, infotype_c x){
    // Nur Ahsar Setiyowen
    // 1301180506
    address_c P = first(L);
    while(P != NULL){
        if(info(P) == x){
            return P;
        }
        P = next(P);
    }
    return NULL;
}
