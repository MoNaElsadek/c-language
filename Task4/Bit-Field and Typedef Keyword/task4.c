#include <stdio.h>
 
 
 struct student_info{
    int roll_number;//4-bit 
    int age; //8-bit 
    int marks; //3-bit 
    char address [30]; 
    char name [20];
  };

  void Prints_info(struct student_info students);

int main(){

  struct student_info student [15];
  for (int i =0; i<15;i++){
    printf("student_info for student %d \n",i+1);
    printf("enter roll_number\n ");
    scanf("%d",&student[i].roll_number);
    printf("enter age\n ");
    scanf("%d",&student[i].age);
    printf("enter marks\n ");
    scanf("%d",&student[i].marks);
    printf("enter name\n ");
    scanf("%s",student[i].name);
    printf("enter address\n");
    scanf("%s",student[i].address);
  }
   
    printf("Student info:\n");
    for (int i = 0; i < 15; i++) {
        Prints_info(student[i]);
    }


     printf("Size of struct student_info : %llu bytes\n", sizeof(struct student_info ));
    
}
 void Prints_info(struct student_info students){

        printf("roll_number is %d \n",students.roll_number);
        printf("age is %d \n",students.age);
        printf("marks is %d\n",students.marks);
        printf("address is %s\n",students.address);
        printf("name is %s\n",students.name);
  }