#include<stdio.h>
#include<conio.h>
void main()
{
	int q[100],f=-1,r=-1,ch,i,temp,key,size;
	printf("enter size of queue: ");
	scanf("%d",&size);

	do
	{
		printf("\n 1:enqueue\n 2:dequeue\n 3:display\n 4:Exit\n");
		printf("enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: if (r ==size-1 && f==0||r==f-1)
				{

					printf("queue is full :");

				}
				 else if(f==-1)
				{
					f++;
					r++;
					printf("enter element :");
					scanf("%d",&q[r]);
				}
				else
				{
					r=(r+1)%size;
					printf("enter element :");
					scanf("%d",&q[r]);
				}
				break;
			case 2: if(f==-1 && r==-1)
				{
					printf("The queue is empty :");
				}
				else if(f==r)
				{
					f=r=-1;
				}
				else
				{

					printf("%d element is deleted.......",q[f]);
					f=(f+1)%size;

				}
				break;
			case 3: if(f==-1)
				{
					printf("queue is empty :");
				}
				else
				{
					for(i=f;i!=r;i=(i+1) % size)
					{
						printf("%d\n",q[i]);
					}
					printf("%d",q[r]);

				}
				break;
				case 4 : printf("Exiting.......");
				break;
				default: printf("error ");
		}
	}while(ch!=4);
	getch();
	clrscr();
}