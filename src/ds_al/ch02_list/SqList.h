

#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H

#include <stdio.h>
#include <stdlib.h>						
#include "../ch01_basic_syntax/Status.h"		

#define LIST_INIT_SIZE 100				
#define LISTINCREMENT  10				
/* ˳������Ͷ��� */
#ifndef LELEMTYPE_SQ
#define LELEMTYPE_SQ
typedef int LElemType_Sq;
#endif

typedef struct
{
	LElemType_Sq *elem;					
	int length;							 
	int listsize;						
}SqList;								


Status InitList_Sq(SqList *L);


void ClearList_Sq(SqList *L);


void DestroyList_Sq(SqList *L);

	  
Status ListEmpty_Sq(SqList L);


int ListLength_Sq(SqList L);

Status GetElem_Sq(SqList L, int i, LElemType_Sq *e);


int LocateElem_Sq(SqList L, LElemType_Sq e, Status(Compare)(LElemType_Sq, LElemType_Sq));


Status PriorElem_Sq(SqList L, LElemType_Sq cur_e, LElemType_Sq *pre_e);


Status NextElem_Sq(SqList L, LElemType_Sq cur_e, LElemType_Sq *next_e);


Status ListInsert_Sq(SqList *L, int i, LElemType_Sq e);


Status ListDelete_Sq(SqList *L, int i, LElemType_Sq *e);


Status ListTraverse_Sq(SqList L, void (Visit)(LElemType_Sq)); 

#endif
