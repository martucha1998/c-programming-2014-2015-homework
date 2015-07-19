#include<stdio.h>

void rot13()
{
	int i;
    char input_string[100];
    char crypted_string[100];
    scanf("%s", input_string);
	getchar();
    for(i = 0 ; input_string[i] != '\0' ; i++)
    {
        if( input_string[i] - 'A' <= 12 || input_string[i] - 'a' <= 12)
        {
            crypted_string[i] = input_string[i] + 13 ;
        }
        else
        {
            if( input_string[i] - 'A' > 12 || input_string[i] - 'a' > 12)
            {
                crypted_string[i] = input_string[i] - 13 ;
            }
            else
            {
                crypted_string[i] = input_string[i];
            }
        }
    }
	crypted_string[i] = '\0' ;
    printf("%s\n", crypted_string) ;
    getchar();
}

int main () {
	char key;
    printf("Enter option: ");
	scanf("%c", &key);
    while(key != 'q')
    {
		if(key == 'c' || key == 'd')
        {
            rot13();
        	printf("Enter Option: ");
            getchar();
        }
        scanf("%c", &key);
    }

    return 0;
}
