#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input : None
//  Output : None
//  Description : It is used to display 5 to 1
//  Autor : Ashmita Santosh Totre
//  Date : 24 July 2020
//
////////////////////////////////////////////////////////////////////
int Display()
{
   int i=0;

   for(i=5;i>0;i--)
   {
       printf("%d",i);
   }
}

int main()
{
   Display();
   return 0;
}