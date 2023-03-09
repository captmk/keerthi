#include<stdio.h>
void towers(int,char,char,char);
int main()
{
    int num;
    printf("enter the number of disk");
    scanf("%d",&num);
    printf("sequence of moves involved in the tower of hanoi are:\n");
    towers(num,'a','c','b');
    return 0;
}
void towers(int num,char from_tower,char to_tower,char aux_tower)
{

    if(num==1)
    {
        printf("\n move disk 1 from tower %c to tower %c ",from_tower,to_tower);
        return;

    }
    towers(num-1,from_tower,aux_tower,to_tower);
    printf("\n move disk %d from tower %c to tower %c",num,from_tower,to_tower);
    towers (num-1,aux_tower,to_tower,from_tower);
}
