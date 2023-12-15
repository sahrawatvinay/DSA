An array is a series of elements of the same type placed in contiguous memory locations 
that can be individually referenced by adding an index to a unique identifier.

if an array is of int type and lets say there are 5 elements, and lets assume that 1st element is placed at address 100.
then the next address will be 104, 108, 112 ....
beacause size of int is 4 bytes.

We can access the elements of an array using index and it starts from 0

Implementation-
Declaring an array:
1. int arr[10]; //garbage value in all 10. "arr" points to 1st mem loc in array.
lets say the starting address is 100
Examples:
1. int foo [5]; //contains garbage values at all 3 locations
2. int foo [5] = { 16, 2, 77, 40, 12071 };
3. int bar [5] = { 10, 20, 30 };  //10 20 30 0 0
4. int baz [5] = { };  //0 0 0 0 0
5. int baz [10000] = { 0 };  //0 0 0 0 0
6. int baz [1000] = { 1 }; //this wont initialize the whole array with 1, this will only work with 0.
7. int num[5]={ [0 . . . 4 ] = 3 };               // num = { 3, 3, 3, 3, 3}
8. int num[ ]={ [0 . . . 4 ] = 3 };               // num = { 3, 3, 3, 3, 3}



Calculating the address of third element-
int arr[3] = 100 + (3*4) = 112  //start_address_of_array + (index_jiski_nikalni * array_datatype_size); 


Calculating the size of an array-
int arr[100] = {5,6,7};   //5 6 7 0 0 0 0 ....... 0
size = sizeof(arr)/sizeof(int);  //this has a problem because in the above ex. we are only interested in the 3 elements 
not the complete array. tabhi print array ke sath size bhejte hai void wale fn me array print


initiazing the array with arr[size] is bad practise. where the size is a variable entered by user. 
int arr[100000] is still a better practise than this.


* when we pass an array as an argument to a function, it does not create a copy of that array, rather, the address of array is being 
passed, and if we try to do any updations to that array in the function the value of actual array also gets updated. but in case of variables
it is not so, a copy is being created in case of variables and the values does not get altered if changed in the called fn.