/*Main file : In this file you can see the example of function pointer*/
#include"myHeader.h"
extern employee *head;
int main(int argc,char *argv[])
{
	if(argc < 2)
	{
		fprintf(stdout,"Usage %s <1> to start the program\n",argv[0]);
		exit(EXIT_FAILURE);
	}

	short int choice = 0,start = atoi(argv[1]) ;
	list mylist[] = {
		{NULL},
		{createList},
		{printList},
		{deleteList},
		{addBetweenList},
		{delBetweenList}
	};

	while(start == 1)
	{
	
		printf("Enter 0 to exit , 1 to create list , 2 to print list , 3 to delete list \n");
		printf("Enter 4 to add between the list, 5 to delete between the list\n");
		scanf("%hd",&choice);
	
		if(choice == 0)
			break;
		else if(choice)
			mylist[choice].fptrV();
		else
			printf("Wrong Selection\n");
	}	
	return 0;
}
