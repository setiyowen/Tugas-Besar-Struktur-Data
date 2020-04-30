#ifndef SISWA_H_INCLUDED
#define SISWA_H_INCLUDED
#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef string infotype_p;
typedef struct elm_p *address_p;

struct elm_p{
    infotype_p info;
    address_p next;
};

struct List_p{
    address_p first;
};

void createList(List_p &L);
address_p alokasi(infotype_p x);
void insertFirst(List_p &L, address_p P);
void deleteFirst(List_p &L, address_p &P);
void printinfo(List_p L);
address_p findElement(List_p L, infotype_p x);

#endif // SISWA_H_INCLUDED
