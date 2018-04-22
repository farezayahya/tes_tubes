#include "list_relasi.h"

/** relasi = single linked list yang berisi hubungan parent-child
    - edited 28/3/2018 : 1. masih sesuai yang aku fork dari pak andit, berupa single linked list.

    *nB : tambahin log pengeditan yang lain abis lu ngedit
*/

void createList(List_relasi &L) {
    first(L) = NULL;
}

address_relasi alokasi(address_parent P, address_child C) {
    address_relasi Q = new elmlist_relasi;
    child(Q) = C;
    parent(Q) = P;
    next(Q) = NULL;
    return Q;
}

void insertFirst(List_relasi &L, address_relasi P) {
    next(P) = first(L);
    first(L) = P;
}

void printInfo(List_relasi L) {
    address_relasi P = first(L);
    while(P !=NULL) {
        cout<<info(parent(P))<<"->"<<info(child(P))<<endl;
        P = next(P);
    }
}


address_relasi findElm(List_relasi L, address_parent P, address_child C) {
    address_relasi Q = first(L);
    while(Q != NULL) {
        if(parent(Q)==P && child(Q)== C) {
            return Q;
        }
        Q = next(Q);
    }
    return NULL;
}

address_relasi findElm_child(List_relasi L, address_child C) {
    address_relasi Q = first(L);
    while(Q != NULL) {
        if(child(Q)== C) {
            return Q;
        }
        Q = next(Q);
    }
    return NULL;
}

/** Yahya bikin findelm_byParent */

void insertAfter(address_relasi Prec, address_relasi &P) {
    next(P) = next(Prec);
    next(Prec) = P;
}

void deleteAfter(address_relasi Prec,address_relasi &P){
    List_relasi L;
    address_relasi Q;
    if(Prec!=NULL){
        if(Prec==first(L)){
            deleteFirst(LR,P);
        }else if(next(Prec)==NULL){
            Q=first(L);
            while(next(Q)!=Prec){
                Q=next(Q);
            }P=Prec;
            next(Q)=NULL;
        }else{
            Q=first(L);
            while(next(Q)!=Prec){
                Q=next(Q);
            }P=Prec;
            next(Q)=next(P);
            next(P)=NULL;
        }
    }
}
