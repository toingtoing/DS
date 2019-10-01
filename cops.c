#include<stdio.h>
int main()
{
 int i,j,k,l,t,m,x,y;
 
 scanf("%d",&t);
 while(t!=0)
 {
     scanf("%d %d %d",&m,&x,&y);
     int a[m];
     for(i=0;i<m;i++)
     {
        scanf("%d",&a[i]);
     }
     int re;
     int countneg=0;
     int countpos=0;
     re=x*y;
     for(j=0;j<m;j++)
     {int result,res;
        result=a[j]-re;
        if(result>=0)
        {
            for(k=0;k<result;k++)
            {
                countneg++;
            }
        }
         res=a[j]+re;
         if(res<150)
         {
             for(l=res;l<150;l++)
             {
                 countpos++;
             }
         }
         int counter;
         counter=countpos+countneg;
         printf("negative counter is %d\t",countneg);
         printf("\n positive counter is %d\n\t",countpos);
         countpos=0;
         countneg=0;
     }
 }
}