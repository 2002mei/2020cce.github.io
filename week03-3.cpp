#include <stdio.h>
int a[5]={0,10,20,30,40};
void p1()
{
    for(int i=0;i<5;i++){
        printf("%d " ,a[i]);
    }
    printf("\n");
}
int main()
{
    int *p= &a[2];
    *p=222;
    p1();

    p=p+2;
    *p=666;
    p1();

    p--;

    *p=555;
    p1();
}
