//write a prog to swap two nums by using product , division, when an either value is not equal to zero.
//t1: a=2 b=3 op: a=3 , b=2. 
//if any is zero we cant take num/0 so either of num cant be zero.
#include<stdio.h> //preprocessing
int main(){
    int a,b;
    printf("enter a,b");
    scanf("%d %d",&a,&b);
    if(a!='0' && b!='0'){ //b!=0
        a=a*b; 
        b=a/b;
        a=a/b;
        // single line approach a=(a+b)-(b=a);
        printf("a:%d b:%d",a,b);
    }
    else{
        printf("enter non zero numbers only\n");
   }
   return 0;
}

