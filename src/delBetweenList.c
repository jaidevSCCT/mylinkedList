/*This file to del member between the node */
#include"myHeader.h"
extern employee *head,*newNode,*temp; /*extern from other file*/
void delBetweenList()
{
	short int choice,flag=0;
	employee *first = head , *move = head,*totalList = head;
	temp = head;newNode = head;
menu :
	printf("Enter the position you want to delete or 0 to exit\n");
	scanf("%hd",&choice);
	if(choice == 0)
		goto last;
	while(totalList)
	{
		totalList = totalList->next;
		flag++;
	}
	if(choice >= flag)
	{
		printf("Sorry cannot delete at this position , total list is %hd\n",flag);
		totalList = head;
		flag = 0;
		goto menu;
	}
	if(choice == 1) /*Enter member at first postion */
	{
		first = head->next;
		free(head);
		head = first;
	}
	else /*Enter member other than fisrt*/
	{
		short int j = 1;
		while(j <= choice)  /*Moving the pointer choice times  */
		{
			move = move->next;
			j++;
		}
		j = 1;
		while(j < choice) /*Moving the pointer 1 less than choice*/
		{
			first = first->next;
			j++;
		}
		j = 2;
		while(j < choice) /*Moving the pointer 2 less than choice*/
		{
			temp = temp->next;
			j++;
		}
		if(choice)
		{
			head = first;
			temp->next = move;
			free(head);
			head = newNode;							
		}		
	}
last:
	printf("Exiting-------------\n");
	
}
