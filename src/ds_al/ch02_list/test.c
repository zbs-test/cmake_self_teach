

#include <stdio.h>
#include "SqList.c" 								

Status CmpGreater(LElemType_Sq e, LElemType_Sq data);
	
	
void PrintElem(LElemType_Sq e);
	

int main(int argc, char **argv)
{
	SqList L;
	int i;
	LElemType_Sq e;

	printf("��1\n������ InitList_Sq ����...\n");		
	{
		printf("��ʼ��˳���? L ...\n");					 
		InitList_Sq(&L);
		printf("\n");	
	}
	PressEnter;
	
	printf("��4\n������ ListEmpty_Sq ����...\n");		
	{
		ListEmpty_Sq(L) ? printf(" L Ϊ�գ���\n") : printf(" L ��Ϊ�գ�\n");
		printf("\n");	
	}
	PressEnter;
		
	printf("��10\n������ ListInsert_Sq ����...\n");		
	{
		for(i=1; i<=6; i++)									
		{
			printf("��Ϊʾ������ L �� %d ��λ�ò��� \"%d\"...\n", i, 2*i);
			ListInsert_Sq(&L, i, 2*i);
		}
		printf("\n");	
	}
	PressEnter;
			
	printf("��12\n������ ListTraverse_Sq ����...\n");	
	{
		printf(" L �е�Ԫ��Ϊ��L = ");						 
		ListTraverse_Sq(L, PrintElem);
		printf("\n\n");	
	}
	PressEnter;
		
	printf("��5\n������ ListLength_Sq ����...\n");		//5.����ListLength_Sq����
	{
		i = ListLength_Sq(L);
		printf(" L �ĳ���Ϊ %d \n", i);
		printf("\n");	
	}
	PressEnter;
			
	printf("��11\n������ ListDelete_Sq ����...\n");		//11.����ListDelete_Sq����
	{
		ListDelete_Sq(&L, 6, &e);
		printf("ɾ�� L �е� 6 ��Ԫ�� \"%d\" ...\n", e);
		printf(" L �е�Ԫ��Ϊ��L = ");						 
		ListTraverse_Sq(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;
		
	printf("��6\n������ GetElem_Sq ����...\n");			//6.����GetElem_Sq����
	{
		GetElem_Sq(L, 4, &e);
		printf(" L �е� 4 ��λ�õ�Ԫ��Ϊ \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;
		
		
	printf("��7\n������ LocateElem_Sq ����...\n");	  	//7.����LocateElem_Sq����
	{
		i = LocateElem_Sq(L, 7, CmpGreater);
		printf(" L �е�һ��Ԫ��ֵ���� \"7\" ��Ԫ�ص�λ��Ϊ %d \n", i); 
		printf("\n");
	}
	PressEnter;
		
	printf("��8\n������ PriorElem_Sq ����...\n");		//8.����PriorElem_Sq����
	{
		PriorElem_Sq(L, 6, &e);
		printf("Ԫ�� \"6\" ��ǰ��Ϊ \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;
		
	printf("��9\n������ NextElem_Sq ����...\n");		//9.����NextElem_Sq����
	{
		NextElem_Sq(L, 6, &e);
		printf("Ԫ�� \"6\" �ĺ���? \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;
		
	printf("��2\n������ ClearList_Sq ����...\n");		//2.����ClearList_Sq����
	{
		printf("���? L ǰ��");
		ListEmpty_Sq(L) ? printf(" L Ϊ�գ���\n") : printf(" L ��Ϊ�գ�\n");		
		ClearList_Sq(&L);
		printf("���? L ��");
		ListEmpty_Sq(L) ? printf(" L Ϊ�գ���\n") : printf(" L ��Ϊ�գ�\n");
		printf("\n");
	}
	PressEnter;
		
	printf("��3\n������ DestroyList_Sq ����...\n");		//3.����DestroyList_Sq����
	{
		printf("���� L ǰ��");
		L.elem ? printf(" L ���ڣ�\n") : printf(" L �����ڣ���\n");
		DestroyList_Sq(&L);
		printf("���� L ��");
		L.elem ? printf(" L ���ڣ�\n") : printf(" L �����ڣ���\n");
		printf("\n");
	}
	PressEnter;
		
	return 0;
}

Status CmpGreater(LElemType_Sq e, LElemType_Sq data)
{
	return data>e ? TRUE : FALSE;
}

void PrintElem(LElemType_Sq e)
{
	printf("%d ", e);
}
