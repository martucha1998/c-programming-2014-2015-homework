#include <stdio.h>

struct nacepin
{
     float pX;
     float pY;
};
int main()
{     
     struct nacepin
     {
          float pX;
          float pY;
     };
     int nacepinCount, weight = 1, counter;
     float posX, posY; 
     struct nacepin ncpn[nacepinCount];

     printf("Enter number of Nacepins:\n");
     scanf("%d", &nacepinCount);
     printf("Enter Pacman Origin point:");
     scanf("%.1f %.1f", &posX, &posY);
 
     for(counter=0; counter<nacepinCount; counter++)
     { 
          printf("Enter Nacepin coordinates:");
          scanf("%.1f %.1f", &ncpn[counter].pX, &ncpn[counter].pY);
     }
          for(counter=0; counter<nacepinCount; counter++)
          {
               float mvX = ncpn[counter].pX - posX;
               float mvY = ncpn[counter].pY - posY;
               mvX += mvX/weight;
               mvY += mvY/weight;
               posX += mvX;      
               posY += mvY;
               printf("%.2f %.2f\n", mvX, mvY);
          }
        printf("%.2f %.2f\n", posX, posY);
     return 0;
}