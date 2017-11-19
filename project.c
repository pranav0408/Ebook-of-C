#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int i,cc;
char move;
char ch[100];
char c[99];
char command[100];
char input[10];


int main()
{ system("cls");
  printf("\n*\t\t\t\t\t\t\t************************************************\t\t\t\t\t\t*\n");
  printf("\n*\t\t\t\t\t\t\t************************************************\t\t\t\t\t\t*\n");
  printf("\n*\t\t\t\t\t\t\t                     WELCOME                    \t\t\t\t\t\t*\n");
  printf("\n*\t\t\t\t\t\t\t************************************************\t\t\t\t\t\t*\n");
  printf("\n*\t\t\t\t\t\t\t************************************************\t\t\t\t\t\t*\n\n\n\n");
  sleep(2);
FILE *p;
AA:
system("cls");
printf("\n*\t\t\t\t\t\t**************************************************************       \t\t\t\t\t*\n");
printf("\n*\t\t\t\t\t\t**************************************************************       \t\t\t\t\t*\n");
printf("*\t\t\t\t\t\t->Enter 0 to change Background and Foreground colour \t\t\t\t                        *\n");
printf("*\t\t\t\t\t\t->Enter 1 to read about the C language\t\t\t\t                                        *\n");
printf("*\t\t\t\t\t\t->Enter 2 to see examples of C program\t\t\t\t                                        *\n");
printf("*\t\t\t\t\t\t->Enter 3 to open editor and test your custom program\t\t\t\t                        *\n");
printf("*\t\t\t\t\t\t->Enter 4 to save your custom program into the workbook            \t\t\t\t        *\n");
printf("*\t\t\t\t\t\t->Enter 5 to see source code of the program                        \t\t\t\t        *\n");
printf("\n*\t\t\t\t\t\t**************************************************************     \t\t\t\t\t*\n");
printf("\n*\t\t\t\t\t\t**************************************************************     \t\t\t\t\t*\n");

scanf("%d",&cc);
system("cls");
switch (cc)
{
case 0:
EE:

      system("cls");
      printf("\n\n*\t0=Black  8=Gray        *\n");
      printf("*\t1=Blue   9=Light Blue      *\n");
      printf("*\t2=Green  A=Light Green     *\n");
      printf("*\t3=Aqua   B=Light Aqua      *\n");
      printf("*\t4=Red    C=Light Red       *\n");
      printf("*\t5=Purple D=Light Purple    *\n");
      printf("*\t6=Yellow E=Light Yellow    *\n");
      printf("*\t7=White  F=Bright White    *\n");
      printf("\n\n\n\tExample:\n");
      printf("\t\tIf you want to set background to be Bright White and Foreground to be Light Red\n");
      printf("\t\tthen enter FC \n");
      scanf("%s",input);
      char col[]="color ";
      strcat(col,input);
      system(col);
      printf("\n\nEnter 1 if you want to go to the main menu\n");
      printf("Enter 2 if you want to change the color again\n");

      scanf("%d",&i);
      if(i==1)
        goto AA;
     else if(i==2)
        goto EE;
      break;
case 1:
CC:
      system("cls");
      printf("=====================================================================\n");
      printf("=====================================================================\n");
      printf("=====================================================================\n");
      printf("***                           TOPICS                              ***\n");
      printf("=====================================================================\n");
      printf("=====================================================================\n");
      printf("=====================================================================\n");
      printf("Enter A to read-> Program Structure\n");
      printf("Enter B to read-> Basic Syntax\n");
      printf("Enter C to read-> Data Types\n");
      printf("Enter D to read-> Variable\n");
      printf("Enter E to read-> Constants\n");
      printf("Enter F to read-> Storage Classes\n");
      printf("Enter G to read-> Operators\n");
      printf("Enter H to read-> Loops\n");
      printf("Enter I to read-> Functions\n");
      printf("Enter J to read-> Arrays\n");
      printf("Enter K to read-> Pointers\n");
      printf("Enter L to read-> Strings\n");
      printf("Enter M to read-> Input And Output\n");
      printf("Enter N to read-> File Handeling\n");
      printf("Enter O to read-> Preprocessors\n");
      printf("Enter P to read-> Header File\n");

      scanf("%s",&move);
         printf("\n\n\n\n");

      switch (move)
      {
        case 'A':
        system("cls");
          p=fopen("1Program_Structure.txt","r");
        while(!feof(p))
         {
            fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
            printf("%s",ch);

              }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
      break;

    case 'B':
          system("cls");
          p=fopen("2Basic_Syntax.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

         }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
      break;

    case 'C':
          system("cls");
          p=fopen("3Data_Types.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;

    case 'D':
          system("cls");
          p=fopen("4Variable.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;

    case 'E':
          system("cls");
          p=fopen("5Constants.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;

    case 'F':
          system("cls");
          p=fopen("6Storage_Classes.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;;

    case 'G':
          system("cls");
          p=fopen("7Operators.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;;

    case 'H':
          system("cls");
          p=fopen("8Loops.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;;

    case 'I':
          system("cls");
          p=fopen("9Functions.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;;

    case 'J':
          system("cls");
          p=fopen("10Arrays.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;;

    case 'K':
          system("cls");
          p=fopen("11Pointers.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;;

    case 'L':
          system("cls");
          p=fopen("12Strings.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;;

    case 'M':
          system("cls");
          p=fopen("13In_Out.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;;

    case 'N':
          system("cls");
          p=fopen("14File_Han.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;;

    case 'O':
          system("cls");
          p=fopen("15Preprocessors.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;;

    case 'P':
          system("cls");
          p=fopen("16Header_file.txt","r");
        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
           if(strcmp(ch,"//end")==0)
             break;
          printf("%s",ch);

        }
        fclose(p);
        printf("\nEnter 1 to go back to topics\n");
        printf("Enter 2 to go back to main menu\n");
        scanf("%d",&i);
        if(i==1)
         goto CC;
         else if (i==2)
         goto AA;
        break;
      }
       break;


case 2:
FF:   system("cls");
      printf("*                        ************************************************************************                                   *\n");
      printf("*                               fact.c             ->Factorial of a number                                                          *\n");
      printf("*                               factn.c            ->Factorial of all number upto a limit                                           *\n");
      printf("*                               str.c              ->Sting concatination                                                            *\n");
      printf("*                               prime.c            ->Check whether a number is prime or not                                         *\n");
      printf("\n\n*Enter a file name from above list or the name of file which you may have saved using option 4 from main menu with extension to view it*\n\n");
      scanf("%s",&command);
      system("cls");
      p=fopen(command,"r");
    while(!feof(p))
     { fgets(ch, 99,(FILE*) p);
       if(strcmp(ch,"//end")==0)
         break;
      printf("%s",ch);

    }
    fclose(p);

ZZ: printf("\nEnter 1 if you want to compile the code entered\n");
    printf("\nEnter 2 if you want to edit the entered code\n");

    scanf("%d",&i);
   char cmd[]="gcc ";
    strcat(cmd,command);
  if(i==1)
  {  int temp;
    if(system(cmd)==0)
       { printf("COMPILATION SUCCESSFUL!\n\n\n");
       printf("Enter 1 to execute the program\n");
        scanf("%d",&temp);
        if(temp==1)
          system("a");
        }
    else
        printf("\n\nCOMPILATION FAILED!\n");

  }
  if(i==2)
  {  char edit[]="notepad ";
     strcat(edit,command);
     system(edit);
     printf("-------------------------------------");
     printf("-------------------------------------");
  goto ZZ;
}
    printf("\nEnter 1 to go back to Examples \n");
    printf("Enter 2 to go back to main menu\n");
    scanf("%d",&i);
    if(i==1)
     goto FF;
     else if (i==2)
     goto AA;
  break;


case 3:
BB:
  system("cls");
  p=fopen("filehan.c","w");
  if(p==NULL)
  {  printf("Failed\n"); break; }


  printf("\n");
  printf("\n");
  printf("------------");
  printf("INSTRUCTIONS");
  printf("------------\n");
  printf("Firstly, Enter your custom program\n");
  printf("Then Enter @ to stop and save file\n");
  printf("\n");
  printf("\n");
  while(c != "@")
  {
    gets(c);
    if(strcmp(c,"@")==0)
    { fputs("//end",p);
      break;
    }
    fprintf(p,"%s\n",c);


  }
  fclose(p);



A:
  printf("\nEnter 1 if you want to compile the code entered\n");
  printf("\nEnter 2 if you want to edit the entered code\n");

  scanf("%d",&i);
if(i==1)
{  int temp;
  system("gcc -c filehan.c");
  if(system("gcc -o exec filehan.o")==0)
     { printf("COMPILATION SUCCESSFUL!\n\n\n");
     printf("Enter 1 to execute the program\n");
      scanf("%d",&temp);
      if(temp==1)
        system("exec");
      }
  else
      printf("\n\nCOMPILATION FAILED!\n");

}
if(i==2)
{
   system("notepad filehan.c");
   printf("-------------------------------------");
   printf("-------------------------------------");
goto A;
}

 printf("\n\n");
 printf("Enter 1 if you want to go back to main menu\n");
 printf("Enter 2 if you want to execute more C program\n");
 p=fopen("filehan.o","w");
 fclose(p);
 scanf("%d",&i);
 if(i==1)
  { goto AA;}
else if(i==2)
  { goto BB;}
  break;

case 4:
DD:
    system("cls");
    printf("Enter file name with .c extention to bes saved\n");
    scanf("%s",&command);

      p=fopen(command,"r");
      fclose(p);

      p=fopen(command,"w");
      char cp[100];
      strcpy(cp,command);
      if(p==NULL)
      {  printf("Failed\n"); break; }


      printf("\n");
      printf("\n");
      printf("------------");
      printf("INSTRUCTIONS");
      printf("------------\n");
      printf("Firstly, Enter your custom program\n");
      printf("Then Enter @ to stop and save file\n");
      printf("\n");
      printf("\n");
      while(c != "@")
      {
        gets(c);
        if(strcmp(c,"@")==0)
        { fputs("//end",p);
          break;
        }
        fprintf(p,"%s\n",c);


      }
      fclose(p);



    Z:
      printf("\nEnter 1 if you want to compile the code entered\n");
      printf("\nEnter 2 if you want to edit the entered code\n");

      scanf("%d",&i);

      strcat(cmd,cp);
    if(i==1)
    {  int temp;
      if(system(cmd)==0)
         { printf("COMPILATION SUCCESSFUL!\n\n\n");
         printf("Enter 1 to execute the program\n");
          scanf("%d",&temp);
          if(temp==1)
            system("a");
          }
      else
          printf("\n\nCOMPILATION FAILED!\n");

    }
    if(i==2)
    {  char edit[]="notepad ";
       strcat(edit,command);
       system(edit);
       printf("-------------------------------------");
       printf("-------------------------------------");
    goto Z;
    }
     printf("\n\n");
     printf("Enter 1 if you want to go back to main menu\n");
     printf("Enter 2 if you want to add more C program\n");
     scanf("%d",&i);
     if(i==1)
      { goto AA;}
    else if(i==2)
      { goto DD;}
     break;

  case 5:
      system("cls");
      printf("************************************************************************************************\n");
      printf("*******                                 SOURCE CODE                                      *******\n");
      printf("************************************************************************************************\n");
      p=fopen("project.c","r");
      while(!feof(p))
      { fgets(ch, 99,(FILE*) p);
        if(strcmp(ch,"//end")==0)
        break;
        printf("%s",ch);

      }
      fclose(p);
      printf("Enter 1 to go back to main menu\n");
      scanf("%d",&i);
      if(i==1)
      goto AA;
      break;
  }
return 0;
}
