// finding size of data type
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     string b;
//     float c;
//     double d;
// cout<<"eter the integier"; 
// cin>>a;
// cout<<"teh size of int is: "<< sizeof(a)<<"bytes"<<"\n";
// cout<<"eter the string :";
// cin>>b;
// cout<<"teh size of the string is "<<sizeof(b)<<"bytes"; 
// return 0;
// }

// printing hellow world
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hellow world";
//     return 0;
// }

// number entered by user
// #include<iostream>
// using namespace std;
//   int main(){
//       int number ;
//    cout<<"enter your number: ";
//    cin >> number;
//    cout<<"your number is : "<< number;
//    return 0;
//     }

// add two integers
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<< "enter first integer: ";
//     cin>>x;
//     cout<<"enter second integer: ";
//     cin>>y;
//     int sum=x+y;
//     cout<<"your integers sum is: "<<sum;
//     return 0;
// }

//finding the reminder and quotient of given inputs
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,change,quotient;
//     cout<<"enter dividenet num: ";
//     cin>>x;
//     cout<<"enter divsion number: ";
//     cin>>y;
//     quotient =x/y;
//     change=x%y;
//     cout<<"quotent = "<<quotient<<endl;
//     cout<<"change = "<<change;
//         return 0;
//     }

// swap two number 
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,t;
// cout<<"store the number in x: ";
// cin>>x;
// cout<<"store the number in y ";
// cin>>y;
// t=x;
// x=y;
// y=t;
// cout<<"after the swap"<<endl;
// cout<<"x value is :"<<x<<endl;
// cout <<"y values is : "<<y;
// return 0;
// }

// swap using fucntion
// #include<iostream>
// using namespace std;
// void func(int &x,int &y){
//   int t;
//   t=x;
//   x=y;
//   y=t;
// }
// int main() { 
//   int a=10,b=20 , t;
//   cout<<a<<b<<endl;
//   // t=a;
//   // a=b;
//   // b=t;
//   func(a,b);
//   cout<<a<<b;
// }

// check even or odd
// #include<iostream>
// using namespace std;
// int main(){
// int number ;
//     cout<<"enter the number ;";
//     cin>>number;
// if ((number%2) == 0){
// cout<<"your numer is even number ";
// }else{
//     cout<<"your number is odd number";
//     }
//     return 0;
// }

// prime number or not
// #include<iostream>
// using namespace std;
// int main(){
//     int i,num;
//     cout<<"enter the number: ";
//     cin>>num;
//    for(i=2; i<num; i++){ //the prime number which is divisable by 1 and itselt that's why i started from 2
//       if(num%i==0){
//         break;
//        }
//    }
//     if(num==i){
//    cout<<"number is prime numebr";
//     }else{
//         cout<<"the number is not primenumber";
//     }
// return 0;
// }

// the number is prime number or not second method
// #include<iostream>
// using namespace std;
// int main(){
//     int num,i;
//     cout<<" enter the numebr : ";
//     cin>>num;
//     int c=0; 
//     for(i=1; i<=num; i++){
//         if(num%i==0){
//             c++;
//         }
//     } 
//     if(c==2){
//       cout<<"the number is prime number";
//     }
//     else
//     {
//      cout<<"the number is not prime number";
//     }
//     return 0;
// }

// factorial of a given number
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter the number for factorial: ";
//     cin>>num;
//     if(num==0){
//         cout<< 1;
//         return 1;     
//     }
//     int fact=1;
//     for(int i=1; i<=num; i++){
//         fact=fact*i;
//     }
//     cout<<"teh factorial of a given number is: "<<fact;
//     return 0;
// }

// factorial of given number using functions
// #include<iostream>
// using namespace std;
// int fact(int n){
//      if(n==0||n==1){
//     return 1;
//     } 
//       else
//    {
//    return n*fact(n-1);
//    }
// }
//  int main(){
//  int num;
//  cout<< "enter the number : ";
//  cin>>num;
// cout<<"the fact of given number is : "<<fact(num);
// return 0;
// }

// fibonacci series
// #include<iostream>
// using namespace std;
// int main(){
//     int num,c;
//     int a=0,b=1;
//     cout<<"enter the number :";
//     cin>>num;
//     // cout<<a<<" "<<b<<" ";
//      cout<<a<<b;
// for(int i=2; i<num; i++){
//     c=a+b;
//     cout<<c;
//     a=b;
//     b=c;
// }
// return 0;
// }

// fibonacci series using functions
// #include <iostream>  
// using namespace std; 
// int fibo(int n){
// int a=0,b=1,c;
// if(n==0){
//     cout<<a<<" "<<b;
//     return 0;
// }else{
//    cout<<a<<b;
//     for(int i=2; i<n; i++){
//      c=a+b;
//      cout<<c;
//       a=b;
//       b=c; 
//     }
// }
// return 0;
// } 
// int main() {  
//     int x;
//     cout<<"enter the number :";
//     cin>>x;
//     fibo(x);
// }


// palindrome number 
// #include<iostream>
// using namespace std;
// int main(){
//     int num,remainder,reversnum=0;
//     cout<<"enter the number :";
//     cin>>num;
//     while(num!=0){
// remainder=num%10;
// reversnum=reversnum*10+remainder;
// num=num/10;
//  }
// cout<<"teh revesred number is :"<<reversnum;
// }


// to finde divisors of a given number
// #include <iostream>  
// using namespace std;  
//   int main()
//   {
//     int num,i;
//     int gcd=0;
//     cout<<"enter the number ";
//     cin>>num;
//     int sum =0;
//     for( i=1; i<=num; i++)
//                  if((num%i) == 0){
//                cout<<i<<"\t";
//                if(gcd<i){
//                    gcd=i;
//                }
//                sum++;
//                    }
//   cout<<"total number of divisiors : "<< sum <<endl;
//   cout<<"gcd: "<<gcd;
//     return 0;
// }

// finding greatest number among three
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter the three numbers: "<<endl;
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     if(a>b&a>c){
//         cout<<a<<" is bigest number among theree";
//     }else if(b>c&b>a){
//          cout<<b<<" is bigest number among theree";
//     }else
//     {
//          cout<<c<<" is bigest number among theree";
//     }
//     return 0;
// }

// perform the operation betwin two numbers what user want  
// #include<iostream>
// using namespace std;
// int main(){
//     char option;
//     int num1,num2;
//     cout<<"enter the first number : ";
//     cin>>num1;
//     cout<<"enter the second number : ";
//     cin>>num2;
//     cout<<"enter  the option for operation + or - or * ,b/n twonumbers";
//     cin>>option;
//     cout<<"your uotput is: "<<num1;
//     return 0;
// }

// sum of intigers from given starting to ending numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int a1,a;
//     int s=0;
//     cout<<"enter starting the numbers ";
//     cin>>a1;
//     cout<<"enter ending the numbers ";
//     cin>>a;
//     for (int i=a1;i<=a;i++){    // if(i%2==0){ for sum of even numbers 
//         cout<<i<<endl;
//           s=s+i;     // }
//     }
//     cout<<"the total value is : "<<s<<endl;
//     return 0;
// }
    
// printing odd numbers total
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int s=0;
//     cout<<"enter the numbers ";
//     cin>>a;
//     for (int i=0;i<=a;i++){  
//         if(i%2!=0){
//         cout<<i<<"odd number is "<<endl;
//           s=s+i;  
//         }
//     }
//     cout<<"the total value is : "<<s<<endl;
//     return 0;
// }

// print number from start to end with given intervel
// #include<iostream>
// using namespace std;
// int main(){
//     int min,max,intarevel;
//     cout<<"enter the minimum nmber: ";
//     cin>>min;
//     cout<< "enter the maximum number: ";
//     cin>>max;
//     cout<<"enter the intaervel: ";
//     cin>>intarevel;
//     for(int i=min; i<=max; i=i+intarevel){
//         cout<<i<<"\n";
//     }
//     return 0;
// }


//using do while loop loading..
// #include <iostream>  
// using namespace std;  
// int main() {  
//     int i = 1;    
//   do{    
//          int j = 1;          
//         do{    
//        cout<<i<<" "<<j<<"\n";        
//             j++;    
//         } while (j <= 3) ;    
//    i++;    
//  } while (i <= 3) ;     
// }  

// #include <iostream>  
// using namespace std;  
// int main()  
// {  
//  for(int i=1;i<=3;i++){        
//             for(int j=1;j<=3;j++){        
//              if(i==2&&j==2){        
//                 break;        
//                         }        
//                 cout<<i<<" "<<j<<"\n";                  
//                     }  
//                    if(i==3){
//                        break;
//                    }       
//             }            
// } 

// int main(){
// int x,y,sum;
//     cout<<"enter the number: ";
//     cin>>x;
//     cout<<"enter the second number: ";
//     cin>>y;
//     sum=x+y;
//     cout<<"the sum of two numbers is ="<<sum;
// return 0;
// };

//second program using constructor
// #include<iostream>
// using namespace std;
// class Car{
//   public:
//      string brand;
//      string model;
//        int year;
//    Car(string a,string b,int c){
//     brand=a;
//     model=b;
//     year=c;
//      }
// };
// int main(){ 
//     Car obj("bmw", "x5" ,2000);
//     cout << obj.brand ;
//     return 0;  
// }

//while loop
// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     while(i<5){
//      cout<<"the number is : "<<i<<"\n";  
//         i++; 
//     }
//       return 0;
// }

//  #include<iostream>
// using namespace std;
// class car{
//     public:
//     int num;
//     void greek() {
//         cout<<"the number name is: "<<endl;
//          num=1;
//       }
// };
// int main(){
// car object;
// object.greek();
// cout<<"the number is"<<object.num;
// return 0;
// }

// #include<iostream>
// using namespace std; 
// class Geeks { 
//     public: 
//     int id;  
//     Geeks(){ 
//         cout << "Default Constructor called";  
//         id=-1; 
//        } 
// };
// int main({
//     Geeks obj;
//     cout<<"the nam eif obj is: "<<obj.id;
//     return 0;
// })

// using goto stament
// #include <iostream>  
// using namespace std;  
// int main()  
// {  
// statement:        
//   cout<<"You are not eligible to vote!\n";    
//       cout<<"Enter your age:\n";    
//       int age;  
//       cin>>age;  
//       if (age < 18){    
//               goto statement;    
//       }    
//       else    
//       {    
//          cout<<"You are eligible to vote!";     
//       } 
// }  


// call by value
// #include <iostream>  
// using namespace std;  
// void calc(int y)
// {
//     y = y + 10 ;
//     cout<<y<<endl;
// }
// int main()
// {
//     int x = 10;
//     calc(x);
//     cout<<x;
//     return 0;
// }

// call by reference
// #include <iostream>  
// using namespace std;  
// void calc(int &y){
//     y = y + 10 ;
//     cout<<y<<endl;
// }
// int main(){
//     int x = 10;
//     calc(x);
//     cout<<x;
//     return 0;
// }



// loading ...
// #include<iostream>
// using namespace std;
// int main(){
//     int a,an;
//     int c=0;
//     cout<<"enter the first number starting";
//     cin>>a;
//     cout<<"enter the ending number: ";
//     cin>>an;
//     for(int i=a;i<=an; i++){
//       c=c+a;
//       cout<<c;
//     } 
//         return 0;
//       }