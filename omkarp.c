
#include<stdio.h>
int main()
{
 int  roll_no[30],i, j, n, k,temp, insert, choice, del;
 do
 {
   printf("\n==MENU==\n");
   printf("\n 1.Insert No. Students \n 2.Sort In Ascending order and intermediate passes \n 3. Display Roll No \n 4. exit \n");
   printf("Enter your choice:- ");
   scanf("%d",&choice);
 
   switch(choice)
   {
    case 1: //Insert elements
      printf("Enter the size of the Student:- ");
      scanf("%d",&n);
      printf("Enter the Roll No: ");
      for(i=0;i<n;i++)
      
      {
        scanf("%d",&roll_no[i]);
      }
      break;
     
      case 2: 
      
      
        for(i=0;i<n;i++)
      {
         for(j=0;j<n-1;j++)
      {
           if(roll_no[j]>roll_no[j+1])
       {
                temp=roll_no[j];
                roll_no[j]=roll_no[j+1];
                roll_no[j+1]=temp;
             

        }
     }
     printf("\nintermeadiate passes");
     for(k=0;k<n;k++)
     {
     printf("\t%d",roll_no[k]);
     }
      }
      
      break;
      case 3:
      printf("roll_no:");
      for(i=0;i<n;i++)
      {
      printf("\t%d",roll_no[i]);
      }
      
      break;
      case 4:
      printf("\nexiting the program..\n");
      break;
      }
      
      }while(choice!=4);
      return 0;
      }
       /* NAME=OMKAR PAWAR
       ROLL_NO=117
       
       student@TCOERCL-VI-07:~$ cc omkarp.c
student@TCOERCL-VI-07:~$ ./a.out

==MENU==

 1.Insert No. Students 
 2.Sort In Ascending order and intermediate passes 
 3. Display Roll No 
 4. exit 
Enter your choice:- 1
Enter the size of the Student:- 5
Enter the Roll No: 10
9
8
11
12

==MENU==

 1.Insert No. Students 
 2.Sort In Ascending order and intermediate passes 
 3. Display Roll No 
 4. exit 
Enter your choice:- 2

intermeadiate passes	9	8	10	11	12
intermeadiate passes	8	9	10	11	12
intermeadiate passes	8	9	10	11	12
intermeadiate passes	8	9	10	11	12
intermeadiate passes	8	9	10	11	12
==MENU==

 1.Insert No. Students 
 2.Sort In Ascending order and intermediate passes 
 3. Display Roll No 
 4. exit 
Enter your choice:- 3
roll_no:	8	9	10	11	12
==MENU==

 1.Insert No. Students 
 2.Sort In Ascending order and intermediate passes 
 3. Display Roll No 
 4. exit 
Enter your choice:- 4

exiting the program..
student@TCOERCL-VI-07:~$ 

       */
