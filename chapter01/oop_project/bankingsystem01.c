#include <stdio.h>
#include <string.h>

typedef struct {
	int account_number;
	int balance;
	char name[30];
} Member;

Member member[100];
int member_index=0;

void show_menu(void)
{
	printf("-----Menu-----\n");
	printf("1.���°���\n");
	printf("2.�Ա�\n");
	printf("3.���\n");
	printf("4.�������� ��ü ���\n");
	printf("5.���α׷� ����\n");
	printf("����: ");
}

void makeaccount(void)
{
	char name[100];
	printf("����ID : ");
	scanf("%d",&member[member_index].account_number);
	printf("�̸� : ");
	scanf("%s",name);
	strcpy(member[member_index].name,name);
	printf("�Աݾ� : ");
	scanf("%d",&member[member_index].balance);
	printf("���� �輳 �Ϸ�\n");
	
	member_index++;
}

void depositmoney(void)
{
	int i,account_id,money;
	 
	printf("[�� ��]\n");
	printf("���� ID : ");
	scanf("%d",&account_id);
	for(i=0;i<member_index;i++)
	{
		if(member[i].account_number == account_id)
		{
			break;
		}
	}
	
	printf("�Աݾ� : ");
	scanf("%d",&money);
	member[i].balance = member[i].balance + money;
	printf("�ԱݿϷ�\n\n");
}

void withdrawmoney(void)
{
	int i,account_id,money;
	
	printf("[�� ��]\n");
	printf("����ID : ");
	scanf("%d",&account_id);
	
	for(i=0;i<member_index;i++)
	{
		if(member[i].account_number == account_id)
		{
			break;
		}
	}
	
	printf("��ݾ� : ");
	scanf("%d",&money);
	
	member[i].balance = member[i].balance - money;
	printf("��ݿϷ�\n\n");
	
}
void showallaccinfo(void)
{
	int i;
	for(i=0;i<member_index;i++)
	{
		printf("���� ID : %d\n",member[i].account_number);
		printf("�̸� : %s\n",member[i].name);
		printf("�ܾ� : %d\n",member[i].balance);
	}
}

int main(void)
{
	int cho=0;
	
	while(1)
	{
		show_menu();
		scanf("%d",&cho);
		
		if(cho == 1)
		{
			makeaccount();
		}
		else if(cho == 2)
		{
			depositmoney();
		}
		else if(cho == 3)
		{
			withdrawmoney();
		}
		else if(cho == 4)
		{
			showallaccinfo();
		}
		else if(cho == 5)
		{
			break;
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}		
	}
	return 0;
}
