//(5170984),(406567),(368750),(2369510),(2183293) 
#include<stdio.h>
int main(){
int num=5170984,r,rn=0,print=num;

    while(num){
          r = num % 10;
         rn = rn  * 10+r;
        num = num / 10;
    }
    printf("%d   %d\n",print,rn);

num=406567;r=0;rn=0;

    print=num;

      while(num){
          r = num % 10;
         rn = rn  * 10+r;
        num = num / 10;
      }

    printf("%d   %d\n",print,rn);

num=368750;r=0;rn=0;

    print=num;

    while(num){
          r = num % 10;
         rn = rn  * 10+r;
        num = num / 10;
    }
    printf("%d   %d\n",print,rn);

num=2369510;r=0;rn=0;

   print=num;

    while(num){
          r = num % 10;
         rn = rn  * 10+r;
        num = num / 10;
    }

    printf("%d   %d\n",print,rn);

num=2183293;r=0;rn=0;

   print=num;

    while(num){
          r = num % 10;
         rn = rn  * 10+r;
        num = num / 10;
    }

    printf("%d   %d\n",print,rn);
return 0;
}
