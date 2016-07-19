#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define num_personel 5
#define name_length 30
#define passwordLength 15


int password();

void searchName(int i);


int main()
{   char personel[num_personel][name_length]={"Mohamed","Ahmed","Maher","Noha","Hend"};
    char Salary[num_personel]={1000,1100,1200,1021,1023};
    int k=1;
    k=password();

    while(k==0)
    {
    printf("lskdjfkj");
    k=1;
    }



    return 0;
}

int password()
{   int i=0,k=1;
    char  pass[passwordLength]="okay123";
    char passcorrect[passwordLength];
    do
    {
    printf("Enter the Password : ");
    scanf("%s",passcorrect);
    k=strcmp(pass,passcorrect);
    if (k==0) break;
    if (i<2) printf("\nWrong password try again\n\n");

    i++;
    }while(i<3);
    if (k!=0) printf("\nSorry you didn't enter the correct passward");
    return k;
}
