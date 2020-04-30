#include "siswa.h"

void createList(List_p &L){
    // Nur Ahsar Setiyowen
    // 1301180506
    first(L) = NULL;
}
address_p alokasi(infotype_p x){
    // Nur Ahsar Setiyowen
    // 1301180506
    address_p P = new elm_p;
    info(P) = x;
    next(P) = NULL;
    return P;
}
void insertFirst(List_p &L, address_p P){
    // Nur Ahsar Setiyowen
    // 1301180506
    next(P) = first(L);
    first(L) = P;
}
void deleteFirst(List_p &L, address_p &P){
    // Nur Ahsar Setiyowen
    // 1301180506
    P = first(L);
    if(P != NULL){
        first(L) = next(P);
        next(P) = NULL;
    }
}
void printinfo(List_p L){
    // Nur Ahsar Setiyowen
    // 1301180506
    address_p P = first(L);
    cout<<"Nama Siswa:"<<endl;
    while(P != NULL){
        cout<<info(P)<<",";
        P = next(P);
    }
    cout<<endl<<endl;
}
address_p findElement(List_p L, infotype_p x){
    // Nur Ahsar Setiyowen
    // 1301180506
    address_p P = first(L);
    while(P != NULL){
        if(info(P) == x){
            return P;
        }
        P = next(P);
    }
    return NULL;
}
