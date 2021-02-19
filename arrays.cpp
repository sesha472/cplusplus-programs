// arrays
// #include<iostream>
// using namespace std;
// int main(){
//   int a[4];  //we declearing a arry without assing any values with size 4.
//   cout<<a[3]<<endl;//if we want to pring array elements without assiging any values we can get  0(zero) in each indexpossition in array
//   cout<<a[6]<<endl; //when we search outer range of an array ,we can get some random garbage values.
// // we can store elements in array from user by using for loop
// cout<< "enter the elemnts u want to store in array:  ";
// for(int i=0; i<4; i++){
//   cin>>a[i];
// }
// //to print the array elemnts we can again use for loop
// cout<<"the elemnets stored in array are : ";
// for(int i=0; i<4; i++){
//   cout<< a[i]<<"\t";
// }
// return 0;
// }


// sum of array elemnts and numbers of array elements 
// #include<iostream>
// using namespace std;
// int main(){
//     int array[5];
//     int avg;
//     int elements=0,sum=0;
//     cout<<"enter the array elements: "<<endl;
//     for(int i=0; i<5; i++){
//         cin>>array[i];
//     }
//     for(int j=0; j<5; j++){
//         cout<<array[j]<<" \t";
//         // cout<<endl;
//         sum=sum+array[j];
//         elements++;
//     }
//     avg=sum/elements;
//   cout<<"\n the sum of array elemts are: "<<sum<<endl;
//   cout <<"total  number of elements are: "<<elements<<endl;
//   cout<<"their average is : "<<avg;
// return 0;
// }

// printing the revers orderof the array super sucess
// #include<iostream>
// using namespace std;
// int main(){
//         int n;
//         cout<<"enter the size of the array;"<<endl;
//         cin>>n;
//     int array1[n],array2[n];
//      cout<<"enter the elemnts in array1: ";
//     for(int i=0;i<n ;i++){
//         cin>>array1[i];
//     }
//     cout<<"revers"<<endl;
//     int d=n-1;
    
//           for(int i=0 ,j=d;i<n,j>=0 ;i++,j--){
//          array2[j]=array1[i];
//      }

//      for(int i=0;i<n;i++){
//          cout<<array2[i]<<"\t";
//      }
// return 0;
// } 

// the sum of two arrays same index values storing in 3rd arry
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[4],arr2[4],arr3[4];
//     for(int i=0;i<4 ;i++){
//         cout<<"enter "<< i<<" elemnt in array1: ";
//         cin>>arr1[i];
//         cout<<"enter "<< i<<"  elemnt in array2: ";
//       cin>>arr2[i];
//     }
//     //  cout<<"the elements in array3 are: ";
//     for(int j=0;j<4; j++){
//         arr3[j]=arr1[j]+arr2[j];
//        cout<<arr1[j]<<"+"<<arr2[j]<<"="<<arr3[j]<<endl;
//     }
//     //  cout<<"the elements in array3 are: ";
//     // for(int k=0;k<4; k++){
//     //    cout<<arr3[k]<<" \t";
//     // }
// return 0;
// }

// storing randaom values in array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4];
//     for(int i=0;i<4; i++){
//        arr[i] =rand()%10;
//     cout<<arr[i]<<"\n";
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][3]={{1,2,3},{4,5,6}};
//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//   cout<<arr[i][j]<<"\t";
//         }
//     cout<<"\n";
//     }
// return 0;
// }

// prting elemnts in two dimentnional array
// #include<iostream>
// using namespace std;
// int main(){
//   int a[3][2];
//   cout <<"enter the array elemnts:  ";
//   for(int i=0; i<3; i++){
//  for(int j=0; j<2; j++){
//      cin>>a[i][j];
//    }
// }
//   cout <<" you entered array elementers are: "<<endl;
//   for (int x=0; x<3; x++){
//    for(int y=0; y<2; y++){
//    cout<<a[x][y]<<"\t";
//  }
//  cout<<"\n";
//   }
// return 0;
//   }

//pyramid programs
// #include <iostream>
// using namespace std;
// void Pattern(int n)
// {
// 	int k = 2 * n - 2,x=n;
// 	// Outer loop to handle number of rows
// 	for (int i = 0; i < n; i++) {
// 		// Inner loop to handle number spaces
// 		for (int j = 0; j < k; j++)
// 			cout << " ";
// 		// Decrementing k after each loop
// 		k = k - 1;
// 		// Inner loop to handle number of columns
// 		for (int j = 0; j <= i; j++) {
// 			// Your number x
// 			cout <<x<< " ";
// 		}
// 		// End line after each row
// 		cout << endl;
// 		--x;
// 	}
// }
// int main()
// {
// 	int n = 5;
// 	// Call Function
// 	Pattern(n);
// }

// array numbers
// #include <iostream>  
// using namespace std;  
// int main()  
// {       
//    int a[]={18,9,7,4,5};  // array initialization  
//    int *ptr;       // pointer declaration  
//    ptr=a;    // assigning base address of array to the pointer ptr  
//    cout <<"value of second element of an array : "  << ptr<<endl;  
//    ptr=ptr+1;   // incrementing the value (adress) of pointer  
//    cout <<"value of second element of an array : "  << ptr<<endl;  
//    return 0;  
// } 

// finding the minimum value in array
// #include <iostream>  
// using namespace std;  
// int main()  
//  {  
//    int arr1[5];
//    cout<<" enter the elemnt sin array: ";
// for(int i=0; i<5; i++){
//      cin>>arr1[i];
// }
//    int min =arr1[0];  
//    int max=arr1[0]; 
//    for(int i=0; i<5;i++){
//        if(min>arr1[i]) {//if we want maximum value code is=>max<arr1[i]
//       min=arr1[i];
//    }
//     if(max<arr1[i]){ //if we want maximum value code is=>max<arr1[i]
//       max=arr1[i];
//     }
//    }
//   cout<<"the minimum values of the array is : "<<min<<endl;
//   cout<<"the maximum values of the array is : "<<max<<endl;
//   return 0;
// }

// finding maximum number using range based forloop
// #include <iostream>  
// using namespace std;  
// int main()  
//  {  
//    int arr1[7] = {30,50,999,4,99,40,5}; 
//    int min =arr1[0];   
//    for(int item : arr1){
//    if(min<item) //if we want maximum value code is=>max<arr1[i]
//       min=item;
//     }
//   cout<<"the minimum values of the array is : "<<min;
//   return 0;
// }

// array elemnts min element finding using functions
// #include <iostream>  
// using namespace std;  
// void  printMin(int arr[] int n) {  
//     int min = arr[0];    
//         for (int i=0; i<n; i++){    
//             if (min > arr[i]){    
//                 min = arr[i];    
//                 }    
//         }    
//         cout<< "Minimum element is: "<< min <<"\n";    
// }  
// int main()  
// {  
//    int arr1[] = { 30, 2, 20,-4, 40,90,-9};    
//         int arr2[] = { 5, 15, 25, 35, 45 };  
//         printMin(arr1);//passing array to function    
//          printMin(arr2);  
//          return 0;
// }  

// printing elemnts using range base loop
// #include <iostream>
// using namespace std;
// int main() {
//     int numbers[5] = {7, 5, 6, 12, 35};
//     cout << "The numbers are: ";
//     //  Printing array elements
//     // using range based for loop
//     for (int n : numbers) {
//         cout << n <<"\t";
//     }
//     cout << "\nThe numbers are: ";
//     //  Printing array elements
//     // using traditional for loop
//     for (int i = 0; i < 5; ++i) {
//         cout << numbers[i] << " \t ";
//     }
//     return 0;
// }

// usingrange forloop
// #include <iostream>  
// using namespace std;  
// int main()  
// {  
//  int arr[5]={10, 0, 20, 0, 30}; //creating and initializing array    
//         //traversing array    
//        for (int i: arr)     
//         {    
//             cout<<i<<"\n";    
//         }    
// } 
// today work

// array sorting bubble sort
// #include <iostream>  
// using namespace std;  
// int main()  {
//    int arr[6]={5,8,9,5,9,7};
// // cout<<sizeof(arr);
// //    int length= ((sizeof(arr))/4);
// //    cout<<length;
// for(int j=0;j<6; j++){
// for(int i=0; i<6; i++){
//     if(arr[i]>arr[i+1]){
//         int t=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=t;
//     }
// }
// }
// for(int i=0; i<6; i++){
//     cout<<arr[i];
// }
// return 0;
// }

// Write a program to that creates a matrix of size 5 by 5 (5 Columns, and 5 Rows). 
// The program should ask the user to enter values in each matrix element. Then the program should display the matrix Row-wise.
// #include<iostream>
// using namespace std;
// int main(){
//  int arr[5][5];
// cout <<" enter the elements: ";
//  for(int i=0; i<5; i++){
//      for(int j=0; j<5; j++){
//          cin>>arr[i][j];                
//  }
//  cout<<"\n";
// }
// cout<<" your entered elements are : "<<endl;
//  for(int i=0; i<5; i++){
//      for(int j=0; j<5; j++){        
//          cout<<arr[i][j]<<" ";
//         //   Then the program should display the matrix Coulmn-wise.
//         // / arr[j][i];
//  }
//  cout<<"\n";
// }
// }

// Then the program should display the left-diagonal elements of the matrix.
// #include<iostream>
// using namespace std;
// int main(){
//  int arr[3][3];
// cout <<" enter the elements: ";
//  for(int i=0; i<3; i++){
//      for(int j=0; j<3; j++){
//          cin>>arr[i][j];              
//  }
//  cout<<"\n";
// }
// cout<<" your entered elements are : "<<endl;
//  for(int i=0; i<3; i++){
//      for(int j=0; j<3; j++){
//          if(i==j){
//          cout<<arr[i][j]<<" ";
//          }
//  }
//  cout<<"\n";
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//  int arr1[2][2];
//  int arr2[2][2];
//  int arr3[2][2];
// cout <<" enter the elements in 1st table: ";
//  for(int i=0; i<2; i++){
//      for(int j=0; j<2; j++){
//          cin>>arr1[i][j];        
//  }}
//  cout <<" enter the elements in 2nd table: ";
//  for(int i=0; i<2; i++){
//      for(int j=0; j<2; j++){
//          cin>>arr1[i][j];        
//  }}
//  for(int i=0; i<2; i++){
//      for(int j=0; j<2; j++){
//          arr3[i][j] = arr1[i][j] + arr2[i][j];     
//  }}
//  cout <<" the added elements are: "<<endl;
//  for(int i=0; i<2; i++){
//      for(int j=0; j<2; j++){
//          cout<<arr3[i][j]<<" ";        
//  }
//  cout<<endl;
//  }
//  return 0;
// }

// #include<iostream>
// using namespace std;
//   int main(){
//     for(int j=0; j<10; j++){
//     int k=0;
//     k=j*j;
//     cout<<"the vale is: "<<k<<endl;
//     }
//     int k=24;
//     cout<<k;
// }

// swaping without third variable
// #include<iostream>
// using namespace std;
//   int main(){
//       int a,b;
//       cin>>a>>b;
//   cout<<"before the swap"<<endl;
//   a=a+b;
//   b=a-b;
//   a=a-b;
//   cout<<"after the swap"<<endl;
//   cout<<a<<" "<<b;
//   }

// fibo nasii
// #include<iostream>
// using namespace std;
//   int main(){
//       int a=0,b=1,n,c;
//       cout<<"enter the numbre: ";
//       cin>>n;
//       if(n<=2){
//           cout<<a<<b<<endl;
//       }else
//       {
//         cout<<a<<" "<<b<<" ";
//          for(int i=0; i<n; i++){
//              c=a+b;
//              cout<<c<<" ";
//              a=b;
//               b=c;
//          }
//          }
//          }

// #include<iostream>
// using namespace std;
// int main(){
//  int n;
// cout <<" enter the elements: ";
//   cin>>n;
//  for(int i=1; i<=n; i++){
//      for(int j=1; j<=n; j++){
//          cout<<j<<"\t";                
//  }
//  cout<<"\n";
// }}

// #include<iostream>
// using namespace std;
// int main(){
//  int n;
// cout <<" enter the elements: ";
//   cin>>n;
//  for(int i=n; i>=0; i--){
//     for(int j=1; j<=n; j++){
//       cout<<j<<"\t";                
// }
//  cout<<"\n";
// }
// }
    
// #include<iostream>
// using namespace std;
// int main(){
// //  int n;
// // cout <<" enter the elements: ";
// //   cin>>n;
// char i,j,n;
// cin>>n;
//  for( i='A'; i<='E'; i++){
//      for( j='A'; j<='E'; j++){
//     cout<<char(j)<<"\t";              
//  }
//  cout<<"\n";
// }}
    
// #include<iostream>
// using namespace std;
// int main(){
// //  int n;
// // cout <<" enter the elements: ";
// //   cin>>n;
// int count=0;
//  for(int i=1; i<=100; i++){ 
//       if(i%2==0){
//         cout<<"the numberis even number : "<<i<<endl;
//         count++;
//       }             
//  }
//  cout<<"\n"<<" the total even number sare"<<count;
// }

// findnig days in months
// #include<iostream>
// using namespace std;
// int main(){
// int m;
//   string months[12]={ "jan","feb","mar","april","may","june","july","aug","sep","oct","nov","dec"};
// cout<<"total months in year:"<<endl;
// for(int i=0; i<12;i++){
// cout<<i+1<<". "<<months[i]<<endl;
// }
// int days[12]={31, 28, 31, 30,31, 30, 31, 31, 30, 31, 30, 31};
// cout<<"eter the number of month u want:";
// cin>>m;
// cout<<"the number of day in "<< months[m-1] <<" are"<<days[m-1];
// // for(int j=0;j<12;j++){
// //  if(m==j+1){
// //  cout<<"the number of day in "<<m <<"are"<<days[m];
// //   }
// // }
// return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//   int a=2;
//   int d=3;
//     cout<<a+(4-1)*d;
// }
    

// #include<iostream>
// using namespace std;

// int main(){
//   double a=2;
//   double d=3;
//     double n=3;
//     cout << (n/2)*((2*a)+(n-1)*d);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//  double a;
//          a= (2+4+4+4+5+5+7+9)/20;
//          cout<<a;
//          return 0;
// }

      