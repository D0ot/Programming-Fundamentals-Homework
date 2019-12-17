/*-----------------------------------------------
  Filename: CHAP7EXC.C
  Purpose: Basic linked list test!
  Date:   2018.04.26
 ----------------------------------------------*/

//below is added on 2019.5.5

//*********************************************************
//File name	 :      0802.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.5.5
//Student ID   :    2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.H>


struct student{
	long lNum;
	float fScore;
	struct student *pNext;
};

#define SIZE sizeof(struct student)

struct student *CreatLiList(void);
void TraverLiList(struct student *);
int AppendNode(struct student *,long ,float);
int DeleteNode(struct student *,long);
int SearchNode(struct student *,long );
struct student *ReleaseLiList(struct student *);
int InsertHeadNode(struct student *,long,float);
void ReverseList(struct student*);

int main(void)
{
	struct student *spHead = NULL;
	int iIndex,iStatus = 0;
	long lID;
	float fScore;
	do
	{
		system("CLS");
		printf("������0��5��ѡ����:\n");
		printf("0.�˳���\n");
		printf("1.����������\n");
		printf("2.������ʾ������\n");
		printf("3.����β��׷�ӽ�㡣\n");
		printf("4.ɾ��ָ����㡣\n");
		printf("5.����ѧ�Ų��ҡ�\n");
		printf("6.ͷ��ڵ㡣\n");
        printf("7.��ת�б���\n");

		printf("\n����ѡ���");
		scanf("%d",&iIndex);
		fflush(stdin);

		switch(iIndex)
		{
		case 0:
			if (spHead != NULL)//�ͷ�����
			{
				ReleaseLiList(spHead);
				spHead = NULL;
			}
			exit(0);
		case 1:
			system("CLS");
			if (spHead != NULL)
			{
				ReleaseLiList(spHead);
				spHead = NULL;
			}
			printf("����ѧ�źͳɼ��Իس�ȷ�ϣ�����-1������\n");
			spHead = CreatLiList();
			break;
		case 2:
			system("CLS");
			if (spHead == NULL)
			{
				printf("������δ��������ѡ��1����������");
				system("Pause");
				break;
			}
			printf("�����е�����Ϊ��\n");
			TraverLiList(spHead);
			system("pause");
			break;
		case 3:
			system("CLS");
			if (spHead == NULL)
			{
				printf("������δ��������ѡ��1����������");
				system("Pause");
				break;
			}
			printf("�ԣ��ָ�����׷�ӵ�ѧ�ţ������� ");
			scanf("%ld,%f",&lID,&fScore);
			AppendNode(spHead,lID,fScore);
			break;
		case 4:
			system("CLS");
			if (spHead == NULL)
			{
				printf("������δ��������ѡ��1����������");
				system("Pause");
				break;
			}
			printf("����Ҫɾ������ѧ�ţ�");
			scanf("%ld",&lID);
			iStatus = DeleteNode(spHead,lID);
			if (iStatus == 1)
			{
				printf("Delete is fail!\n");
			}
			else
			{
				printf("Delete is success!\n");
			}
			system("Pause");
			break;
		case 5:
			system("CLS");
			if (spHead == NULL)
			{
				printf("������δ��������ѡ��1����������");
				system("Pause");
				break;
			}
			printf("������Ҫ���ҵ�ѧ�ţ�");
			scanf("%ld",&lID);
			iStatus = SearchNode(spHead,lID);
			if (iStatus == 1)
			{
				printf("No this num!\n");
			}
			system("Pause");
			break;
        case 6:
            system("CLS");
			if (spHead == NULL)
			{
				printf("������δ��������ѡ��1����������");
				system("Pause");
				break;
			}
			printf("�ԣ��ָ�����ͷ��ڵ��ѧ�ţ������� ");
			scanf("%ld,%f",&lID,&fScore);
			InsertHeadNode(spHead,lID,fScore);
			if (iStatus == 1)
			{
				printf("Insert fail!\n");
			}
			else
			{
				printf("Insert success!\n");
			}
			break;

        case 7:
            system("CLS");
            if (spHead == NULL)
			{
				printf("������δ��������ѡ��1����������");
				system("Pause");
				break;
			}
            ReverseList(spHead);
            break;
		default:
			printf("Selection is error!\n");
			system("Pause");
        }
	} while (1);
  return 0;
}

/*---------------------------------------------------------
 *	Name		:CreatLiList
 *  Purpose     :Create a linked list
 *  Argument(s)	: No.
 *  return      :struct student * linked list head
 --------------------------------------------------------*/
struct student *CreatLiList(void)
{
	struct student *spHead,*spPre,*spCur;
	long lv;
	float fv;
	char szBuff[20];
	spPre  = (struct student *)malloc(SIZE);//ͷ���
	if (spPre == NULL)
	{
		return NULL;
	}
	spHead = spPre;
	spHead -> pNext = NULL;

	do
	{

		printf("Please Input ID:");
		gets(szBuff);
		lv = atol(szBuff);
		if(lv != -1)
        {
            printf("Please Input Score:");
            gets(szBuff);
		    fv = (float)atof(szBuff);
        }

		if (lv != -1)
		{
			spCur = (struct student *)malloc(SIZE);
			spCur -> lNum = lv;
			spCur -> fScore = fv;
			spCur -> pNext = NULL;
			spPre -> pNext = spCur;
			spPre = spCur;
		}
	} while (lv != -1);//��-1������
	return spHead;
}

/*---------------------------------------------------------
 *	Name		:TraverLiList
 *  Purpose     :Traver the linked list,display data field
 *  Argument(s)	:struct student * linked list head
 *  return      :No.
 --------------------------------------------------------*/
void TraverLiList(struct student *sp)
{
	struct student *spCur;
	spCur = sp -> pNext;
	while (spCur != NULL)
	{
		printf("Num:%ld\tScore:%7.1f\n",spCur -> lNum,spCur -> fScore);
		spCur = spCur -> pNext;
	}
}

/*---------------------------------------------------------
 *	Name		:AppendNode
 *  Purpose     :Append a node in the linked list
 *  Argument(s)	:struct student * linked list head
 *				:long lArg & fArg data field.
 *  return      :int status:0 success,1 fail.
 --------------------------------------------------------*/
int AppendNode(struct student *sp,long lArg,float fArg)
{
	struct student *spCur,*spNew;
	spCur = sp;
	while(spCur -> pNext != NULL)
	{
	     spCur = spCur -> pNext;
	}
	spNew = (struct student *)malloc(SIZE);
	if (spNew == NULL)
	{
		return 1;
	}
	spNew -> lNum = lArg;
	spNew -> fScore = fArg;
	spNew -> pNext = NULL;
	spCur -> pNext = spNew;
	return 0;
}

/*---------------------------------------------------------
 *	Name		:DeleteNode
 *  Purpose     :Delete the node in the linked list
 *  Argument(s)	:struct student * linked list head
 *				:long lArg deleted data field.
 *  return      :int status:0 success,1 fail.
 --------------------------------------------------------*/
int DeleteNode(struct student *sp,long lArg)
{
	struct student *spCur,*spT;
	spCur = sp;
	while(spCur -> pNext != NULL && spCur -> pNext ->lNum != lArg)
	{
		spCur = spCur -> pNext;
	}
	if (spCur -> pNext == NULL)
	{
		return 1;
	}
	spT = spCur -> pNext;
	spCur -> pNext = spCur -> pNext -> pNext;
	free(spT);
	return 0;
}

/*---------------------------------------------------------
 *	Name		:SearchNode
 *  Purpose     :Search the lNum data in the linked list
 *  Argument(s)	:struct student * linked list head
 *				:long lArg search data field.
 *  return      :int status:0 success,1 fail.
 --------------------------------------------------------*/
int SearchNode(struct student *sp,long lArg)
{
	struct student *spCur;
	spCur = sp;
	while(spCur -> pNext != NULL && spCur -> lNum != lArg)
	{
		spCur = spCur -> pNext;
	}
	if (spCur ->lNum == lArg)
	{
		printf("The num %ld:%7.1f\n",spCur -> lNum, spCur -> fScore);
		return 0;
	}
	else
	{
		return 1;
	}
}

/*---------------------------------------------------------
 *	Name		:ReleaseLiList
 *  Purpose     :Release the linked list resource.
 *  Argument(s)	:struct student * linked list head
 *  return      :NULL head pointer point to NULL
 --------------------------------------------------------*/
struct student *ReleaseLiList(struct student *sp)
{
	struct student *spCurr,*spPrv;
	spPrv = sp->pNext;// to fix "double free" bug.
	while (spPrv != NULL)
	{
		spCurr = spPrv -> pNext;
		free(spPrv);
		spPrv = spCurr;
	}
	free(sp);
	return NULL;
}

/*---------------------------------------------------------
 *	Name		:InsertHeadNode
 *  Purpose     :Insert a node in linker head.
 *  Argument(s)	:struct student * linked list head
                :long value  node data
                :float value node data
 *  return      :malloc status 0: success ,1 fail
 --------------------------------------------------------*/
int InsertHeadNode(struct student *sp,long lArgu,float fArgu)
{
    struct student* temp = malloc(SIZE);
    if(!temp)
    {
        return 1;
    }
    temp->pNext = sp->pNext;
    temp->fScore = fArgu;
    temp->lNum = lArgu;
    sp->pNext = temp;


    return 0;
}

/*---------------------------------------------------------
 *	Name		:ReverseList
 *  Purpose     :Reverse the whole list
 *  Argument(s)	:struct student * linked list head
 *  return      :no return value
 --------------------------------------------------------*/


void ReverseList(struct student *sp)
{
    struct student temp, *p;
    temp.pNext = NULL;
    while(sp->pNext)
    {
        p = sp->pNext;
        sp->pNext = p->pNext;
        p->pNext = temp.pNext;
        temp.pNext = p;
    }
    sp->pNext = temp.pNext;
}



/*----------------------End of the file ------------------*/