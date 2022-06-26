#include<stdio.h>
#include<conio.h>
int main()
{
 int dd ,mm ,yyyy,y,r,rr,z,zz,rem,dleap,dnormal,oz,dtot,oddd,odi,zzz,hoh,kkk;
 printf("enter d m yyyy");
 scanf("%d%d%d",&dd,&mm,&yyyy);
 y= yyyy-1;
 r=y%400;
 z=y-r;
 rr=r%100;
 zz=r-rr;
 switch (zz)
 {
 case 100:
     {
         rem=5;
         break;
     }
 case 200:
    {
        rem= 3;
        break;
    }
 case 300:
    {
        rem=1;
        break;
    }
 case 400:
    {
        rem=0;
        break;
    }
 case 0:
    {
        rem=0;
        break;

    }
 }
 dleap=rr/4;
 dnormal= rr-dleap;
 oz=dleap*2;
 dtot=oz+dnormal;
 oddd=dtot%7;

  if(yyyy%4==0)
    {
        switch(mm)
        {
     case1:
     {
          odi=dd;
          break;
     }
     case 2:
     {
          odi=dd+3;
          break;
     }
     case3:
     {
        odi=dd+4;
        break;
     }
     case 4:
        {
        odi=dd+7;
        break;
        }
     case 5:
        {
        odi=dd+9;
        break;
        }
     case 6:
        {
        odi=dd+12;
        break;
        }
     case 7:
         {
        odi=dd+14;
        break;
         }
     case 8:
        {
        odi=dd+17;
        break;
        }
     case 9:
         {
        odi=dd+20;
        break;
         }
     case 10:
        {
        odi=dd+22;
        break;
        }
     case 11 :
        {
        odi=dd+25;
        break;
        }
     case 12 :
        {
        odi=dd+27;
        break;
        }
        }
        }
    if(yyyy%4!=0)
    {
     switch(mm)
        {
     case 1:
     {
          odi=dd;
          break;
     }
     case 2:
     {
          odi=dd+3;
          break;
     }
     case 3:
     {
        odi=dd+3;
        break;
     }
     case 4:
        {
        odi=dd+6;
        break;
        }
     case 5:
        {
        odi=dd+8;
        break;
        }
     case 6:
        {
        odi=dd+11;
        break;
        }
     case 7:
         {
        odi=dd+13;
        break;
         }
     case 8:
        {
        odi=dd+16;
        break;
        }
     case 9:
         {
        odi=dd+19;
        break;
         }
     case 10:
        {
        odi=dd+21;
        break;
        }
     case 11 :
        {
        odi=dd+24;
        break;
        }
     case 12 :
        {
        odi=dd+26;
        break;
        }
        }
        }
        zzz=odi%7;
 hoh=odi+rem+oddd;
 kkk=hoh%7;
   switch(kkk)
    {

case 1:
    {
        printf("monday");
        break;
    }
case 2:
    {
        printf("tuesday");
         break;
    }
case 3:
    {
        printf("wednesday");
         break;
    }
case 4:
    {
        printf("thrusday");
         break;
    }
case 5:
    {
        printf("friday");
         break;
    }
case 6:
    {
        printf("saturday");
         break;
    }
case 0:
    {
       printf("sunday");
        break;
    }
    }
    return 0;
    



}
