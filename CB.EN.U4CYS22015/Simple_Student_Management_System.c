//Student Management System 

#include<stdio.h> 

#include<string.h> 

#define MAX_STUDENTS 3 

  

enum Score{ 

  A,B,C,D,F 

}; 

  

typedef struct{ 

        char name[30]; 

        int age; 

        enum Score grade; 

         

    }Student; 

     

void addStudent(Student students[],int count){ 

     if(count > MAX_STUDENTS){ 

          printf("Maximum number of students reached"); 

          return;     

    } 

    char score; 

     

    scanf("%s", students[count].name); 

    scanf(" %d",&students[count].age); 

    scanf("%c",&score); 

     

        if (score == 'A'){ 

          students[count].grade = A; 

        } 

        else if (score == 'B'){ 

          students[count].grade = B; 

        } 

        else if (score == 'C'){ 

          students[count].grade = C; 

        } 

        else if (score == 'D'){ 

          students[count].grade = D; 

        } 

        else if (score == 'F'){ 

          students[count].grade = F; 

        } 

        else{ 

          printf("Unknown\n"); 

          return; 

        } 

  

    printf("Student added successfully."); 

     

} 

  

void displayStudents(Student students[],int count){ 

    if(strlen(students[count].name) <= 0){ 

        printf("No students"); 

        return; 

    } 

     

    printf("List of students:\n"); 

    for(int i=0;i<count;i++){ 

        printf("Student %d\n",(i+1)); 

        printf("Name: %s\n",students[i].name); 

        printf("Age: %d\n",students[i].age); 

        printf("Score: "); 

          switch(students[i].grade){ 

              case A: 

                printf("A\n"); 

              case B: 

                printf("B\n"); 

              case C: 

                printf("C\n"); 

              case D: 

                printf("D\n"); 

              case F: 

                printf("F\n"); 

              default: 

                printf("Unknown\n");     

          } 

          printf("\n"); 

    }    

} 

  

void findHighestScoredStudent(Student students[], int count){ 

    if(count==0){ 

        return ; 

    } 

    int highscore = students[0].grade; 

    int s; 

    for(int i=1;i<count;i++){ 

        if(students[i].grade < highscore){ 

            highscore = students[i].grade; 

            s = i; 

        } 

    } 

    printf("Highest-scoring student:\n"); 

    displayStudents(students,highscore); 

} 

  

int main(){ 

    int choice; 

    int count=0; 

    Student student[MAX_STUDENTS]; 

     

  do{ 

        scanf("%d",&choice); 

    switch(choice){ 

               

      case 1: 

         if (count < MAX_STUDENTS){ 

            addstudent(student,count); 

            count++; 

         } 

         else{ 

            printf("Maximum number of students reached.\n"); 

         } 

         break; 

                 

      case 2: 

      if (count==0) 

      { 

        printf("No students to display!"); 

      } 

      else{ 

        for ( int j = 0; j < MAX_STUDENTS; j++) 

        { 

          displayStudents(student,count); 

        }   

      } 

         break;      

      case 3: 

        findHighestScoredStudent(student,count); 

                break;           

      case 4: 

        printf("Exiting the program. Thank you for using our system!"); 

                break;             

      default: 

                printf("Nothing to do :-) !!"); 

    } 

          printf("\n");     

    }while(choice!=4); 

    return 0; 

} 