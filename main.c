#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c = a%b;
    d = a/b;
    if(c==0)
    printf("yes");
    else
        printf("%d %d",d,c);
    return 0;

}

