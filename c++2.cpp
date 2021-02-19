


// #include<iostream>
// using namespace std;
// class vehical  {
//    string carname;
//     int carnumber; 
//  public:
//     void getdetails(string a,int b){
//         carname=a;
//         carnumber=b;
//     }
//     void showdetails(){
//          cout<<carname<<"  car number is "<<carnumber;
//     }
// };
//     int main(){
//         vehical obj1;
//         obj1.getdetails("audi",8);
//         obj1.showdetails();
//         return 0;
//     }



// #include<iostream>
// using namespace std;
// class vehical{
//     public:
//     string carname;
//     int carnumber;
//     void getdetails(string a,int b){
//         carname=a;
//         carnumber=b;
//     }
//     void showdetails(){
//          cout<<carname<<"  car number is "<<carnumber;
//     }
// };
// int main(){
//     vehical obj1;
//     obj1.getdetails("audi1",990);
//     obj1.showdetails();
//     return 0;
// }





// #include<iostream>
// using namespace std;
// void func (int num)
// {
// cout<<"num = "<<num<<endl; 
// num = 10;
// cout<<"num = "<<num<<endl;
// }
// int main() {
// int n = 5;
// cout<<"Before function call: n = "<<n<<endl; 
// func(n);
// cout<<"After function call: n = "<<n<<endl;
// }

// #include<iostream>
// using namespace std;
// void func (int &num)
// {
// cout<<"num = "<<num<<endl; 
// num = 10;
// cout<<"num = "<<num<<endl;
// }
// int main() {
// int n = 5;
// cout<<"Before function call: n = "<<n<<endl; 
// func(n);
// cout<<"After function call: n = "<<n<<endl;
// }

// #include<iostream>
// using namespace std;
// void func(int *num)
// {
// cout<<"num = "<<*num<<endl; 
// *num = 10;
// cout<<"num = "<<*num<<endl;
// }
// int main() {
// int n = 5;
// cout<<"Before function call: n = "<<n<<endl; func(&n);
// cout<<"After function call: n = "<<n<<endl;
// }




// basic structure program
// #include<iostream>
// using namespace std;
// struct robo{ 
//     int x,y;
// };
// int main(){
//     robo obj;
//     obj.x=9;
//      cout<<obj.x;
//  }

// private d.m accesing in structures 
// #include<iostream>
// using namespace std;
// struct robo{ 
//     private:    //if we try to acces private d.m error will come
//     int x,y;
//     public:
//     void sum(int a,int b){
//         x=a;
//         y=b;
//         cout<<x+y;
//     }
//     void sum(){
//         x=10;
//         y=20;
//         cout<<x+y;
//     }
// };
// int main(){
//     robo obj;
//     obj.sum(2,3);
//     cout<<endl;
//     robo obj2;
//     obj.sum();
//  }

// basic structre program with m.f constructor 
// #include<iostream>
// using namespace std;
// struct sum{ 
//     int w,h;
//     sum(int a,int b){
//      w=a;
//      h=b;
//      cout<<w+h; 
//     }
//     void greeting(){
//         cout<<"good job:";
//     }
// };
// int main(){
// sum obj1(2,3);
// cout<<endl;
// sum obj2(1,2);
// obj1.greeting();
// }

// structure as argument function
// #include<iostream>
// using namespace std;
// struct sum{ 
//     int w,h;
//     void greeting(){
//         cout<<"good job:"<<endl;
//     }
// };
// void showdetails(sum g){
// cout<<g.w<<endl;
// cout<<g.h;
// }
// int main(){
// sum obj1;
// obj1.w=2;
// obj1.h=3;
// cout<<endl;
// sum obj2;
// obj2.w=1;
// obj2.h=2;
// obj1.greeting();
// showdetails(obj1);
// }

// structure to function as argument
// #include <iostream>
// using namespace std;
// struct Person{
//     char name[50];
//     int age;
//     float salary;
// };
// void displayData(Person a);   // Function declaration
// int main(){
//     Person p;
//     cout << "Enter Full name: ";
//     cin.get(p.name, 50);
//     cout << "Enter age: ";
//     cin >> p.age;
//     cout << "Enter salary: ";
//     cin >> p.salary;
//     // Function call with structure variable as an argument
//     displayData(p);
//     return 0;
// }
// void displayData(Person a) {
//     cout << "\nDisplaying Information." << endl;
//     cout << "Name: " << a.name << endl;
//     cout <<"Age: " << a.age << endl;
//     cout << "Salary: " << a.salary;
// }


// returning structure from function 
// #include <iostream>
// using namespace std;
// struct Person {
//     char name[50];
//     int age;
//     float salary;
// };
// Person getData(Person);   //functin declaration
// void displayData(Person); //function declaration
// int main() {
//     Person p;
//     p = getData(p);   
//     displayData(p);
//     return 0;
// }
// Person getData(Person p) {
//     cout << "Enter Full name: ";
//     cin.get(p.name, 50);
//     cout << "Enter age: ";
//     cin >> p.age;
//     cout << "Enter salary: ";
//     cin >> p.salary;
//     return p;
// }
// void displayData(Person p){
//     cout << "\nDisplaying Information." << endl;
//     cout << "Name: " << p.name << endl;
//     cout <<"Age: " << p.age << endl;
//     cout << "Salary: " << p.salary;
// }



















