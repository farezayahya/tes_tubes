#include "operasiProgram.h"
/**=============================
= Penyusun : Fareza Adityanto  =
= NIM : 1301174228             =
= Kelas : IF 41-08             =
================================*/

/**============================================================================================================================================*/
void tambahKategori(List_child &LC,unsigned int &id_kategori)
{
    /** tambahkan disini */
    infotype_child x;
    address_child a;
    cout<<"===============================Tambah Kategori===================================="<<endl;
    cout<<"= 1. Nama kategori =                                                             ="<<endl;
    cin>>x.kategori;
    cout<<"=================================================================================="<<endl;

    if(LC!=NULL)
    {
        a=findElm(L,x);

        id_kategori=id_kategori+110;
        if(a==NULL&&id_kategori<1000)
        {
            x.id=id_kategori;
            address_child P=alokasi(x);
            InsertAndsort_child(LC,P);
        }
        else
        {
            cout<<"Maaf kategori sudah ada atau sudah penuh"<<endl;
            return;
        }
    }
}

/**===========================================================================================================================================*/
void hapusKategori(List_child &LC, List_relasi &LR)
{
    infotype_child x;
    address_relasi P,Q;
    address_child a,R;
    int n_data=0;
    cout<<"================================Hapus Kategori===================================="<<endl;
    cout<<"= 1. Nama kategori =                                                             ="<<endl;
    cin>>x.kategori;
    cout<<"=================================================================================="<<endl;

    if(LC!=NULL)
    {
        a=findElm(x);
        if(a!=NULL)
        {
            if(LR!=NULL)
            {
                P=first(LR);
                while(P!=NULL)
                {
                    n_data++;
                    P=next(P);
                }
                while(n_data>0)
                {
                    P=first(LR);
                    while(child(P)!=a)
                    {
                        P=next(P);
                    }
                    deleteAfter(P,Q);
                    n_data--;
                }
                deleteAfter(a,R);
                dealokasi(R);
                dealokasi(Q);
            }
        }
    }
}
