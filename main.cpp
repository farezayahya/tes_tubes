#include <conio.h>
#include "operasiProgram.h"

using namespace std;

unsigned int id_kategori=0;
infotype_parent x.id=0;
void mainmenu();

int main()
{
    List_child LC;
    List_parent LP;
    List_relasi LR;
    createList(LC);
    createList(LP);
    createList(LR);
    mainmenu();
}

void mainmenu()
{
    char pilih;

    do
    {
        cout<<"=====================MainMenu==========================="<<endl;
        cout<<"=  1. Tambah barang                                    ="<<endl; //sudah
        cout<<"=  2. Tambah kategori                                  ="<<endl; //sudah
        cout<<"=  3. Barang keluar                                    ="<<endl; //sudah
        cout<<"=  4. Cari barang by name                              ="<<endl;
        cout<<"=  5. Cari barang by id                                ="<<endl;
        cout<<"=  6. Lihat barang dengan stok <10                     ="<<endl;
        cout<<"=  7. Lihat barang sesuai kategori                     ="<<endl;
        cout<<"=  8. Hapus barang                                     ="<<endl; //sudah
        cout<<"=  9. Hapus kategori                                   ="<<endl; //sudah
        cout<<"=  0. Keluar                                           ="<<endl; //sudah
        cout<<"========================================================"<<endl;
        cout<<" Pilihan (ketik angka saja): "<<endl;
        cin>>pilih;

        switch(pilih)
        {
        case '1' :
        {

        }

        case '2' :
        {

        }

        case '3' :
        {

        }

        case '4' :
        {

        }

        case '5' :
        {

        }

        case '6' :
        {

        }

        case '7' :
        {

        }

        case '8' :
        {

        }

        case '9' :
        {

        }
        default :
        {

        }
        }
    }
    while(pilih!='0');
}
