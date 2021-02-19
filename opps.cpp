
// sample class program
// #include<iostream>
// using namespace std;
// class vehical{
//     public:      //must be public to acess out side of the calss
//     string carname;
//     int carnumber; 
// };
// int main(){
//     vehical obj1;
// obj1.carname="bmw";  
// obj1.carnumber=9;
// cout<<obj1.carname<<"car number is : "<<obj1.carnumber;  
//     return 0;
// }

// ENCAPUSLATION: biding related datamembers and member fuction s intooa single unit.
//  => class is the best exampleof encapsulation 
// #include<iostream>
// using namespace std;
// class vehical{
//     int x; 
//     public:
//     void set(){x=100;}
//     void get(){cout<<x; }
// };
// int main(){
//     vehical obj1;
//     obj1.set();
//     obj1.get();
//         return 0;
// }

// abstraction
// #include<iostream>
// using namespace std;
// class rectangle {
//         int w,h;
//         public:
//      void setvalues(int x,int y){
//              w=x;
//              h=y;
//      }    
//      void getw(){
//              cout<<w;
//      }
//      void geth(){
//         cout<<h;
//      }
//      int area(){
//              cout<<"area is : "<<h*w;
//      }
// };
// int main(){
//         rectangle obj;
//         obj.setvalues(4,5);
//         obj.area();
// }


// call by value call by refarence
// #include<iostream>
// using namespace std;
// void funtcion(int *x){
//         *x=100; 
//            cout<<*x<<"function"<<endl;  
// }
// int main(){
//         int a=20;
//         cout<<a<<endl;
//         funtcion(&a);
//         cout<<a;
//         return 0;
// }









 //funcion overriding 
// #include<iostream>
// using namespace std;
// class base1 {
//         int a;
//         public:
//      virtual void greet(){    //vertuval vadaapothey base call ey cal authundi 
//                 cout<<"a classs: ";
//        }     
// };
// class derived1: public base1{
// public:
// void greet(){
//         cout<<"b class: ";
// }
// };
// class derived2: public derived1{
//         public:
//        void  greet(){
//                 cout<<"c class";
//         }
// };
// int  main(){
//         base1 *p=new derived2();
//         p->greet();
//         return 0;
// }




// #include<iostream>
// using namespace std;
// class cal{
//   protected:
//         int x,y;
//    public:
//         void set(int a,int b){
//         x=a;
//         y=b;
//         }
//    void impliment(int a,int b){
//                 cout<<x<<"value"<< y;
//         }
// };
// class adition: public cal{
//         public:
//          void impliment(int a,int b){
//          cout<<x+y;
//    }
// };
// class multi: public cal{
//           public:
//          void impliment(int a, int b){
//          cout<<x+y<<"hi";
//    }
// };
// class subtact: public cal{
//           public:
//        void impiment(int a, int b){
//          cout<<x-y<<"hi2";
//    }
// };
// int main(){
//      subtact obj,*p;
//      p=&obj;
//      p->set(200,30);
//      p->impliment(4,6);
//      return 0;

// }

//         adition add;
//         multi mul;
//         subtact sub;

//         p=&obj;
//         p->set(30,10);
//       p->impliment();
//       return 0;


// }


// simple class program 
// #include<iostream>
// using namespace std;
// class studet{  
//     int id;      //private d.m so acess through m.f
//     string name;
//     string branch;
//     public:
// void setdetails(int i,string n,string b){
//    name=n;
//    id=i;
//    branch=b;
//      }
//     void showdetails(); //defenition outside class derived
// };
// void studet :: showdetails(){                 //m.f declearing outside of the calass
//         cout<<"name is    : "<<name<<endl;
//         cout<<"id is      : "<<id<<endl;
//         cout<<"branch is  : "<<branch<<endl;
//     }
// int main(){
//     studet stu1 ,stu2;
//     stu1.setdetails(900,"aakash","cse");
//     stu2.setdetails(472,"sesha","ece");
//     stu1.showdetails();
//     stu2.showdetails();
//     return 0;
// }

// constructure parameter construture lo d.m public lo undali kachithamga
// #include<iostream>
// using namespace std;
// class studet{
//     public:
//       string name;
//         int id;
//       string branch;
//  public:
//      studet(string n,int n,string b){
//       name=n;
//       id=i;
//       branch=b;
//       cout<<name<<endl;  //d.m provate lo unte e 3 exicute aypoi, total anni objects details print authai.
//       cout<<id<<endl;     // perticular object details kavallnte d.m public lo peytti line 55-57 rayali
//       cout<<branch<<endl;
//      }
// };
// int main(){
//     studet stu1("aakash",900,"cse");
//     studet stu2("sesha",472,"ece");
        // cout<<"name is    : "<<stu1.id<<endl; // e 3 exixute kavlante d.m public lo undali
        // cout<<"id is      : "<<stu1.id<<endl;
        // cout<<"branch is  : "<<stu1.branch<<endl;
// return 0;
// }

// parameter constructor another exam[le]
// #include<iostream>
// using namespace std;
// class robo{
//     int x,y;
//     public:
//     robo(int a,int b){
//         x=a;
//         y=b;
//         cout<<x+y;
//     }
// };
// int main(){
//     robo obj(1,2);
//     return 0;
// }

// constructor & distructor
// #include<iostream>
// using namespace std;
// class robo
// {
//     int x,y;
// public:
//     // robo(int a, int b){  //outside class lo kuda ryachu
//     // x=a;
//     // y=b;
//     // cout<<x+y<<endl;
//     // }
//     robo(int a, int b);    //outside class ki ikkada declare cehyali
//     ~robo(); //{         
//     //     cout<<"hi";
//     // }
// };
// robo::robo(int a, int b){
//        x=a;
//        y=b;
//        cout<<x+y<<endl;
//        }
//  robo:: ~robo(){
//        cout<<"hi";
//        }
//    int main(){
//     robo obj(10,9);
// }

// contsructure overloading
// #include<iostream>
// using namespace std;
// class sum
// {
//     int x,y;
// public:
//     sum(){
//     x=10;
//     y=20;
//     }
//  sum(int a){  //outside class lo kuda ryachu
//     x=a;
//     y=a;
//     }
//   sum(int a,int b){
//       x=a;
//       y=b;
//   }
//   void add(){
//    cout<<x+y<<endl;
//   }
// };
// int main(){
//     sum obj1,obj2(2),obj3(9,9);
//     obj1.add();
//     obj2.add();
//     obj3.add();
// }

//  function overlaoding
// #include<iostream>
// using namespace std;
// class robo{
//         int x,y;
//         public:
//         void add(){
//                 x=10;
//                 y=30;
//    cout<<x+y;
//         }
//    void add(int a){
//            x=a;
//            y=4;
//            cout<<x+y;
//    }
//    void add(int a,int b){
//            x=a;
//            y=b;
//            cout<<x+y;
//    }
// };
// int main(){
//         robo obj;
//         obj.add(30,9);
//         return 0;
// }




