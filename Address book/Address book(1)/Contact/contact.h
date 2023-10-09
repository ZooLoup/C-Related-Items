#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000
#include <stdio.h>
#include <string.h>
struct PenInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct Contact
{
	struct PenInfo data[MAX];//存放一个信息
	int size;//记录已有的的元素个数
};

//声明函数
//初始化通讯录的函数
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);

//打印通讯录
void ShowContact(const struct Contact* ps);

//删除
void DelContact(struct Contact* ps);

void SearchContact(struct Contact* ps);

void ModifyContact(struct Contact* ps);