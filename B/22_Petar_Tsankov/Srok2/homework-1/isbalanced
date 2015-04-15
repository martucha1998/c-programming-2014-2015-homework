#include<stdio.h>
#include<string.h>
struct data_t{
int ammount;
int all[1024];
};
void in(int i,struct data_t* a){
(*a).all[(*a).ammount]=i;
(*a).ammount++;
}
int outis (int i,struct data_t* a){
(*a).ammount--;
return (*a).all[(*a).ammount]==i;
}
int getopnum(char g){
if(g=='{'){return 1;}
if(g=='['){return 2;}
if(g=='('){return 3;}
return 0;
}
int getclnum(char g){
if(g=='}'){return 1;}
if(g==']'){return 2;}
if(g==')'){return 3;}
return 0;
}
int main(){
struct data_t a;
char s[1024];
scanf("%s",s);
int i;
int c;
c=1;
a.ammount=0;
for(i=0;i<strlen(s)&&c;i++){
    if(getopnum(s[i])){
        in(getopnum(s[i]),&a);
    }
    if(getclnum(s[i])){
        if(!outis(getclnum(s[i]),&a)){
            c=0;
        }
    }
}
if(c!=0){
    printf("1\n");
}else printf("0\n");
return 0;
}
