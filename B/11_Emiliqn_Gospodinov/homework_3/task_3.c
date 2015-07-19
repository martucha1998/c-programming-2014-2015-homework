#include <stdio.h>

int main(){


int f;
int s;
int i;

f=3;
s=5;

printf("(%d,%d)\n",f,s);

f=5;
s=7;

printf("(%d,%d)\n",f,s);


while(i<8)
{f++; s=f+2;
if ((f%2!=0)&&(f%3!=0)&&(f%5!=0)&&(f%7!=0)&&
(s%2!=0)&&(s%3!=0)&&(s%5!=0)&&(s%7!=0))
{i++; 
printf("(%d,%d)\n",f,s);}
}

return 0;

}
