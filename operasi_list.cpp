#include "operasi_list.h"

void InsertAndsort_parent(List_parent &L, address_parent P){
    if(first(L)==NULL){
        insertFirst(L,P);
    }else{
        if(next(first(L))==first(L)){
            address_parent Q=first(L);
            if(info(P).id<info(Q).id){
                insertFirst(L,P);
            }else{
                insertLast(L,P);
            }
        }else{
            address_parent Q=first(L);
            while((info(P).id<info(Q).id)&&(Q!=last(L))){
                Q=next(Q);
            }insertAfter(L,prev(Q),P);
        }
    }
}

void InsertAndsort_relasi(List_relasi &L, address_relasi P){

}

void InsertAndsort_child(List_child &LC,address_child P){
    if(first(LC)==NULL){
        insertFirst(LC,P);
    }else{
        if(next(first(LC))==NULL){
            address_child Q=first(LC);
            if(info(P).id<info(Q).id){
                insertFirst(LC,P);
            }else{
                insertAfter(first(L),P);
            }
        }else{
            address_child Q=first(LC);
            while((info(P).id<info(next(Q)).id)&&(next(Q)!=NULL)){
                Q=next(Q);
            }insertAfter(Q,P);
        }
    }
}
