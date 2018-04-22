#include "list_child.h"

/** child = single linked list yang berisi kategori makanan & minuman
    - edited 28/3/2018 : 1. masih sesuai yang aku fork dari pak andit, berupa double linked list.
                         2. Jangan lupa ganti yang di list_child.cpp ke single linked list

    *nB : tambahin log pengeditan yang lain abis lu ngedit
*/

void createList(List_child &L) {
    first(L) = NULL;
}

address_child alokasi(infotype_child x) {
    address_child P = new elmlist_child;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertFirst(List_child &L, address_child P) {
    if(first(L) == NULL) {
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
}

void printInfo(List_child L) {
    address_child P = first(L);
    while(P !=NULL) {
        cout<<"->"<<info(P)<<endl;
        P = next(P);
    }
}


address_child findElm(List_child L, infotype_child x) {
    address_child P = first(L);
    while(P != NULL) {
        if(info(P).kategori==x.kategori) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void insertAfter(address_child Prec, address_child P) {
    next(P) = next(Prec);
    next(Prec) = P;
}

void deleteFirst(List_child &L, address_child &P){
    if(first(L)==NULL){
        return;
    }else if(next(first(L))==NULL){
        P=first(L);
        first(L)=NULL;
    }else{
        P=first(L);
        first(L)=next(P);
        next(P)=NULL;
    }
}

void deleteAfter(address_child Prec,address_child &P){
    List_child L;
    address_child Q;
    if(Prec!=NULL){
        if(Prec==first(L)){
            deleteFirst(L,P);
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
