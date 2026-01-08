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

