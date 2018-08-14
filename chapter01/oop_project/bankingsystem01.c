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
	printf("1.계좌개설\n");
	printf("2.입금\n");
	printf("3.출금\n");
	printf("4.계좌정보 전체 출력\n");
	printf("5.프로그램 종료\n");
	printf("선택: ");
}

void makeaccount(void)
{
	char name[100];
	printf("계좌ID : ");
	scanf("%d",&member[member_index].account_number);
	printf("이름 : ");
	scanf("%s",name);
	strcpy(member[member_index].name,name);
	printf("입금액 : ");
	scanf("%d",&member[member_index].balance);
	printf("계좌 계설 완료\n");
	
	member_index++;
}

void depositmoney(void)
{
	int i,account_id,money;
	 
	printf("[입 금]\n");
	printf("계좌 ID : ");
	scanf("%d",&account_id);
	for(i=0;i<member_index;i++)
	{
		if(member[i].account_number == account_id)
		{
			break;
		}
	}
	
	printf("입금액 : ");
	scanf("%d",&money);
	member[i].balance = member[i].balance + money;
	printf("입금완료\n\n");
}

void withdrawmoney(void)
{
	int i,account_id,money;
	
	printf("[출 금]\n");
	printf("계좌ID : ");
	scanf("%d",&account_id);
	
	for(i=0;i<member_index;i++)
	{
		if(member[i].account_number == account_id)
		{
			break;
		}
	}
	
	printf("출금액 : ");
	scanf("%d",&money);
	
	member[i].balance = member[i].balance - money;
	printf("출금완료\n\n");
	
}
void showallaccinfo(void)
{
	int i;
	for(i=0;i<member_index;i++)
	{
		printf("계좌 ID : %d\n",member[i].account_number);
		printf("이름 : %s\n",member[i].name);
		printf("잔액 : %d\n",member[i].balance);
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
			printf("잘못 입력하셨습니다.\n");
		}		
	}
	return 0;
}
