/*                             Arrays
� Arrays is defines as collection of similar data types.Declaration of arrays is as follows int A[ 5 ] ;
� Each location can be accessed as A[0] = 27;
                                    A[1] = 10;
� The array will be created in the main memory if inside a function
� The Declaration and Initialisation of array is as follows

 Int B[5] = { 2, 9, 6, 8, 10 } ;
� You can also access each element of array using for loop

*/


#include <stdio.h>

int main()
{
    int arr[]={2,4,6,8,9,11,13};  // Declaration and Initialization of array
    int i;

    for(i=0; i<7; i++){ // Accessing each element of array using for loop
        printf("%d  ", arr[i]); // 2  4  6  8  9  11  13
    }

    return 0;
}
