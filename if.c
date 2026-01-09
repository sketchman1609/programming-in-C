// 1. What will be the output of this program
// It will be "i am 10" because, in if statement there is no '==' there is only '=' that means value of 'a' is non-zero so it is true.That is why it returned 'i am 11"
#include <stdio.h>
int main()
{
    int a = 10;
    if (a = 11)
        printf("i am 11");

    else
        printf("i am not 10");
    return 0;
}

// 2. Write a program to determine whether a student has passed or failed.
// To pass, a student requires a total of 40% and at least 33% in each subject.
// Assume there are three subjects and take the marks as input from the user

#include <stdio.h>

int main()
{
    printf("TO PASS THE EXAM A , B AND C YOU WILL NEED MINIMUM 33%%.\n");

    int a;
    printf("input your exam a percentage: ");
    scanf("%d", (a/100)*100);
    // int b;
    // printf("input your exam b percentage:");
    // scanf("%d", &b);
    // int c;
    // printf("input your exam c percentage:");
    // scanf("%d", &c);

    if (a > 33)
        printf("you pass the exam  a.\n");

    else if (a < 33)

        printf("you have failed the exam a.\n");

    else if (a == 33)

        printf("you have barely pass the exam a\n");

    if (b > 33)
        printf("you pass the exam b .\n");

    else if (b < 33)

        printf("you have failed the exam b.\n");

    else if (b == 33)

        printf("you have barely pass the exam b.\n");

    if (c > 33)
        printf("you pass the exam c.\n");

    else if (c < 33)

        printf("you have failed the exam c.\n");

    else if (c == 33)

        printf("you have barely pass the exam c.\n");

    return 0;
}

// i misunderstood the question but code above here will work 




// retrying the
//  2. Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user


#include <stdio.h>

int main()
{
    printf("YOU NEED MINIMUM 33 MARKS IN EACH EXAM TO PASS AND AT LEAST 40%% TOTAL TO PASS THE EXAM \n");

    int a , c , b;
    printf("enter the marks of the exam A :\t");
    scanf("%d", &a);
    printf("enter the marks of the exam B :\t");
    scanf("%d", &b);
    printf("enter the marks of the exam C :\t");
    scanf("%d", &c);
    
    if (a < 33 || b < 33 || c < 33)
        printf("you faild the class");

    int Total = a + b + c;
    printf("the total you're marks is:%d\n ", Total);

    int persentage = (Total * 100) / 300;
    printf("the persentage of you're marks is: %d %% \n", persentage);

    if (persentage >= 40)
        printf("you have passed the class");

    else
        printf("you have failed the class");
}


/*
3. Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include<stdio.h>

int main(){

    int income;
    printf("entre your annual income:\n");
    scanf("%d" , &income);
    
    if (income<250000)
    {
        printf("your do not have to pay any income tax");
    }
    else if (income>=250000 && income<500000)
    {
        printf("you will ahve to pay 5%% of income tax\n which is %d", (income*5)/100);
    }
    else if (income>=500000 && income<1000000)
    {
        printf("YOU WILL HAVE TO PAY 20%% OF INCOME TAX\n which is %d", (income*20)/100);
    }
    else
    {
        printf("you will ahve to pay 30%% of income tax\n which is %d", (income*30)/100);
    }
    
    
return 0;

}
        

// 4. Write a program to find whether a year entered by the user is a leap year or not.Take year as an input from the user.

#include<stdio.h>

int main(){

    int year;
    printf("enter year:\n");
    scanf("%d", &year);

    if (year%400==0)
    {
        printf("%d is a leap year", year);
    }

    else if (year%100==0)
    {
        printf("%d is not a leap year", year);

    }
    else if (year%4==0)
    {
        printf("%d is a leap year",  year);

    }
    else{
        printf("%d ia not a leap year", year);
    }


return 0;

}


    
// 5. Write a program to determine whether a character entered by the user is lowercase or not


#include <stdio.h>

int main()
{

    char c1;
    printf("entre a character:\n");
    scanf("%c", &c1);

    if (c1 >= 'a' && c1 <= 'z')
    {
        printf("%c given character is in lower case.", c1);
    }
    else
    {
        printf("%c is in uppercase.", c1);
    }

    return 0;
}

// 6. Write a program to find greatest of four numbers entered by the user.

#include<stdio.h>

int main(){

    int a , b , c , d;
    printf("enter the first number:\n");
    scanf("%d" , a);
    printf("enter the second number:\n");
    scanf("%d" , b);
    printf("enter the third number:\n");
    scanf("%d" , c);
    printf("enter the fourth number:\n");
    scanf("%d" , d);

    if (a>=b && a>=c && a>=d)
    {
        printf("%d is the largest number" ,a);
    }
    else if (b>=a && b>=c && b>=d)
    {
        printf("%d is the largest number", b);
    }
    else if (c>=a && c>=b && c>=d)
    {
        printf("%d is the largest number", c);
    }
    else
    {
    printf("%d is the largest number", d);
    }
    
return 0;

}

