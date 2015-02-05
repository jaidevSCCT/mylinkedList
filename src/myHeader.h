#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct emp
{
	int age;
	char *name;
	int salary;
	struct emp *next;
}employee;


typedef struct mylist
{
	void (*fptrV)(void);
}list;

void createList(void);
void printList(void);
void deleteList(void);
void addBetweenList(void);
void delBetweenList(void);

#define NAMSIZE 512
