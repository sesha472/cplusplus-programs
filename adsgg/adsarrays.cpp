
// 1. product of arrays
// #include <iostream>
// using namespace std;
// int main() {
// 	int t;
// 	cout<<"enter the number of arrays you want:";
// 	cin>>t;
//     for(int a=0;a<t;a++){		
//     cout<<"enter the size of the "<< a+1 <<" array: "<<endl;	
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	cout<<"enter the elemnts in array: "<<endl;
// 	for(int i=0;i<n;i++){
// 	    cin>>arr[i];
// 	}
// 	int pro=1;
// 	for(int i=0;i<n;i++){
// 	    pro=pro*arr[i];
// 	}
// cout<<"product of the arry:"<<pro<<endl;	
// }
// return 0;
// }

// 2. Given an array A of size N, print the reverse of it.
// Input:
// First line contains an integer denoting the test cases 'T'. 
// T testcases follow. Each testcase contains two lines of input.
//  First line contains N the size of the array A. 
//  The second line contains the elements of the array.
// Output:
// For each testcase, in a new line, print the array in reverse order.
// #include <iostream>
// using namespace std;
// int main() {
// 		int t;
// 	cout<<"enter the number of test cases "<<endl;
// 	cin>>t;
// 	for(int a=0;a<t;a++){ 
// 	    int n;
// 	    cout<<"enter the size of array:"<<endl;
// 	    cin>>n;
// 	      int arr[n];
// 	// cout<<"the size of array is : "<<n<<endl;
// 	cout<<"enter the array elements: "<<endl;
// 	for(int i=0;i<n;i++){
// 	    cin>>arr[i];
// 	}
// 	cout<<"revers arry; "<<endl;
// 	// int d=n-1;
// 	for(int j=n-1;j>=0;j--){
// 	    cout<<arr[j]<<" "; // dont have to put "\t" it wil fail in test case in adsgg
// 	}
// 	cout<<endl;
// 	}
// 	return 0;
// }

// 3
// #include <iostream>
// using namespace std;
// int main() {
// 	int t;
//     cout<<"enter the number of test cases: "<<endl;
// 	cin>>t;
// 	for(int a=0;a<t;a++){
// 	    int fl,sl;
// 	    cout<<"enter the length of the coloumns ;"<<endl;
// 	    cin>>fl;
// 	    cin>>sl; 
//         int sum1=0;
//     int sum2=0;
// cout<<"enter the score of the students sitting on first line: "<<endl;
// int arr1[fl];
//  for(int j=0;j<fl;j++){
//  cin>>arr1[j];
//  sum1+=arr1[j];
//  }
//  cout<<"enter the score of the students sitting on second line: "<<endl;
// int arr2[sl];
//  for(int k=0;k<sl;k++){
//  cin>>arr2[k];
//  sum2 +=arr2[k];
//  }
//  if(sum1>sum2){
//      cout<<"the output is : c1"<<endl;
//  }else{
//      cout<<"the output is : c2"<<endl;
//  }
//     }
// 	return 0;
// }

// 3 another model
// #include <iostream>
// using namespace std;
// int main() {
// 	int t; 
//      cout<<"enter the number of test cases: "<<endl;
// 	cin>>t;
// 	for(int a=0;a<t;a++){
// 	    int fl,sl;
//             cout<<"enter the length of the coloumns ;"<<endl;
// 	     cin>>fl>>sl;
// 	     int arr1[fl];
//         int arr2[sl];
//          int sum1=0;
//          int sum2=0;
//          cout<<"enter the score of the students sitting on first line: "<<endl;
// 	     for(int j=0;j<fl;j++){
//          cin>>arr1[j];
//          }
//      cout<<"enter the score of the students sitting on second line: "<<endl;
//       for(int k=0;k<sl;k++){
//      cin>>arr2[k];
//     }
//   for(int j=0;j<fl;j++){ //the sum of arr1 score is 
//    sum1+=arr1[j];
//   }
//    for(int j=0;j<sl;j++){ //the sum of arr2 score is 
//   sum2+=arr2[j];
//   }
//   if(sum1>sum2){
//       cout<<"C1"<<endl;
//   }
//   else{
//       cout<<"C2"<<endl;
//   }
// 	}
// 	return 0;
// }


// palindrome number 
// #include<iostream>
// using namespace std;
// int palindrome(int n){
//     int rev=0;
//     while(n=0){
//     n=n%10;
// rev=rev*10+n;
// n=n/10;
//     }
//     cout<<rev;
// return rev;
// }
// int main(){
// int n=376;
// palindrome(n);
// return 0;
// }



//4.inserting an elemnt in array when array have space in it
// #include<iostream>
// using namespace std;
//  int insert(int arr[],int n,int e,int z,int pos){
//       if(n==z){                
//      cout<<"there is no space in array:";
//      return n; //wehen we strore elmets full of arry in first storing that
//     // means there is no space in arry so its will return same size array
//     }
//     int idx=pos-1;
//      for( int i=n-1;i>=idx;i--){
//                arr[i+1]=arr[i];
//      }
//      arr[idx]=e;
//      return n+1;
//  }
// int main(){
//     int z;
//     cout<<"enter the size of array u want "<<endl;
//     cin>>z;
//     int arr[z];
//      int n;
//     cout<<"enter howamny elemnts you want to store: "<<endl;
//     cin>>n;
//     cout<<" enter the elemnts in array"<<endl;
//     for (int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     cout<<"array before insecrting any element in middle of array"<<endl;
//     for (int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int e,pos;
// cout<<"enter the element you want to incer in array: "<<endl;
// cin>>e;
// cout<<"enter the possitin you want to incert element in arry: "<<endl;
// cin>>pos;
// n=insert(arr,n,e,z,pos);  // restoring the final size of arry in n, after inserting elemt by calling fuction ;
//   cout<<"after inserting element:"<<endl;
//   for (int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
//         return 0;
//     }


// searching array elemnt and finding it s index if its there
// #include <iostream>
// using namespace std;
// int search(int arr[], int n, int x){
// 	for(int i = 0; i < n; i++){
// 		if(arr[i] == x)
// 			return i;
// }
// 	return -1;
// } 
// int main() {	
// 	int n;
// 	cout<<"enter the size of the arry: "<<endl;
// 	cin>>n;
// 	int arr[n] = {20, 5, 7, 25};
//     int  x = 7;
//     cout<<search(arr, n, x);    
// }


// deleting element in array 
// #include <iostream>
// using namespace std;
// int delt(int arr[],int n,int x){
// 	int i;
// 	for(i=0;i<n;i++){
// 		if(arr[i]==x){
// 			break;
// 		}
// 	}
// 		if(i==n){
// 			return n;
// 		}	
// for (int j=i; j <n-1;j++){
// arr[j]=arr[j+1];
// }
// return (n-1);
// }
// int main(){
// 	int z;
// int arr[]={9,4,23,5,98,56,43,5,6,5,4};
// int x=98;
// z=delt(arr,11,x);
// for (int i = 0; i <z; i++){
// 	cout<<arr[i]<<" ";
// }
// return 0;
// }

// deleting element in arry another model by user entered input super sucess
// #include <iostream>
// using namespace std;
// int delt(int arr[],int n,int x){
// 	int i;
// 	for(i=0;i<n;i++){
// 		if(arr[i]==x){
// 			break;
// 		}
// 	}
// 		if(i==n){
// 			return n;
// 		}	
// for (int j=i; j <n-1;j++){
// arr[j]=arr[j+1];
// }
// return (n-1);
// }
// int main(){
// 	cout<<"enter the size of the arry: "<<endl;
// 	int n;
// 	cin>>n;
// int arr[n];
// cout<<"enter the elements in arry: ";
// for(int i=0; i<n;i++){
// 	cin>>arr[i];
// }
// cout<<"befeore delting element arry is : "<<endl;
// for(int i=0; i<n;i++){
// 	cout<<arr[i]<<" ";
// }
// int x;
// cout<<endl<<"enter what element you want to delet: "<<endl;
// cin>>x;
// n=delt(arr,n,x);
// for (int i = 0; i <n; i++){
// 	cout<<arr[i]<<" ";
// }
// return 0;
// }

// finding largest element in array
// #include <iostream>
// using namespace std;
// int larg(int arr[],int n){
//      int x=arr[0];
// for(int i=0; i<n;i++){
// if(x>=arr[i]){
// }
// else{
//     x=arr[i];
// }
// }
// return x;
// }
//  int main(){
// 	int z;
// int arr[5]={9,2,9,2,5};
// z=larg(arr,5);
// cout<<z;
// return 0;
// }

//when we want index of largest element  
// T.C is THETA(n)
// #include <iostream>
// using namespace std;
// int larg(int arr[],int n){
//      int x=0;
// for(int i=0; i<n;i++){
// if(arr[x]<arr[i]){
//       x=i;
// }
// }
// return x;
// }
//  int main(){
// 	int z;
// int arr[5]={9,2,90,92,5};
// z=larg(arr,5);
// cout<<z;
// return 0;
// }

// finding largest element in array another model time complexity O(n^2)
// #include <iostream>
// using namespace std;
// int largele(int arr[],int n){  
// for(int i=0; i<n;i++){
//     bool x=true;
//     for(int j=1;j<n;j++){
// if(arr[i]<arr[j]){
//     x=false;
//     break;
// }
//     }
// if(x==true){
//     return i;
// }
// }
// return -1;
// }
//  int main(){
// 	int z;
// int arr[5]={9,99850,2993,579};
// z=largele(arr,5);
// cout<<z;
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int p=100;
//     int *q=&p;
//     // int q=p;
//     cout<<&p<<endl;
//     cout<<*q<<endl;
//     cout<<&(q)<<endl;
//     cout<<&(*q)<<endl;
//     cout<<*q<<endl;
    
// } 
