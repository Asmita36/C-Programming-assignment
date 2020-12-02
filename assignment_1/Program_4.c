#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////
//
//  Function Name : Chk
//  Input : integer
//  Output : integer
//  Description : It is used to find the numbers which is divisible by 5
//  Autor : Ashmita Santosh Totre
//  Date : 24 July 2020
//
////////////////////////////////////////////////////////////////////


BOOL Chk(int iNo)
{
if((iNo%5)==0)
{
return TRUE;
}
else
{
return FALSE;
}
}

int main()
{
int iValue=0;
BOOL iRet=FALSE;

printf("enter the number/n");
scanf("%d",&iValue);

iRet=Chk(iValue);

if(iRet==TRUE)
{
printf("divisible by 5");
}
else
{
printf("not divisible by 5");
}
return 0;
}