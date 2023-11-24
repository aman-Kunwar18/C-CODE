#include <stdio.h>
int main()
{
    int firstnum=0,secondnum=1,nextnum;
    printf("%d %d",firstnum,secondnum);
    for(int i=2;i<10;i++){
        nextnum = firstnum + secondnum;
        printf(" %d",nextnum);
        firstnum=secondnum;
        secondnum=nextnum;

    }
    return 0;
}
