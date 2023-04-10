#include <stdio.h>

 typedef struct {
    float real;
    float imag;
    }complex;
complex add(complex n1, complex n2);
int main(){
  complex num1,num2,res;
  printf("Enter real part of frist number\n");
  scanf("%f" ,&num1.real);
  printf("Imaginary Part of frist number\n");
  scanf("%f", &num1.imag);
  printf("Enter real part of second number\n");
  scanf("%f" ,&num2.real);
  printf("Imaginary Part of second number\n");
  scanf("%f", &num2.imag);


   res= add(num1,num2);
    printf("Sum = %.1f + %.1fi", res.real, res.imag);


}

 complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
  
}