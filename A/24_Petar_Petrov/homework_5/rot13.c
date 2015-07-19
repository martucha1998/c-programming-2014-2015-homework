#include<stdio.h>

int code(char CodedText[100])
{
   int code_length = 0,counter_1;
   getchar();
   printf("Please input the text you want to code:\n");
   do
   {
      scanf("%c",&CodedText[code_length]);
      code_length++;
   } while(CodedText[code_length - 1] != 10);
   for(counter_1 = 0; counter_1 < code_length; counter_1++)
   {
      if((CodedText[counter_1] >= 'a' && CodedText[counter_1] <='m') || (CodedText[counter_1] >= 'A' && CodedText[counter_1] <= 'M'))
      {
         CodedText[counter_1] += 13;
      }
      else if((CodedText[counter_1] > 'm' && CodedText[counter_1] <= 'z') || (CodedText[counter_1] > 'M' && CodedText[counter_1] <= 'Z'))
      {
         CodedText[counter_1] -= 13;
      }
      printf("%c",CodedText[counter_1]);
   }
   return 0;
}

int decode(char DecodedText[100])
{
   int decode_length = 0,counter_2;
   getchar();   
   printf("Please input the text you want to decode:\n");
   do
   {
      scanf("%c",&DecodedText[decode_length]);
      decode_length++;
   } while(DecodedText[decode_length - 1] != 10);
   for(counter_2 = 0; counter_2 < decode_length; counter_2++)
   {
      if((DecodedText[counter_2] >= 'a' && DecodedText[counter_2] <='m') || (DecodedText[counter_2] >= 'A' && DecodedText[counter_2] <= 'M'))
      {
         DecodedText[counter_2] += 13;
      }
      else if((DecodedText[counter_2] > 'm' && DecodedText[counter_2] <= 'z') || (DecodedText[counter_2] > 'M' && DecodedText[counter_2] <= 'Z'))
      {
         DecodedText[counter_2] -= 13;
      }
      printf("%c",DecodedText[counter_2]);
   }
   return 0;
}

int main()
{
   char option;
   char text[100]; 
   while(option != 'q')
   {
      printf("Please input an option (c - code a text, d - decode a text, q - quit\n");
      scanf("%c",&option);
      switch(option)
      {
         case 'c': code(text);
                   break;
         case 'd': decode(text);
                   break;
      }
   }
   return 0;
}
