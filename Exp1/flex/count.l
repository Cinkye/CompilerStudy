%{ 
#include "stdio.h" 
#include "stdlib.h" 
void print();                           
int main(int argc,char** argv);       
int num_digit=0,num_letter=0,num_enter=0; 
%} 
DIGIT [0-9] 
LETTER [A-Za-z] 
   
%% 

{DIGIT} {num_digit++;} 
{LETTER} {num_letter++;}
\n {num_enter++;} 
. {/*其它字符不作处理*/} 

%% 
int main(int argc, char** argv)
{ 
yyin=fopen("test","r"); 
yylex(); 
printf("num=%d,letter=%d,enter=%d", num_digit,num_letter,num_enter);
system("PAUSE");
return 0;
} 
int yywrap()
{
return 1;
} 

