// #include<iostream>
// using namespace std;
//  int main() {
//   string x,y;
//     cout<<"enter the first name:";
//     cin>>x;
//     cout<< "enther the second name:";
//     cin>> y;
//     cout<<"your full name is :"<< x <<" "<<y ;    
//   return 0;
// } 





// 1st pic quaction
// #include<iostream>
// using namespace std;
// int main(){
// 	int stud_ID[10];
// 	int stud_marks[10];
// 	for(int i=0; i<10;i++){
// 		cout<<"Enter the ID of student "<<i+1<<"  = ";
// 		cin>>stud_ID[i];	
// 		cout<<"Enter the marks of student "<<i+1<<"  = ";
// 		cin>>stud_marks[i];
// 	}
// 	cout<<endl<<"*******************"<<endl;
// 	cout<<"Students_ID\t\t Students_marks"<<endl;
// 	for(int i=0;i<10;i++)
// 	{
// 		cout<<stud_ID[i]<<"\t\t"<<stud_marks[i]<<endl;
// 	}
// 	return 0;
// }



// 2nd pic quaction 
// #include<iostream>
// using namespace std;
// struct product
// {
//     int product_number;
//     char product_name[50];
//     float product_price, product_quantity;
// }
    // void create_product()
    // {
    //     cout << endl << "Please Enter The Product Number: ";
    //     cin >> product_number;
    //     cout << endl << "Please Enter The Name of The Product: ";
    //     cin.ignore();
    //     cin.getline(product_name, 50);
    //     cout << endl << "Please Enter The Price of The Product: ";
    //     cin >> product_price;
    // }
    // void show_product()
    // {
    //     cout << endl << "Product #: " << product_number;
    //     cout << endl << "Product Name: " << product_name;
    //     cout << endl << "Product Price: " << product_price;
    // }
    // int getProduct()
    // {
    //     return product_number;
    // }
     // float getPrice()
    // {
    //     return product_price;
    // }

    // char getName()
    // {
    //     return product_name;
    // }

// goto statement ==> it is used to transfer control to the other part of the program
// #include <iostream>
// using namespace std;
// int main(){
// starting:
//     int age;
// cout <<"enter you r age  :";
// cin>>age;
//     if (age>18){
//         cout<<"you are elizible for vote: ";
// }
//  else{
//     cout<<"your not elizible for vote: "<<"\n";
//     goto starting;
// }
// return 0;
// }

// // size of operator
// #include<iostream>
// using namespace std;
// class base{
//     int a;
//     // char d;
//     double c;
// };
//  int  main(){
//  cout<<"the size of base b: "<<sizeof(base);
//  return 0;
// }




// #include<iostream>
// using namespace std;
// void name(int arr[])
// {
// //     cout<<" teh size of the name is : "<<sizeof(arr)<<endl; //when we want to finde array size using function it will retun 8 
//     cout<<"the size ofa array is :  " << sizeof(arr);
// }
// int main(){
//     int arr1[]={9,2,3};
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
// cout<<"teh adress of the arr is : "<<arr[];
// return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int array[5]={3,4,5,7,8};
//     for(int i=0;i<=4; i++){
//     cout<< array[i] <<"\n";
// }

// }

// creatig array with elemnts and storing every elemt adress in another array
// #include<iostream>
// using namespace std;
// int main(){
//     int arry[5];
//     int *arry1[5];
//    cout<<"enter the elemnts: "<<endl;
//     for(int i=0; i<=3; i++){
//         cin>>arry[i];
//     }
//     for(int i=0; i<=3; i++){
//         arry1[i]= &arry[i];
//     }
//     cout<<"The values are : "<<endl;
//     for(int i=0; i<=3; i++){
//         cout<<arry[i]<<" and adress is : "<<arry1[i]<<"\n";
//     }
//     cout<<"the array name is "<<&arry;
//     return 0;
// }

// #include<iostream>  
// using namespace std;  
// int main()  
// {  
//    string str1="javatpoint";  
//    string str2="javatpoint";  
//     int k= str1.compare(str2);  
//     if(k==0)  
//          cout<<"Both the strings are equal";  
//      else  
//        cout<<"Both the strings are unequal";  
  
// }  


// #include <iostream>  
// using namespace std;  
// int main()  
// {  
// int a=10; // variable initialization  
// int &b=a; // b reference to a  
// std::cout << "value of a is " <<b<< std::endl;  
// return 0;  
// }  

// #include <iostream>  
// using namespace std;  
// int main()  
// {  
// int a=9; // variable initialization  
// int b=10; // variable initialization  
// swap(a, b); // function calling  
// std::cout << "value of a is :" <<a<< std::endl;  
// std::cout << "adress of a is :" <<&a<< std::endl;  
// std::cout << "value of b is :" <<b<< std::endl;  
// return 0;  
// }  
// void swap(int p,int q) // function definition  
// {  
// int temp; // variable declaration  
// temp=p;  
// p=q;  
// q=temp;  
// } 

// #include<iostream>
// using namespace std;
// int main(){
//     int k=10;
//     int *p;
//     p=&k;
//     cout<<"the normal of the k is : "<<k<<endl;
//     cout<<"the normal of the &k is : "<<&k<<endl;
//     cout<<"the normal of the p is : "<<p<<endl;
//     cout<<"the value of the *p is : "<<*p<<endl;
//     cout<<"the adress of the &p is : "<<&p<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int k=10;
//     int *p;
//     int **p2;
//     int ***p3;
//     p=&k;
//     p2=&p;
//     p3=&p2;
//     cout<<"the adress of k = p is : "<<p<<endl;
//     cout<<"the value of pointer = *p is : "<<*p<<endl;
//     cout<<"the adress of p = &p is : "<<&p<<endl;
//     cout<<"the normal of the p2 is : "<<p2<<endl;
//     cout<<"the normal of the &p2 is : "<<&p2<<endl;
//     cout<<"the normal of the *p2 is : "<<*p2<<endl;
//     cout<<"the normal of the p3 is : "<<p3<<endl;
//     cout<<"the normal of the p3 is : "<<*p3<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int a=10;
//     int *p;
//     p=&a;
//     cout<<"the normal of the p3 is : "<< *p <<endl;
//     cout<<"the normal of the p3 is : "<<&a<<endl;
//     return 0;
// }


// printing array elements 
// #include <iostream>  
// using namespace std;  
// void printArray(int arr[],int n);  
// int main(){
// int n=7;
//      int arr1[n] = { 10,20,30,40,50,60,70};    
//      int arr2[n] = { 5,15,20,25,30};    
//      printArray(arr1,n);      //passing array to function    
//      printArray(arr2,n);  
//      return 0;
// }
// void printArray(int arr[],int n){  
//     cout << endl<<"Printing array elements:"<< endl;  
//     for (int i = 0; i < n; i++){  
//                    cout<<arr[i]<<"\t";    
//     }  
  
// }  


// swap elements without temp
// #include<iostream>
// using namespace std;
//     void swap(int &a,int &b){ 
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     };
//     int main()  {
//         int x,y;
//         x=20;
//         y=10;
// cout<<x<<" "<<y <<endl;
// swap(x,y);
// cout<<x<<" "<<y<<endl;
// return 0;
//     }






// #include<iostream>
// using namespace std;
//   int main(){
//       int a=0;
//     if(!1){
//       cout<<"true";
//     }else
//       {
//         cout<<"false";
//       }
//   return 0;
//   }

// pointers

// #include<iostream>
// using namespace std;
// void swap(int *a,int *b){
// int temp;
//     temp=*a;
//      *a=*b;
//     *b=temp;
// }
// // void swap(int a,int b){
// // int temp;
// //     temp=a;
// //      a=b;
// //     b=temp;
// // }
//   int main(){
//   int i=3;
//   int j=9;
//   swap(&i,&j);
//   cout<<i<<"   values and j is " << j;
// return 0;
//   }

//  #include<iostream>
// using namespace std;
// int main(){
  //   int a=5;
  //   int *p=&a;
  //   cout<<a<<endl;
  //   cout<<p<<endl;
  //   cout<<*p<<endl;
  //    ++*p;
  //   cout<<p<<endl;
  //   cout<<*p<<endl;
  // }



// namespace std;

// #include<iostream>
// using namespace std;
// int main(){
//   int a[2][2]={{2,1},{3,4}};
//   cout<<a[0][1]<<"\n"; // for printing pertucular item we sue this method
//  cout <<" elementers are: "<<endl;
//  //for printing  all elements in array we use this method
//   for (int x=0; x<2; x++){
//    for(int y=0; y<2; y++){
//    cout<<a[x][y] <<"\t";
//  }
//  cout<<"\n";
//   }
// return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;
// int main()
// {
// string x = "10";
// string y = "30";
// int a=0;
// int b=0;
// for (int i = 0; x[i] != '\0'; i++)
// {
// a = a * 10 + (x[i] - 48);
// }
// for (int i = 0; y[i] != '\0'; i++)
// {
// b = b* 10 + (y[i] - 48);
// }
// cout << "Sum : " << a + b << endl;
// return 0;
// }



// #include<iostream>
// using namespace std;
//    int main(){
//    double y=1.224;
//   int i=10;
//   int j=9;
//   i= y;
//   y=j;
//   cout<<i<<endl;
//   cout<<y;
// }

// #include<iostream>
// using namespace std;
//    int main(){
//      int a=5,b=7;
//      cout<<a--<<endl;
//      cout<<a<<endl;
//      cout<<++b<<endl;
// //     //  cout<<b<<endl;
// //      cout<<(++a)+(b++)<<endl;
// //      cout<<b<<endl;
// //      cout<<a<<endl;
// //    }

// #include<iostream>
// using namespace std;
//    int main(){
// double a=3,b=4;
// cout<<(a/b)<<endl;
// cout<<(a/b+(a*b))%(a-4);
  //  }
    //  int a=3,b=5;
    //  cout<<--a*2<<endl;
    //  cout<<a*2;
  //  }

