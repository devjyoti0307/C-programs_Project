#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i, n,*data;
      printf(" elements you want to add : ");
      scanf("%d", &n);
          data = (int*) calloc(n, sizeof(int));
      if(data == NULL)
      {
            printf(" Memory is Not Allocated.");  
            exit(0);
      }
      printf("\n");
         for(i = 0; i < n; ++i)
      {
            printf("Enter Number %d: ", i + 1);
            scanf("%d", data + i);
      }
      for(i = 1; i < n; ++i)
      {
            if(*data < *(data + i))
                  *data = *(data + i);
      }
      printf("\nLargest Element = %d", *data);
      return 0;
}