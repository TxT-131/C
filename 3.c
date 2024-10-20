#include<stdio.h>
int main()
{
    int g,s,b;
    int count = 0;
    for(b=1;b<5;b++){
        for(s=1;s<5;s++){
            for(g=1;g<5;g++){
                if(g!=s&& s!=b && g!=b){
                    printf("%d,%d,%d\n",b,s,g);
                    count++;
                }
                

            }

        }

    }
    printf("count:%d",count);
    return 0;
}