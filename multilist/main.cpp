#include <iostream>
#include "siswa.h"
#include "matakuliah.h"
#include "kelas.h"



using namespace std;

List_p siswa;
Course matakuliah;
List_c kelas;

int main()
{
    address_p P;
    address_c C;
    adrCo M;

    createList(siswa);
    insertFirst(siswa, alokasi("hanna"));
    insertFirst(siswa, alokasi("putri"));
    insertFirst(siswa, alokasi("faza"));
    insertFirst(siswa, alokasi("aldi"));
    insertFirst(siswa, alokasi("agung"));
    printinfo(siswa);

    createCourse(matakuliah);
    insertCourse(matakuliah, AllocationCr("DAP"));
    insertCourse(matakuliah, AllocationCr("STRUKTUR DATA"));
    insertCourse(matakuliah, AllocationCr("PEMODELAN BASIS DATA"));
    insertCourse(matakuliah, AllocationCr("MATRIKS DAN VEKTOR"));
    insertCourse(matakuliah, AllocationCr("PEMODELAN BEORIENTASI OBJEK"));
    insertCourse(matakuliah, AllocationCr("SISTEM DIGITAL"));
    printCourse(matakuliah);

    createList(kelas);
    insertFirst(kelas, alokasi(3));
    insertFirst(kelas, alokasi(6));
    insertFirst(kelas, alokasi(1));
    insertFirst(kelas, alokasi(5));
    insertFirst(kelas, alokasi(7));
    printinfo(kelas);



}
