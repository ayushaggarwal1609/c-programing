#include<stdio.h>
void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}
int main(){
    int x = 25, y = 36;
    swap(&x, &y);
    printf("%d%d",x,y);
    return 0;
}