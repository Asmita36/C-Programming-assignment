#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Divide
//  Input : integer
//  Output : integer
//  Description : It is used to perform division of numbers
//  Autor : Ashmita Santosh Totre
//  Date : 24 July 2020
//
////////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
    int iAns=0;
    if (iNo2==0)
    {
          return -1;
    }
    else
    {
          iAns=iNo1/ iNo2;
    }
    return iAns;
}

int main()
{
    int iValue1=15;
    int iValue2=5;
    int iRet=0;

    iRet=Divide(iValue1,iValue2);
    printf("Division is %d",iRet);

    return 0;
}