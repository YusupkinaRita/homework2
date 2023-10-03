#include <stdio.h>
int main (){
    int x, y;
    scanf ("%d %d",&x, &y);
    if (x>=0){
        if (x==0){
            if (y==0)
            printf("origin");
            else
            printf("axis y");
        }
        else{
            if (y>0)
            printf("1st quarter");
            if (y==0)
            printf("axis x");
            if(y<0)
            printf("4th quarter");
        }
    }
    else{
        if (y>0)
        printf("2nd quarter");
        if(y==0)
        printf("axis x");
        if (y<0)
        printf("3rd quarter");
    }
return 0;
}