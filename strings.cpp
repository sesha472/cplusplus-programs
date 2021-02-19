// pring a-z
// #include<iostream>
// using namespace std;
// int main(){
//     char x,y;
// cin>>x;   
// cin>>y;   
//     for (char i=x; i<=y;i++){
// cout<<i<<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string a;
// cout<< "enter the name: "<<endl; 
// cin>>a; 
// cout<<"the string is :"<<a ;   
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string a="sesha";
//     string b(a+"hi");
// cout<<"the string is :"<<b;  seshahi
// }

// finding the given letter is vowel or not 
// #include<iostream>
// using namespace std;
// int main(){
//     char letter;
//     cout<<"enter  the alphabet: ";
//     cin>>letter;
//    if( (letter=='a')||(letter=='e')||(letter=='i')||(letter=='o')||(letter=='u')){
//     cout<<"you entered vowel";
//     }else{
//     cout<<"you entered noraml letter";
//      }
// return 0;
// }



// string methods

// char array => cin.getline(arr,size)
// #include<iostream>
// using namespace std;
// int main(){
// char a[10];
// cout<<"enter the string : ";
// cin.getline(a,10);  // or we can use this method also=> cin.get(a,10);
// cout<<a;    
// }

//  printing every element in string =>getline(cin,string)
// #include<iostream>
// using namespace std;
// int main(){
// string a;
// cout<<"enter the string: ";
// getline(cin,a);
// for(int i=0; i<a.length(); i++){
//     cout<<a[i]<<endl;
// }
// }

// finding the size of the string a.sice()=>gives total bytes (char=1) 
// #include<iostream>
// using namespace std;
// int main(){
// string a;
// cout<<"enter the string: ";
// cin>>a;
// cin>>a;  // onlly prints first word
// cout<<a<<endl;   
// getline(cin,a);
// cout<<a<<endl;   
// cout<<a.size()<<endl;
// cout<<a.length();   //size and length both give byte sizes 
// }

// b.assign(a)=> assinging a to b
// #include<iostream>
// using namespace std;
// int main(){
// string a="sesha";
// string b;
// string c;
// b.assign(a);
// cout<<b<<endl;     //sesha
// cout<<a[2];   //  s
// }

// #include<iostream>
// using namespace std;
//  int main(){
//     string a;
//     char b[]={'a','k','a','s'};
//     cin>>a;
//     // cin>>b;
//     if(a<b){
//    cout<<"a is big";
//     }
//     else
//     {
//      cout<<"b is big";
//     }
// }

// strcpy(b,a) for char arrays
// #include<iostream>
// using namespace std;
// int main(){
//     char a[10]={'a','d','f'};
//     char b[10];
//     strcpy(b,a);  
// cout<<"the string is :"<<b<<endl;    //s
// cout<<"the string is :"<<a;    //s
// }


// name.at() function
// #include<iostream>
// using namespace std;
// int main(){
//     string name="sesha";
// cout<<"the string is :"<<name.at(3);  //s
// }

//  append function
// #include<iostream>
// using namespace std;
// int main(){
//     string a="sesha";
//     string b;
//     b.append(a,2,2); // sh //from 2 index position to 2 elemnts stored in b
//     cout<<b;
// }

// a.compare(b)=>return 0 if trure else 1 also check selected char is there or not
// #include<iostream>
// using namespace std;
// int main(){
//     string a= "sesha sai";
//     string b="sesha sai";
//     // string c="sesha";
//     string d="sesha";
//     bool c=a.compare(1,3,"esh"); //this will return bool values 0 oor 1
//          cout<<c;
//     return 0;
// }

// a.empty()=> chech string is empyty taht ha no charector if empty return 1. else 0.
// #include<iostream>
// using namespace std;
// int main(){
//     string a="sai";
//   int b=a.empty();
//     cout<<b;
// }

// a.substr(pos,len(default len is string len))=> copy the prat of the string.
// #include<iostream>
// using namespace std;
// int main(){
//     string a="product";
//     string b;
//     b=a.substr(3,2);
//     cout<<b;
// }

// a.insert(pos,b) a string into another string at position
// #include<iostream>
// using namespace std;
// int main(){
//     string a="sesha kumar";
//     string b="sai";
//     a.insert(6,b);
//     cout<<a;
// }

// a.replace(pos,len,b)=>
// #include<iostream>
// using namespace std;
// int main(){
//     string a="seshasai";
//     string b="kumar";
//    string c= a.replace(4,2,b);
//     cout<<c;
// }

// a.erase(pos,len)=> delete/erase the charectes in given range,if range is not given delet whole string
// #include<iostream>
// using namespace std;
// int main(){
//     string a="seshasai";
//     a.erase(4,2);
//     cout<<a<<endl;
// }

// a.clear()=> to arrase whole string 
//  #include<iostream>
//  using namespace std;
//  int main(){
//     string a="seshasai";
//     a.clear();
//     cout<<a<<endl;
//     a="hi";
//     cout<<a<<endl;
// }

// a.find('s'or"string); => will retru the index possition of the given char in string 
//  #include<iostream>
//  using namespace std;
//  int main(){
//     string a="seshasai";
//     cout<<a.find("ha")<<endl;
//     // cout<<a.substr(0,4);
//  }
 

// #include <iostream>
// using namespace std;
// void display(char s[]);
// void display(string s);
// int main()
// {
//     string str1;
//     char str[100];
//     cout << "Enter a string: ";
//     getline(cin, str1);
//     cout << "Enter another string: ";
//     cin.get(str, 100);
//     display(str1);
//     display(str);
//     return 0;
// }
// void display(char s[]){
//     cout << "Entered char array is: " << s << endl;
// }
// void display(string s){
//     cout << "Entered string is: " << s << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
// // char name[]="india";
// char num[]={1,2,3,4};
// // cout<<name<<endl;
// cout<<num;
// }




// strings comparison
//  #include<iostream>  
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

// finding the length of the string 
//  #include<iostream>  
// using namespace std;  
// int main()  {  
//     string a="sesha";
//     cout<<"the length of the string is : "<< a.length();
// }

// swaping the values of string
//  #include<iostream>  
// using namespace std;  
//   int main()  {  
//     string a="sesha";
//     string b="sai";
//      cout<< a<<endl;
//      cout<< b<<endl;
//     a.swap(b);   //we dont have to store the result in another variable just call the swap function
//     cout<<"after the swap: "<<endl;
//      cout<< a<<endl;
//      cout<< b;
// }

// pass by value pass by reference 
// #include <iostream>
// using namespace std;
// void fun(int *x,int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int i=10;
//     int j=20;
//     fun(&i,&j);
//     cout<<i<<" "<<j;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char str[10];
//     cout << "Enter a string: ";
//     cin.get(str,10);
//     cout << "You entered: " << str << endl;
//     return 0;
// }

// assigning string values in diffrent types
// #include<iostream>
// using namespace std;
// int main(){
//     string str1="nellore";
//     string str2= str1;     // o/p=> nellore  (assinging str1 value to str2)
//     string str3(str1);    // o/p=>nellore (assinging str1 value to str3)
//     string str4;
//      str4.assign(str1);    //o/p=>nellore (assinging str1 value to str4)
//     cout<<str1<<endl;       
//     cout<<str2<<endl;       
//     cout<<str3<<endl;       
//     cout<<str4<<endl;       
// }

// modifing string
// #include<iostream>
// using namespace std;
// int main(){
//   string city="nellore";
//   city[2]='s';
//   cout<<city<<endl;  //o/p=> neslore
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char name[4];
//     cout<<"emter the name: ";
//     cin.getline(name,4,'t');
//     cout<<"entered name is : "<<name;
// }

// #include<iostream>
// using namespace std;
//  int main(){
//     string name="sesha saikumar a";
//     // cout<< name.length();
//     for(int j=0;j<name.length();j++){
//         if(name[j]=='a'){
//             cout<<j;
//         }
//         // cout<<name[j];  
// }
// }

// concating in differet style strings
// #include<iostream>
// using namespace std;
// int main(){
//  string x= "high";
// char y[ ]= "school";
// char z[ ]= {'w', 'a', 's', '\0'};
// string p = "good";
// string s = x+y+' '+z+" very"+" "+p+'!';
//  cout<<"s= "<<s<<endl;
// }

// read entair lines 
// #include<iostream>
// using namespace std;
// int main ()
// {
// string content="sesha";
//  string line;
//  cout << "Please introduce a text. – Enter an empty line to finish:\n";
//  do {
//  getline(cin,line);
//  content += line + '\n';
//  } while (!line.empty());
//  cout << "The text you introduced was:\n" << content;
//    return 0;
// }
// string is collection of charectres  c++ there is two types of string used
// 1.c-style string 
// 2.string objcts in c++ libarery 


// #include <iostream>
// using namespace std;
// int main()
// {
//     char str[100];
//     // string sai;
//     cout << "Enter a string: ";
//     // cin.get(str, 100);
//     // getline(cin,sai);
//     cin>>str;    // 

//     cout << "You entered: " << str << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
// #include<iostream>
// using namespace std;
// int main(){
//     string name="hydarabad";
//     char name3[5]={'s','e','s','h','a'};
//     int num[5]={1,2,3,4,4};
//     // string name2(name);
//     // cout<<name2[2];
//     cout<<name3<<endl;
//     cout<<&num[0]<<endl;
//     cout<<num;
//     // name()
// }






