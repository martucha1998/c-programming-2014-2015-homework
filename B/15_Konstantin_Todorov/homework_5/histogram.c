#include <stdio.h>

int main(){

int mas[200];
int i;
int k;
int t=0;
int q=0;
printf("vuvedi maksimalna stoinost\n");
scanf("%d",&k);
printf("vuvedi stoinosti\n");
scanf("%d", mas);
while (i<=k){
                       if (mas[t]=mas[i]){
                                          q++;
                                          printf("%d: %d\n", t,q);
                                          }
                      t++; 
                  i++;                       
                      }

return 0;
}
