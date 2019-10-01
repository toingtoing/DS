#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i =0; i<T; i++)
    {

        int M, x,y;

        scanf("%d%d%d", &M,&x, &y);
        int A[M], B[150]={0};
        for(int i=0; i<M; i++){
            scanf("%d",&A[i]);

        }
        int c = x*y;
        for(int j =0; j<M; j++)
        {
            int sum , sub;

            sum = A[j] +c;
            sub = A[j] -c;
            if(sum>150){
                sum =150;
            }
            if(sub<0){
                sub =0;
            }
            for(int k = sub; k<=sum ; k++){
                    if(k>0){
                        B[k-1]+=1;
                    }

            }
        }
        int ANS =0;
        for(int i=0; i<150; i++)
        {
            if(B[i]==0){
                ANS+=1;
            }

        }
        printf("%d\n", ANS);

    }

}
