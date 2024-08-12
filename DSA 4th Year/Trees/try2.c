#include <stdio.h>

int main()
{
    int arr[][4] = {{2, 2, 3,8},
                    {2, 5, 6,8},
                    {2, 8, 9,8},
                    {2, 8, 9,8}};
    // int arr[][3] = {{1, 2, 3},
    //                 {4, 5, 6},
    //                 {7, 8, 9}};
    int rows = 4;
    int cols = 4;

    // Assuming the array is a square matrix
    if (rows != cols)
    {
        printf("Matrix is not square, diagonal multiplication is not possible.\n");
        return 1;
    }
     int i=0,j=0;
     int ans=1;
        while(j<cols)
        {
            int temp=j;
            int temp2=i;
            ans=1;
           while (temp2>=0 && temp<cols )
           {
               ans=ans*arr[temp2--][temp++];               
           }
           if(i<rows-1) i++;
           else if(i==rows-1) j++;
        //    printf("%d %d\n",i,j);
        printf("%d\n",ans);
        }
        
    return 0;
}
