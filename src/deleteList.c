#include"myHeader.h"
extern employee *head;
void deleteList()
{
	short int flag = 0;
	employee *del1 = NULL; /*Variable local to this block*/
	if(head == NULL)
		printf("Nothing to delete \n");
	while(head)
	{
		del1 = head->next;
		free(head->name);
		free(head);
		head = del1;
		flag++;
	}
	if(flag)
		printf("All list has been succesfully deleted\n");
}
