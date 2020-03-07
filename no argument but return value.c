//no argument but return value
#include<stdio.h>
int greatNum();
int main()
{
    int result;
    result=greatNum();
    printf("The greater number is: %d", result);
    return 0;

}
int greatNum()
{
   int i,j,greatNum;
   printf("enter 2 numbers that u want to compare: ");
   scanf("%d%d", &i, &j);
   if(i>j) {
        greatNum=i;
   }
   else{
        greatNum=j;
   }
   return greatNum;
}


