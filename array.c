#include<stdio.h>
#include<conio.h>

void main(){

int i, arr[50],n ;

printf("\n Enter the size of array: ");
scanf("%d" ,&n);

printf("\n Enter the size of array: ");
for ( i=0; i < n; i++)
{
    printf("\n Array Element: %d" , i+l);
    scanf("%d" ,&arr[i]);
}       
printf("\n Array elements and their addresses are : \n");
for(i=0; i<n; i++)

{
    printf("\n%d  %u" , arr[i], &arr[i]);

}
getch();

}
