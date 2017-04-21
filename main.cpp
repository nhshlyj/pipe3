#include <stdio.h>
#include <stdlib.h>
#include "ioctrl.h"
int switchcase(int a[], int x,int num);
int main()
{
    int num;

    scanf("%d",&num);
    //ÀY
    int array[10][10]={};

    printf("¢z¢w");
    for(int i=0;i<num-1;i++)
    {
      printf("¢w");
    }
    printf("¢{\n");


    //¤¤
    for(int i=0;i<num;i++)
    {
      printf("¢x¡@");
    for(int i=0;i<num-1;i++)
    {
      printf("¡@");
    }
    printf("¢x\n");
    }



    //§À
     printf("¢|¢w");
    for(int i=0;i<num-1;i++)
    {
      printf("¢w");
    }
    printf("¢}");



    //printf("¢z¢w¢s¢w¢s¢w¢s¢w¢{\n");
    //for(int i=0;i<num-1;i++)
    //{
    //printf("¢u¢w¢q¢w¢q¢w¢q¢w¢t\n");
    //}
    //printf("¢|¢w¢r¢w¢r¢w¢r¢w¢}\n");



    gotoxy(2, 2);
    int all[6][6]={{2,5,3,9,6,3},
                   {4,10,6,1,8,4},
                   {8,11,11,7,3,5},
                   {4,5,9,7,9,7},
                   {6,8,4,9,8,10},
                   {3,9,6,7,4,8}};

    for(int i=0;i<num;i++)
        switchcase(all[i], 2*i,num);
while(getchar());
return 0;

}
int switchcase(int a[], int x,int num)
{
     int k=0;
     for(int i=0;i<num;i++){
    switch(a[i])
     {
        case 1:
        	{
			  gotoxy(2+x,2+k);
			  printf("ùÝ");
			  k++;
			}
             break;
        case 2:
        	{
			  gotoxy(2+x,2+k);
			  printf("ùÞ");
			  k++;
			}
             break;
        case 3:
        	{
			  gotoxy(2+x,2+k);
			  printf("ùß");
			  k++;
			}
             break;
        case 4:
        	{
			  gotoxy(2+x,2+k);
			  printf("ùà");
			  k++;
			}
             break;
        case 5:
        	{
			  gotoxy(2+x,2+k);
			  printf("ùù");
			  k++;
			}
             break;
        case 6:
        	{
			  gotoxy(2+x,2+k);
			  printf("ùá");
			  k++;
			}
             break;
        case 7:
        	{
			  gotoxy(2+x,2+k);
			  printf("ùâ");
			  k++;
			}
             break;
        case 8:
        	{
			  gotoxy(2+x,2+k);
			  printf("ùã");
			  k++;
			}
             break;
        case 9:
        	{
			  gotoxy(2+x,2+k);
			  printf("ùä");
			  k++;
			}
             break;
        case 10:
        	{
			  gotoxy(2+x,2+k);
			  printf("ùå");
			  k++;
			}
             break;
        case 11:
            {
			  gotoxy(2+x,2+k);
			  printf("ùø");
			  k++;
			}
             break;
        default:
        	 break;
     }

     }
}

