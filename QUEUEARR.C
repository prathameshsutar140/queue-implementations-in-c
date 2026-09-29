#include<stdio.h>
#include<conio.h>
void main()
{
	int q[100],f=-1,r=-1,ch,i,temp,key;

	do
	{
		printf("\n 1:enqueue\n 2:dequeue\n 3:display\n 4:Exit\n");
		printf("enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: if(f==-1)
				{       f++;
					r++;
					printf("enter element :");
					scanf("%d",&q[r]);
				}
				else
				{
					r++;
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
					f++;

				}
				break;
			case 3: if(r==-1)
				{
					printf("stack is empty :");
				}
				else
				{
					for(i=f;i<=r;i++)
					{
						printf("%d\n",q[i]);
					}
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
