#ifndef KELAS_H_INCLUDED
#define KELAS_H_INCLUDED

#include <iostream>
#include "siswa.h"
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define siswa(P) P->siswa

typedef int infotype_c;
typedef struct elm_c *address_c;

struct elm_c{
    infotype_c info;
    address_c next;
    address_p siswa;
};

struct List_c{
    address_c first;
};

void createList(List_c &L);
address_c alokasi(infotype_c x);
void insertFirst(List_c &L, address_c P);
void deleteFirst(List_c &L, address_c &P);
void printinfo(List_c L);
address_c findElement(List_c L, infotype_c x);


#endif // KELAS_H_INCLUDED
