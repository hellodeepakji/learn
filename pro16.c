#include <stdio.h>

int main()
{
  int a;
  printf("Enter The Year\n");
  scanf("%d",&a);
  if(a%4==0){
    if(a%100==0){
      if(a%400==0){
        printf("%d is leap year",a);
         }else{
            printf("%d is not leap year",a);
         }
      }else{
       printf("%d is leap year",a);
     }
  }else{
   printf("%d is not leap year",a);
  }
  return 0;
}