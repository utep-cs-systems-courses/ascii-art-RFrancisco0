
#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

void print_arrow(int row)
{
  int i,j,k,rows,count,temp;
  printf("Enter number of rows:\n");
  scanf("%d",&rows);

  for (i = 1; i <= rows; i++)
    {
      for (j = 1; j <= rows; j++)
	{
	  printf(" f");
	}
      printf("\n");
    }

  count=1;
  temp=1+(rows-1)*2;
  for(i=1;i<=rows;i++)
    {
      for(j=1;j<=count;j++)
	{
	  printf("  ");

	}
      for(k=1;k<=temp;k++)
	{
	  printf("\033[0;31m");
	  printf("p ");
	}
      count++;
      temp-=2;
      printf("\n ");
    }

  for(i=1;i<=rows;i++)
    {
      for(j=1;j<=i;j++)
	{
	  printf("* ");

	}

      printf("\n");
    }
  for(i=rows-1;i>=1;i--)
    {
      for(j=i;j>=1;j--)
	{
	  printf("$ ");
	}
      printf("\n");
    }
}
  
