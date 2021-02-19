
#include<iostream>
using namespace std;


int main (){
    // int arr[4]={1,22,33,44};
    // int *p;
    // p=arr;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // ++*p;
    // cout<<*p<<endl;
    // cout<<p<<endl;;
    

    
}



// pointer simple program
// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int *p;
//      p=&a; 
//     cout<< p<<endl; // p valuesis adress of a => 0x7fff5a35a8ac
//     cout<<*p; // prints value stored in adress of a =>5
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int*p=&a;
//     int **q=&p;
//     cout<<*p<<endl;
//     cout<<p<<endl;
//     cout<<*(&p)<<endl;
//     cout<<q<<endl;
//     cout<<&p<<endl;
//     cout<<**q<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int *p=NULL;
//     int *p1=0;
//     if(!p){
//         cout<<"yes";
//     }
//     else
//     {
//         cout<<"false";
//     }
    
//     // cout<<p<<endl;
//     // cout<<*p<<endl;
//     // cout<<p1<<endl;
//     // cout<<*p1;
// }

// #include<iostream>
// using namespace std;
// int name( int arr[7])
// {
// //     cout<<" teh size of the name is : "<<sizeof(arr)<<endl; //when we want to finde array size using function it will retun 8 
//     cout<<"the size ofa array is :  " << sizeof(arr);
//     return 0;
// };
// int main(){
//     int arr1[]={9,2,3,3,4,5,6};
//     // cout<<"teh size ofa rray is :  " << sizeof(arr1);
//     name(arr1);
//     return 0;
// }

// array pointer's
// #include<iostream>
// using namespace std;
// int main(){
//     // int *p;
//     int arr[10];
//     cout<<"enter the array values = ";
//     for(int i=0; i<=3;i++){ 
//         cin>>arr[i];
//     }
// cout<<"teh adress of the arr is : "<<arr;
// return 0;
// }

// pointer declaration 
// #include<iostream>
// using namespace std;
// int main(){
//     int *p1,**p2,***p3,****p4,a;
//      a=10;
//     p1=&a;
//      p2=&p1;
//      p3=&p2;
//      p4=&p3;
//     cout<<p1<<endl;     //0x7fff5102f81c    //stores adrees of a as values 
//     cout<<*p1<<endl;    //10                //prints values of a 
//     cout<<p2<<endl;     //0x7fff5102f838    //stores adress of p1 
//     cout<<*p2<<endl;    //0x7fff5102f81c    //prints values of p1 (means adress of a stored in p1 as a value)
//     cout<<p3<<endl;     //0x7fff5102f830    //stores adress of p2 as a value
//     cout<<*p3<<endl;    //0x7fff5102f838    //prints the values of p2(means adress of p1 stored in p2 as a value )
//     cout<<p4<<endl;     //0x7fff5102f828    //so..on... this is how pointers works
//     cout<<*p4<<endl;    //0x7fff5102f830
// }

// we can change avlues through pointers
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *p;
//     p=&a;
// cout<<*p<<endl;  //10
// cout<<a<<endl;   //10
// //   the above both a and pointer p prints same value 10
// *p=30;
// // we can change the value of a through the pointer 
// cout<<*p<<endl;  //30
// cout<<a<<endl;   //30
// }

// we can chnage  tha values of i and j  usiing one pointer variable
// #include<iostream>
// using namespace std;
// int main(){
// int i=1,j=2;
// int* p;
//  p=&i;     // p pointes to location of i
// *p=3;      // the value of i is cganged
//  p=&j;     //again assing the adressof j to same epointer 
// *p=4;      // the value  of j is changed
// cout << i << " " << j << endl;  // 3  4
// }

// function pointers
// #include<iostream>
// using namespace std;
// int print(int x){
//     return x;
// }
// int main(){
//   cout<<&main<<endl;
// int (*func)(int);
// func=print;
// // cout<<print<<endl;
// cout<<func(5)<<endl;
//   cout<<&print;
// }
    
// we cants definde variable whose value is null
// #include<iostream>
// using namespace std;
// int main(){
//     // int a=null;
//     int a=null;
//     int *p=&a;
//     cout<<p<<endl;
//     cout<<*p;
// }

// relation betwin pointers and arrays. and pointer incriment 
// in c++ name of the arry contains the adress of first element in arrays
// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={11,22,33,44};
//     int *p;
//     p=array;     //hear adress of a[0] is equal to same as array adrss  we just simple declare array name.
//     cout<<p<<endl;            //0x7fff5b47d8a0
//     cout<<&array[0]<<endl;    //0x7fff5b47d8a0
//     cout<<*p<<endl;           //11
//     p++;   //this will incriments the adress with help of given datatype, heare 4 bytes becaus e its intiger
//     cout<<p<<endl;            // 0x7fff5b47d8a4
//     cout<<&array[1]<<endl;    //0x7fff5b47d8a4
//     cout<<*p;                 //22
// }

// pre post  incrients pointers
// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={11,22,33,44};
//     int *p;
//     p=array;  
//     cout<<p<<endl;
//     cout<<&array[0]<<endl;
//     cout<<*p<<endl;
//     cout<<p++<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
// }

// write a program that takes intput elemnts from user stroed in array and prints that elemnets adreses 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int *p;
//     p=arr;
//     cout << "enter thelemnts in array: ";
//     for( int i=0;i<5; i++){
//         cin>>arr[i];
//     }
//     cout<< "the elemnts in array are:"<<endl;
//     for( int j=0;j<5; j++){
//         cout<<"the element in array: "<<*p<<endl;
//         cout<<"the adress of above element: "<<p<<endl;
//         p++;  //increase the adress of their respective size
//     }
// }

// another way to disply adress of array elemnts
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[5];
//   int *ptr[5];
//     cout << "enter the lemnts in array: ";
//     for( int i=0;i<5; i++){
//          cin>>arr1[i];
//     }
//     for( int j=0;j<5; j++){
//     ptr[j] = &arr1[j];  ///this will store adress of arr1 values as ptr array elemnts
//     }
//      for( int j=0;j<5; j++){ //we can also use j in forloop because its block scope
//     cout<<ptr[j] <<endl;
// }
// }

// swaping using pointers
// #include<iostream>
// using namespace std;
// int main() { 
//     char a = 'A';
//      char b = 'Z';
//       char *Ptr1= &a;
//      char *Ptr2= &b;
// char temp = *Ptr1; 
// *Ptr1 = *Ptr2; 
// *Ptr2 = temp;
// cout << a << b << endl;  // Z A
// }

// void pointer 
// any pointer type maybe assigned to void pointer
// #include<iostream>
// using namespace std;
// int main() { 
// int a=4;
// float b=2.3;
// char c='Z';
// int *p1; //its only acces int a variable only 
// //if we give p1=&b or p1=&c the compiler gives error
// void *p2; //it can acess any data type
// p2=&a;   
// p2=&b;
// p2=&c;
// //the above 3 lines gives adress of their respective variables 
// }

// constant pointer
// #include<iostream>
// using namespace std;
// int main(){
//    int a=10;
//     int b=20;
// int *const p=&a; //it allows intialization oly once,cant change the location
// // p=&b; // this line will give error  chant change the location
// *p=20;
// *p=30; 
// cout<<a; //30
// }

// pointer to constat
// #include<iostream>
// using namespace std;
// int main(){
//    int a=10;
//     int b=20;
// int const *p=&a; //it allows intialization oly once
// // *p=30;// cant assin the value again 
// p=&b; // this line will give error 
// cout<<*p; //20
// }

// we cant change the values of the constant pointer
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20;
//     const int *p=&a;
//     cout<<*p<<endl;
//     p=&b;
//     *p=30;
//     cout<< a<<" "<<b <<endl;
//     cout<<*p;
// }

// swaping normla way
// #include<iostream>
// using namespace std;
// int main() { 
//     char a = 'A';
//      char b = 'Z';
//     int temp =a;
//     a=b;
//     b=temp;
// cout<< a<<  " "<< b;  // Z  A
// } 

// #include<iostream>
// using namespace std;
// int main(){
//     int *p;
//     int numbers[]={10,20,30,40,50}; 
//       p=numbers;
//       cout<<"Third element of the array is: "<<endl;
//      cout<<*numbers+3;
// }
// char c = 'c';
// char d = 'd';
// char* const ptr1 = &c;
//  ptr1 = &d;
// }
// void compDouble(int* Ar){
// for(int i=0;i<10;i++) { 
//     *Ar=(*Ar)*2;
//     Ar++;
// } 
// }
// int main(){
//      int arr[10]={10,11,4,5,8,2};
//     //  compDouble(Arr);
//     int *p=arr;
//      for(int i=0;i<10;i++){
//            cout<<*p<<endl;
//            (*p)++;
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
// int a;
// float b;
// int &x=a;
// float &y= b;
// a=23;
// cout<<a<<endl;
// cout<<x<<endl;
// b=78.23;
// cout<<b<<endl;
// cout<<y<<endl;
// }