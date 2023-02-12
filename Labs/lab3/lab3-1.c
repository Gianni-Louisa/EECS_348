#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{

/*
    #define ROWS 12
    #define COLUMNS 1

    float lst[ROWS][COLUMNS];

  // Declare a file pointer variable called file to access and read the file
  FILE *file;

  // Attempt to open the file named file.txt for reading
  file = fopen("file.txt", "r");

  if (file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }


  int row = 0;


  while (!feof(file))
  {
 
    if (ferror(file))
    {
      printf("Error reading file.\n");
      return 1;
    }

    for (int i = 0; i < COLUMNS; i++)
    {
     
      if (fscanf(file, "%f", &lst[row][i]) == EOF)
        break;
    }

    row++;
   
    if (row == ROWS) break;
  }

  
  fclose(file);
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLUMNS; j++)
      printf("%.2f ", lst[i][j]);
    printf("\n");
  }


*/






char months[12][200]={"January","Febuary","March","April","May","June","July","August","September","October","November","December"};
 float lst[12] = {23458.01,40112.00, 56011.85, 37820.88, 37904.67, 60200.22, 72400.31, 56210.89, 67230.84, 68233.12, 80950.34, 95225.22};
  float og[12] = {23458.01,40112.00, 56011.85, 37820.88, 37904.67, 60200.22, 72400.31, 56210.89, 67230.84, 68233.12, 80950.34, 95225.22};

  printf("\n Monthly Sales report for 2022 \n \n");
  for(int loop = 0; loop < 12; loop++){
    printf(months[loop]);
      printf(" %.2f \n" , lst[loop]);
  }


    int i;
    // variable to store the minimum
    // and maximum element
    float min = lst[0], max = lst[0];
    // Traverse the given lst
    for (i = 0; i < 12; i++)
    {
        // If current element is smaller
        // than min then update it
        if (lst[i] < min)
        {
            min = lst[i];
        }
        // If current element is greater
        // than max then update it
        if (lst[i] > max)
        {
            max = lst[i];
        }
    }
    printf("\nSales Summary: \n \n");
    // Print the minimum and maximum element
    printf("minimum sales: %.2f", min);
    printf("\n");
    printf("maximum sales: %.2f", max);
    printf("\n");
    float total;
    for(int j = 0; j<12;j++){
        total += lst[j];
    }
    total = total/12;
    printf("Average sales: %.2f \n", total);
    



    printf("\n Six-Month Moving Average Report: \n \n");
    float total2;
    for(int alter = 0; alter < 7; alter++){
    total2 = 0;
    for(int j = (0+alter); j<(6+alter);j++){
        total2 += lst[j];
    }
    total2 = total2/6;
    printf(months[alter]);
    printf(" --> ");
    printf(months[alter+5]);
    printf(" %.2f  \n", total2);
    }
    // calculate max and minimum values and print them


    int g,h=11,k;
float temp=0.0f;

//float a[11] = {1.01,6.66,3.3,7.5,2.2,4.1,7.9,9.7,0.01,9.14,0.69};







printf("\n\nSales Report (Highest to Lowest) \n\n");

for(g=0;g<h;g++)
{
    for(k=0;k<h-g-1;k++)
    {
        if(lst[k]>lst[k+1])
        {
            temp=lst[k+1];//swaping element 
            lst[k+1]=lst[k];
            lst[k]=temp;
        }
    }
}
//printing output of program

for(g= 11; g >=0; g--) 
{
    

    int Index;

    for (int i = 0; i < 12; i++)
    {
     if (lst[g] == og[i])
     {
         Index = i;
         //printf("something");
         printf(months[Index]);
     }
    }
    

    printf(" %.2f   \n", lst[g]);
}

printf("\n\n");
return 0;

}