#include<stdio.h>
int reverse(char reverse_text[100])
{
   int text_length,counter;
   char place_exchanger;
   for(text_length = 0; reverse_text[text_length] != '\0'; text_length++)
   {
   }
   text_length--;// \0 is in the last cell
   for(counter = 0; text_length >= 0; counter++ , text_length--)
   {
      if(counter <= text_length)
      {
        place_exchanger = reverse_text[counter];
        reverse_text[counter] = reverse_text[text_length];
        reverse_text[text_length] = place_exchanger;
      }
      else
      {
      }
   }
   return 0;
}

int decode(char decode_text[100])
{
   int counter_1;
   for(counter_1 = 0; decode_text[counter_1] != '\0'; counter_1++)
   {
      if((decode_text[counter_1] >= 'a' && decode_text[counter_1] <='m') || (decode_text[counter_1] >= 'A' && decode_text[counter_1] <= 'M'))
      {
         decode_text[counter_1] += 13;
      }
      else if((decode_text[counter_1] > 'm' && decode_text[counter_1] <= 'z') ||(decode_text[counter_1] > 'M' && decode_text[counter_1] <= 'Z'))
      {
         decode_text[counter_1] -= 13;
      }
      printf("%c",decode_text[counter_1]);
   }
   printf("\n");
   return 0;
}

int main()
{
   char text[100] = "xrrJfvuGrgveJhbLqvQfznetbeClanZjbU";
   reverse(text);
   decode(text);
   return 0;
}
