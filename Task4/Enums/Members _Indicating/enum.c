#include <stdio.h>
enum arithmetic_operations{

    ADD = '+',
    SUB = '-',
    MUL = '*',
    DIV = '/',
    AND = '&',
    OR = '|',
    NOT = '!'
};
int main(){
enum arithmetic_operations operation;
int x,y,res;
printf("Enter frist operand1 \n ");
scanf("%d",&x);
printf("Enter frist operand2\n");
scanf("%d",&y);
printf("Enter operation\n");
scanf("%u",&operation);
switch(operation){
    case '+' : 
         res=x+y;
         printf ("resulat equal %d" ,res);
         break;
    case '-' : 
         res=x-y;
         printf ("resulat equal %d" ,res);
         break; 
    case '*': 
         res=x*y;
         printf ("resulat equal %d" ,res);
         break;  
    case '/': 
         res=x/y;
         printf ("resulat equal %d" ,res);
         break;   
    case '&': 
         res=x&y;
         printf ("resulat equal %d" ,res);
         break; 
    case '|' : 
         res=x|y;
         printf ("resulat equal %d" ,res);
         break;   
    case '!' : 
         res =!x;
         printf ("resulat equal %d" ,res);
         break;  
    default:
            printf("Invalid operation");
            break;
}

}