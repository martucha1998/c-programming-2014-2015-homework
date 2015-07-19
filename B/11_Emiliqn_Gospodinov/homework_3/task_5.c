#include<stdio.h>

int main(){
int test;
test=0;
for(
test=0;
test<30000;
test++)
{ 
if(test%2!=0){
if(test%3==0){
if(test%7==0){
printf("%i\n", test);
}}}}

return 0;
}
