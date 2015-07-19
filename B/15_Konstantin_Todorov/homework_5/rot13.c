#include <stdio.h>

int main(){

char mas[100];
char i;

printf("Enter option:  ");
scanf ("%s", mas);
for (i = 0; mas[i]; i++) {
        if (mas[i] >= 'a' && mas[i] <= 'm') {mas[i]=mas[i]+13;  }
        if (mas[i] >= 'A' && mas[i] <= 'M') {mas[i]=mas[i]+13;  }
        if (mas[i] >= 'n' && mas[i] <= 'z') {mas[i]=mas[i]-13;  }
        if (mas[i] >= 'N' && mas[i] <= 'Z') {mas[i]=mas[i]-13;  }
    }
printf("%s\n", mas);
return 0;
}
