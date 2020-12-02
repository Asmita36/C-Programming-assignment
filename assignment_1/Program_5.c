#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Input : integer
//  Description : It is used to display pattern on screen
//  Autor : Ashmita Santosh Totre
//  Date : 24 July 2020
//
////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
   int iCnt=0;

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      printf("*",&iCnt);
   }
}

int main()
{
   int iValue=5;
   iValue=5;
   Accept(iValue);
   return 0;
}