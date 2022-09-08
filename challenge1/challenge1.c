#include <stdio.h>
#include <stdlib.h>

int main()
{
	char firstname[10], lastname[10], sexe[10], phonenumber[10] , age[3] ;

    printf("Enter your firstname : \n");
    scanf("%s",firstname);

    printf("Enter your lastname : \n");
    scanf("%s", lastname);

    printf("What is your sexe : \n");
    scanf("%s", sexe);

    printf("Enter your age : \n");
    scanf("%s", age);

    printf("Enter your phonenumber : \n");
    scanf("%s", phonenumber);

    printf("Hello %s %s, your sexe is %s, you have %s years old, and your phone number is %s",firstname, lastname, sexe, age, phonenumber);

}
