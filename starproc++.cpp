
// #include<iostream>
// using namespace std;
// int main(){
// int n=9;
//     for (int i = 1; i <n; i++){
//     for (int j = 1; j <=i; j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<"\n";
//     } 
// }


// #include<iostream>
// using namespace std;
// int main(){
// char n='E';
//     for (int i = 'A'; i <=n; i++){
//     for (int j = 'A'; j <=i; j++)
//     {
//         cout<<char(i)<<" ";
//     }
//     cout<<"\n";
//     } 
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n=9;
//     for (int i = 0; i <n; i++){
//     for (int j = 0; j <n-i; j++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<"\n";
//     } 
// }



// #include<iostream>
// using namespace std;
// int main(){
// int n=9; 
//     for (int i = 0; i < n; i++){
//     for (int j = 0; j <=n-i; j++)
//     {
//         cout<<j+1<<" ";
//         // cout<<"* ";
//     }
//     cout<<"\n";
//     } 
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n=5;
//     for (int i = 0; i < n; i++){
//     for (int j = n ; j>i; j--) {
//        cout<<char(j+64);
//     //    cout<<char(i+64);
//        }
//       cout<<"\n";
//     } 
// }

#include<iostream>
using namespace std;
// int main(){
// int n=5;
//     for (int i = 0; i < n; i++){
//     for (int j = 0 ; j<n-i; j++) {
//        cout<<"*";
//        }
//       cout<<"*"<<endl;
//     } 
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n=9;
// for (int h = 0; h < ; h++)
// {
//     /* code */
// }

//     for (int i = 0; i <n; i++){
//     for (int j = 0; j<n-i; j++)
//     {
//     cout<<" "<<"*";
//     }
//     cout<<"\n";
//     } 
// }


// first programs in c++ textbook
// #include<iostream>
// using namespace std;
// const double CENTIMETERS_PER_INCH = 2.54;
//  const int INCHES_PER_FOOT = 12;
// int main () {
//          //Declare variables
// int feet, inches; 
// int totalInches;
//  double centimeter;
//          //Statements: Step 1 - Step 7
// cout << "Enter two integers, one for feet and " << "one for inches: ";
// cin >> feet >> inches;
// cout << endl;
// cout << "The numbers you entered are " << feet
//          << " for feet and " << inches
//          << " for inches. " << endl;
// totalInches = INCHES_PER_FOOT * feet + inches;
//     cout << "The total number of inches = "
//          << totalInches << endl;
// centimeter = CENTIMETERS_PER_INCH * totalInches;
//     cout << "The number of centimeters = "
//          << centimeter << endl;
// return 0;
//  }

// #include<iostream>
// using namespace std;
// int main(){
//   int change;
//   cout<<" enter the change"<< endl;
//   cin>>change;
// int half_dollers =(change/50);
// int remaing_chnage=(change%50);
//   cout<<"the number of half dollers: "<< half_dollers <<endl;
//   cout<<"remaing change"<<remaing_chnage <<endl;
// int numberof_quarters=remaing_chnage/25;
// int remainng_chnage2=remaing_chnage%25;
//   cout<<"the number of half dollers: "<< numberof_quarters <<endl;
//   cout<<"remaing change"<<remainng_chnage2<<endl;

//   return 0;
// }

// 19.spynmber
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   int product=1;
//   int sum=0;
//   int d;
//   cout<<"enter  the number :";
//   cin >>n;
//   while(n>0){
//    d=n%10;
//     n=n/10;
//    sum=sum+d;
//    product=product*d;
//   }
//    cout<<"product is :"<<product<<endl;
//    cout<<"sum is  is :"<<sum;
// return 0;
// }