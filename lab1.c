#include <stdio.h>
int main(){
/*
//#1
 char operatorr;//intizizes opertatorr variable as a character
  float first, second;//initizalized using float to make sure when we divide it wont error out because of decimal points, and give us correct answer
  printf("Enter an operator (+, -, *, /): ");//Prints the operators for the client
  scanf("%c", &operatorr);//Gets the input from client and sets it to the operatorr variable
  printf("Enter two Numbers: ");//Prints the string
  scanf("%f %f", &first, &second);//Gets the input of 2 numbers which are float type

  switch (operatorr) {//using a switch to determine which action should be done based on operator
    case '+'://if its adding
      printf("%.1f + %.1f = %.1f", first, second, first + second);//Adds the first and second numbers together to 1 decimal point
      break;//Breaks the current loop case
    case '-'://if subtracting
      printf("%.1f - %.1f = %.1f", first, second, first - second);//Subtracts the first and second variable together to 1 decimal point
      break;//Breaks the current loop case
    case '*'://If multiplying
      printf("%.1f * %.1f = %.1f", first, second, first * second);//Multiplys the first and second variable together to 1 decimal point
      break;//Breaks the current loop case
    case '/'://If dividing
      printf("%.1f / %.1f = %.11f", first, second, first / second);//Divides the first and second variable together to 11 decimal points. I wanted more accuracy when dividing.
      break;//Breaks the current loop case
    // operator doesn't match any case constant
    default://If nothing else "catches" will default to this
      printf("Error! operator is not correct");//Error messege to print if incorrect operator was given
  }
  
  //#2

        int testInteger;
        printf("Give me a height you want me to cataegorize in centimeters: ");
        scanf("%d", &testInteger);  
        printf("Your Height is = %d cm",testInteger);
        if (testInteger > 100){
          printf("\nYour Tall!\n");}
        else if (testInteger > 50){
          printf("\nYour Medium\n");}
        else;{
          printf("\nYour Short\n");}
        return 0;
    */
        int limitt;//Defines variable limitt as an int
        printf("What number would you like me to scan up to?: ");//Prints the current string
        scanf("%d",&limitt);//Asks the user for the input that is a number and is then set to the variable limitt
        for(int count=2;count <= limitt;count++){//for loop that starts at 2 because prime numbers are greater than 1, and will run until the count is greater than the user defined limit. and add 1 to count each iteration.
          //printf("%d \n",count); Tester
          int PrimeNumbers = 1;//intital value set to 1
          for (int lower = 2; lower < count; lower++) {// for loop which will start at 2 again but will go until lower is greater than the current count, and add 1 to every iteration to lower.
            if (count % lower == 0) {//If the count mod lower is equal to zero
            PrimeNumbers = 0;//sets prime number to 0 which means no its not a prime number
            break;//breaks the loop
          }
        }
          if (PrimeNumbers == 1) {//if the number is a prime number
            printf("%d \n ", count);//prints the number with a new line character behind it.
          }
          }

  
    return 0;
}