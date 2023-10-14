#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
//#define MAX 1000
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

typedef struct Contact
{
	struct PeoInfo *data;//存放一个信息
	int size;//记录已有的的元素个数
	int capacity;//当前通讯录最大容量
}Contact;

//声明函数
//初始化通讯录的函数
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);

//打印通讯录
void ShowContact(const struct Contact* ps);

//删除
void DelContact(struct Contact* ps);

void SearchContact(struct Contact* ps);

//
void ModifyContact(struct Contact* ps);

void DestroyContact(Contact* ps);

void LoadContact(Contact* ps);