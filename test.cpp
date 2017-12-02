//============================================================================
// Name        : xpp.cpp
// Author      : ht
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*

 #include <iostream>
 #include <cstring>
 #include <string.h>

 using namespace std;

 int main ()
 {
 char str1[11] = "Hello";
 char str2[11] = "World";
 char str3[11];
 int  len ;

 // 复制 str1 到 str3
 strcpy( str3, str1);
 cout << "strcpy( str3, str1) : " << str3 << endl;

 // 连接 str1 和 str2
 strcat( str1, str2);
 cout << "strcat( str1, str2): " << str1 << endl;

 // 连接后，str1 的总长度
 len = strlen(str1);
 cout << "strlen(str1) : " << len << endl;

 return 0;
 }

 */

/*
 #include <iostream>
 #include <string>

 using namespace std;

 int main ()
 {
 string str1 = "Hello";
 string str2 = "World";
 string str3;
 int  len ;

 // 复制 str1 到 str3
 str3 = str1;
 cout << "str3 : " << str3 << endl;

 // 连接 str1 和 str2
 str3 = str1 + str2;
 cout << "str1 + str2 : " << str3 << endl;

 // 连接后，str3 的总长度
 len = str3.size();
 cout << "str3.size() :  " << len << endl;

 return 0;
 }
 */
/*
 #include <iostream>
 #include <string>
 using namespace std;

 int main()
 {
 //定义一个string类对象
 string http = "www.runoob.com";

 //打印字符串长度
 cout<<http.length()<<endl;
 cout << http.size() << endl;
 //拼接
 http.append("/C++");
 cout<<http<<endl; //打印结果为：www.runoob.com/C++

 //删除
 int pos = http.find("/C++"); //查找"C++"在字符串中的位置
 cout<<pos<<endl;
 http.replace(pos, 4, "");   //从位置pos开始，之后的4个字符替换为空，即删除
 cout<<http<<endl;

 //找子串runoob
 int first = http.find_first_of("."); //从头开始寻找字符'.'的位置
 int last = http.find_last_of(".");   //从尾开始寻找字符'.'的位置
 cout<<http.substr(first+1, last-first-1)<<endl; //提取"runoob"子串并打印

 return 0;
 }
 */

/*
 #include <iostream>
 #include <iomanip>
 #include <ctime>

 using namespace std;

 int main(int argc, char **argv) {
 double i = 6.62;
 //	cout.set
 time_t ne = time(0);
 cout << ctime(&ne) << endl;
 }

 */
/*
 #include<iostream>

 #include<iomanip>

 using namespace std;

 int main()

 {

 cout<<12345.0<<endl;//输出12345

 //cout<<fixed<<setprecision(2)<<123.456<<endl;//如果在这个位置就加上fixed的话，后面的输出全部都按照fixed处理

 cout << setprecision(4) << 3.1415926 << endl;//输出的结果是3.142

 cout << setprecision(3) << 12345.0 << endl;//输出的结果是 "1.23e+004 "

 cout << fixed<<setprecision(2) << 123.456 << endl;//输出的结果是123.46，要进行四舍五入

 cout << showpoint << 12345.0 << endl;//输出12345.00

 return 0;
 }

 */
/*
 #include <iostream>
 #include <ctime>

 using namespace std;

 int main( )
 {
 // 基于当前系统的当前日期/时间
 time_t now = time(0);

 cout << "1970 到目前经过秒数:" << now << endl;

 tm *ltm = localtime(&now);

 // 输出 tm 结构的各个组成部分
 cout << "年: "<< 1900 + ltm->tm_year << endl;
 cout << "月: "<< 1 + ltm->tm_mon<< endl;
 cout << "日: "<<  ltm->tm_mday << endl;
 cout << "时间: "<< ltm->tm_hour << ":";
 cout << ltm->tm_min << ":";
 cout << ltm->tm_sec << endl;
 }

 //struct tm {
 //  int tm_sec;   // 秒，正常范围从 0 到 59，但允许至 61
 //  int tm_min;   // 分，范围从 0 到 59
 //  int tm_hour;  // 小时，范围从 0 到 23
 //  int tm_mday;  // 一月中的第几天，范围从 1 到 31
 //  int tm_mon;   // 月，范围从 0 到 11
 //  int tm_year;  // 自 1900 年起的年数
 //  int tm_wday;  // 一周中的第几天，范围从 0 到 6，从星期日算起
 //  int tm_yday;  // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
 //  int tm_isdst; // 夏令时
 //}
 */

/*
 #include <iostream>
 #include <cstring>

 using namespace std;

 // 声明一个结构体类型 Books
 struct Books
 {
 char  title[50];
 char  author[50];
 char  subject[100];
 int   book_id;
 };

 int main( )
 {
 Books Book1;        // 定义结构体类型 Books 的变量 Book1
 Books Book2;        // 定义结构体类型 Books 的变量 Book2

 // Book1 详述
 strcpy( Book1.title, "C++ 教程");
 strcpy( Book1.author, "Runoob");
 strcpy( Book1.subject, "编程语言");
 Book1.book_id = 12345;

 // Book2 详述
 strcpy( Book2.title, "CSS 教程");
 strcpy( Book2.author, "Runoob");
 strcpy( Book2.subject, "前端技术");
 Book2.book_id = 12346;

 // 输出 Book1 信息
 cout << "第一本书标题 : " << Book1.title <<endl;
 cout << "第一本书作者 : " << Book1.author <<endl;
 cout << "第一本书类目 : " << Book1.subject <<endl;
 cout << "第一本书 ID : " << Book1.book_id <<endl;

 // 输出 Book2 信息
 cout << "第二本书标题 : " << Book2.title <<endl;
 cout << "第二本书作者 : " << Book2.author <<endl;
 cout << "第二本书类目 : " << Book2.subject <<endl;
 cout << "第二本书 ID : " << Book2.book_id <<endl;

 return 0;
 }


 #include <iostream>
 #include <cstring>

 using namespace std;
 void printBook( struct Books book );

 // 声明一个结构体类型 Books
 struct Books
 {
 char  title[50];
 char  author[50];
 char  subject[100];
 int   book_id;
 };

 int main( )
 {
 Books Book1;        // 定义结构体类型 Books 的变量 Book1
 Books Book2;        // 定义结构体类型 Books 的变量 Book2

 // Book1 详述
 strcpy( Book1.title, "C++ 教程");
 strcpy( Book1.author, "Runoob");
 strcpy( Book1.subject, "编程语言");
 Book1.book_id = 12345;

 // Book2 详述
 strcpy( Book2.title, "CSS 教程");
 strcpy( Book2.author, "Runoob");
 strcpy( Book2.subject, "前端技术");
 Book2.book_id = 12346;

 // 输出 Book1 信息
 printBook( Book1 );

 // 输出 Book2 信息
 printBook( Book2 );

 return 0;
 }
 void printBook( struct Books book )
 {
 cout << "书标题 : " << book.title <<endl;
 cout << "书作者 : " << book.author <<endl;
 cout << "书类目 : " << book.subject <<endl;
 cout << "书 ID : " << book.book_id <<endl;
 }


 #include <iostream>
 #include <cstring>

 using namespace std;
 void printBook( struct Books *book );

 struct Books
 {
 char  title[50];
 char  author[50];
 char  subject[100];
 int   book_id;
 };

 int main( )
 {
 Books Book1;        // 定义结构体类型 Books 的变量 Book1
 Books Book2;        // 定义结构体类型 Books 的变量 Book2

 // Book1 详述
 strcpy( Book1.title, "C++ 教程");
 strcpy( Book1.author, "Runoob");
 strcpy( Book1.subject, "编程语言");
 Book1.book_id = 12345;

 // Book2 详述
 strcpy( Book2.title, "CSS 教程");
 strcpy( Book2.author, "Runoob");
 strcpy( Book2.subject, "前端技术");
 Book2.book_id = 12346;

 // 通过传 Book1 的地址来输出 Book1 信息
 printBook( &Book1 );

 // 通过传 Book2 的地址来输出 Book2 信息
 printBook( &Book2 );

 return 0;
 }
 // 该函数以结构指针作为参数
 void printBook( struct Books *book )
 {
 cout << "书标题  : " << book->title <<endl;
 cout << "书作者 : " << book->author <<endl;
 cout << "书类目 : " << book->subject <<endl;
 cout << "书 ID : " << book->book_id <<endl;
 }



 #include <iostream>

 using namespace std;

 class Box
 {
 public:
 double length;   // 长度
 double breadth;  // 宽度
 double height;   // 高度
 };

 int main( )
 {
 Box Box1;        // 声明 Box1，类型为 Box
 Box Box2;        // 声明 Box2，类型为 Box
 double volume = 0.0;     // 用于存储体积

 // box 1 详述
 Box1.height = 5.0;
 Box1.length = 6.0;
 Box1.breadth = 7.0;

 // box 2 详述
 Box2.height = 10.0;
 Box2.length = 12.0;
 Box2.breadth = 13.0;

 // box 1 的体积
 volume = Box1.height * Box1.length * Box1.breadth;
 cout << "Box1 的体积：" << volume <<endl;

 // box 2 的体积
 volume = Box2.height * Box2.length * Box2.breadth;
 cout << "Box2 的体积：" << volume <<endl;
 return 0;
 }


 #include <iostream>

 using namespace std;

 class Box
 {
 public:
 double length;         // 长度
 double breadth;        // 宽度
 double height;         // 高度

 // 成员函数声明
 double getVolume(void);
 void setLength( double len );
 void setBreadth( double bre );
 void setHeight( double hei );
 };

 // 成员函数定义
 double Box::getVolume(void)
 {
 return length * breadth * height;
 }

 void Box::setLength( double len )
 {
 length = len;
 }

 void Box::setBreadth( double bre )
 {
 breadth = bre;
 }

 void Box::setHeight( double hei )
 {
 height = hei;
 }

 // 程序的主函数
 int main( )
 {
 Box Box1;                // 声明 Box1，类型为 Box
 Box Box2;                // 声明 Box2，类型为 Box
 double volume = 0.0;     // 用于存储体积

 // box 1 详述
 Box1.setLength(6.0);
 Box1.setBreadth(7.0);
 Box1.setHeight(5.0);

 // box 2 详述
 Box2.setLength(12.0);
 Box2.setBreadth(13.0);
 Box2.setHeight(10.0);

 // box 1 的体积
 volume = Box1.getVolume();
 cout << "Box1 的体积：" << volume <<endl;

 // box 2 的体积
 volume = Box2.getVolume();
 cout << "Box2 的体积：" << volume <<endl;
 return 0;
 }



 #include <iostream>

 using namespace std;

 class Box
 {
 public:
 double length;
 void setWidth( double wid );
 double getWidth( void );

 private:
 double width;
 };

 // 成员函数定义
 double Box::getWidth(void)
 {
 return width ;
 }

 void Box::setWidth( double wid )
 {
 width = wid;
 }

 // 程序的主函数
 int main( )
 {
 Box box;

 // 不使用成员函数设置长度
 box.length = 10.0; // OK: 因为 length 是公有的
 cout << "Length of box : " << box.length <<endl;

 // 不使用成员函数设置宽度
 //   box.width = 10.0; // Error: 因为 width 是私有的
 box.setWidth(10.0);  // 使用成员函数设置宽度
 cout << "Width of box : " << box.getWidth() <<endl;

 return 0;
 }


 #include <iostream>
 using namespace std;

 class Box
 {
 protected:
 double width;
 };

 class SmallBox:Box // SmallBox 是派生类
 {
 public:
 void setSmallWidth( double wid );
 double getSmallWidth( void );
 };

 // 子类的成员函数
 double SmallBox::getSmallWidth(void)
 {
 return width ;
 }

 void SmallBox::setSmallWidth( double wid )
 {
 width = wid;
 }

 // 程序的主函数
 int main( )
 {
 SmallBox box;
 Box box1;
 //   box1.width = 10.0;

 // 使用成员函数设置宽度
 box.setSmallWidth(5.0);
 //   cout << box.width << endl;
 cout << "Width of box : "<< box.getSmallWidth() << endl;

 return 0;
 }


 #include<iostream>
 #include<assert.h>
 using namespace std;

 class A{
 public:
 int a;
 A(){
 a1 = 1;
 a2 = 2;
 a3 = 3;
 a = 4;
 }
 void fun(){
 cout << a << endl;    //正确
 cout << a1 << endl;   //正确
 cout << a2 << endl;   //正确
 cout << a3 << endl;   //正确
 }
 public:
 int a1;
 protected:
 int a2;
 private:
 int a3;
 };
 class B : public A{
 public:
 int a;
 B(int i){
 A();
 a = i;
 }
 void fun(){
 cout << a << endl;       //正确，public成员
 cout << a1 << endl;       //正确，基类的public成员，在派生类中仍是public成员。
 cout << a2 << endl;       //正确，基类的protected成员，在派生类中仍是protected可以被派生类访问。
 //    cout << a3 << endl;       //错误，基类的private成员不能被派生类访问。
 }
 };
 int main(){
 B b(10);
 cout << b.a << endl;
 cout << b.a1 << endl;   //正确
 //  cout << b.a2 << endl;   //错误，类外不能访问protected成员
 //  cout << b.a3 << endl;   //错误，类外不能访问private成员
 system("pause");
 return 0;
 }


 #include<iostream>
 #include<assert.h>
 using namespace std;
 class A{
 public:
 int a;
 A(){
 a1 = 1;
 a2 = 2;
 a3 = 3;
 a = 4;
 }
 void fun(){
 cout << a << endl;    //正确
 cout << a1 << endl;   //正确
 cout << a2 << endl;   //正确
 cout << a3 << endl;   //正确
 }
 public:
 int a1;
 protected:
 int a2;
 private:
 int a3;
 };
 class B : protected A{
 public:
 int a;
 B(int i){
 A();
 a = i;
 }
 void fun(){
 cout << a << endl;       //正确，public成员。
 cout << a1 << endl;       //正确，基类的public成员，在派生类中变成了protected，可以被派生类访问。
 cout << a2 << endl;       //正确，基类的protected成员，在派生类中还是protected，可以被派生类访问。
 //    cout << a3 << endl;       //错误，基类的private成员不能被派生类访问。
 }
 };
 int main(){
 B b(10);
 cout << b.a << endl;       //正确。public成员
 //  cout << b.a1 << endl;      //错误，protected成员不能在类外访问。
 //  cout << b.a2 << endl;      //错误，protected成员不能在类外访问。
 //  cout << b.a3 << endl;      //错误，private成员不能在类外访问。
 system("pause");
 return 0;
 }


 #include<iostream>
 #include<assert.h>
 using namespace std;
 class A{
 public:
 int a;
 A(){
 a1 = 1;
 a2 = 2;
 a3 = 3;
 a = 4;
 }
 void fun(){
 cout << a << endl;    //正确
 cout << a1 << endl;   //正确
 cout << a2 << endl;   //正确
 cout << a3 << endl;   //正确
 }
 public:
 int a1;
 protected:
 int a2;
 private:
 int a3;
 };
 class B : private A{
 public:
 int a;
 B(int i){
 A();
 a = i;
 }
 void fun(){
 cout << a << endl;       //正确，public成员。
 cout << a1 << endl;       //正确，基类public成员,在派生类中变成了private,可以被派生类访问。
 cout << a2 << endl;       //正确，基类的protected成员，在派生类中变成了private,可以被派生类访问。
 //    cout << a3 << endl;       //错误，基类的private成员不能被派生类访问。
 }
 };
 int main(){
 B b(10);
 cout << b.a << endl;       //正确。public成员
 //  cout << b.a1 << endl;      //错误，private成员不能在类外访问。
 //  cout << b.a2 << endl;      //错误, private成员不能在类外访问。
 //  cout << b.a3 << endl;      //错误，private成员不能在类外访问。
 system("pause");
 return 0;
 }
 */

/*
 #include <iostream>
 //#include <io>
 using namespace std;
 class Line{
 public:
 int a;
 };
 int main() {
 Line line;
 line.a = 5;
 cout<<line.a<<endl;
 return 0;
 }
 ////这个是会报错的，应该改成：
 //class Line{
 //    public:
 //    int a;
 //};
 */

/*

 #include <iostream>

 using namespace std;

 class Line {
 public:
 void setLenght( double len);
 double getLenght( void);
 Line(double len);//constructor
 ~Line();
 Line(const Line &obj);

 private:
 double length;
 };

 Line::Line(double len):length(len)
 {
 cout << "Object is being created" << endl;
 //	length = len;
 }

 Line::~Line(void)
 {
 cout << "Object is being deleted" << endl;
 }

 Line::Line(const Line &obj)
 {
 cout << "调用拷贝构造函数" << endl;
 }
 void Line::setLenght(double len)
 {
 length = len;
 }

 double Line::getLenght(void)
 {
 return length;
 }

 int main(int argc, char **argv) {

 Line line(10.999);
 //	line.setLenght(10.2);
 cout << line.getLenght() << endl;

 return 0;
 }
 */

/**/

/*
 #include <iostream>

 using namespace std;

 class Line
 {
 public:
 int getLength( void );
 Line( int len );             // 简单的构造函数
 Line( const Line &obj);      // 拷贝构造函数
 ~Line();                     // 析构函数

 private:
 int *ptr;
 };

 // 成员函数定义，包括构造函数
 Line::Line(int len)
 {
 cout << "调用构造函数" << endl;
 // 为指针分配内存
 ptr = new int;
 *ptr = len;
 }

 Line::Line(const Line &obj)
 {
 cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
 ptr = new int;
 *ptr = *obj.ptr; // 拷贝值
 }

 Line::~Line(void)
 {
 cout << "释放内存" << endl;
 delete ptr;
 }
 int Line::getLength( void )
 {
 return *ptr;
 }

 void display(Line obj)
 {
 cout << "line 大小 : " << obj.getLength() <<endl;
 }

 // 程序的主函数
 int main( )
 {
 Line line1(10);

 Line line2 = line1; // 这里也调用了拷贝构造函数

 display(line1);
 display(line2);

 return 0;
 }
 */

/*
 #include <iostream>

 using namespace std;

 class Box
 {
 double width;
 public:
 friend void printWidth( Box box );
 void setWidth( double wid );
 };

 // 成员函数定义
 void Box::setWidth( double wid )
 {
 width = wid;
 }

 // 请注意：printWidth() 不是任何类的成员函数
 void printWidth( Box box )
 {
 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员
 cout << "Width of box : " << box.width <<endl;
 }

 // 程序的主函数
 int main( )
 {
 Box box;

 // 使用成员函数设置宽度
 box.setWidth(10.0);

 // 使用友元函数输出宽度
 printWidth( box );

 return 0;
 }
 */

/*
 #include <iostream>

 using namespace std;

 class Box
 {
 public:
 // 构造函数定义
 Box(double l=2.0, double b=2.0, double h=2.0)
 {
 cout <<"Constructor called." << endl;
 length = l;
 breadth = b;
 height = h;
 }
 double Volume()
 {
 return length * breadth * height;
 }
 int compare(Box box)
 {
 return this->Volume() > box.Volume();
 }
 private:
 double length;     // Length of a box
 double breadth;    // Breadth of a box
 double height;     // Height of a box
 };

 int main(void)
 {
 Box Box1(3.3, 1.2, 1.5);    // Declare box1
 Box Box2(8.5, 6.0, 2.0);    // Declare box2

 if(Box1.compare(Box2))
 {
 cout << "Box2 is smaller than Box1" <<endl;
 }
 else
 {
 cout << "Box2 is equal to or larger than Box1" <<endl;
 }
 return 0;
 }
 */

/*
 #include <iostream>

 using namespace std;

 class Box
 {
 public:
 // 构造函数定义
 Box(double l=2.0, double b=2.0, double h=2.0)
 {
 cout <<"Constructor called." << endl;
 length = l;
 breadth = b;
 height = h;
 }
 double Volume()
 {
 return length * breadth * height;
 }
 private:
 double length;     // Length of a box
 double breadth;    // Breadth of a box
 double height;     // Height of a box
 };

 int main(void)
 {
 Box Box1(3.3, 1.2, 1.5);    // Declare box1
 Box Box2(8.5, 6.0, 2.0);    // Declare box2
 Box *ptrBox;                // Declare pointer to a class.

 // 保存第一个对象的地址
 ptrBox = &Box1;

 // 现在尝试使用成员访问运算符来访问成员
 cout << "Volume of Box1: " << ptrBox->Volume() << endl;

 // 保存第二个对象的地址
 ptrBox = &Box2;

 // 现在尝试使用成员访问运算符来访问成员
 cout << "Volume of Box2: " << ptrBox->Volume() << endl;

 return 0;
 }
 */

/*
 #include <iostream>

 using namespace std;

 class Box
 {
 public:
 static int objectCount;
 // 构造函数定义
 Box(double l=2.0, double b=2.0, double h=2.0)
 {
 cout <<"Constructor called." << endl;
 length = l;
 breadth = b;
 height = h;
 // 每次创建对象时增加 1
 objectCount++;
 }
 double Volume()
 {
 return length * breadth * height;
 }
 private:
 double length;     // 长度
 double breadth;    // 宽度
 double height;     // 高度
 };

 // 初始化类 Box 的静态成员
 int Box::objectCount = 0;

 int main(void)
 {
 Box Box1(3.3, 1.2, 1.5);    // 声明 box1
 Box Box2(8.5, 6.0, 2.0);    // 声明 box2

 // 输出对象的总数
 cout << "Total objects: " << Box::objectCount << endl;

 return 0;
 }
 */

/*

 #include <iostream>

 using namespace std;

 class Box
 {
 public:
 static int objectCount;
 // 构造函数定义
 Box(double l=2.0, double b=2.0, double h=2.0)
 {
 cout <<"Constructor called." << endl;
 length = l;
 breadth = b;
 height = h;
 // 每次创建对象时增加 1
 objectCount++;
 }
 double Volume()
 {
 return length * breadth * height;
 }
 static int getCount()
 {
 return objectCount;
 }
 private:
 double length;     // 长度
 double breadth;    // 宽度
 double height;     // 高度
 };

 // 初始化类 Box 的静态成员
 int Box::objectCount = 0;

 int main(void)
 {

 // 在创建对象之前输出对象的总数
 cout << "Inital Stage Count: " << Box::getCount() << endl;

 Box Box1(3.3, 1.2, 1.5);    // 声明 box1
 Box Box2(8.5, 6.0, 2.0);    // 声明 box2

 // 在创建对象之后输出对象的总数
 cout << "Final Stage Count: " << Box::getCount() << endl;

 return 0;
 }
 */
/*

 #include <iostream>

 using namespace std;

 // 基类
 class Shape
 {
 public:
 void setWidth(int w)
 {
 width = w;
 }
 void setHeight(int h)
 {
 height = h;
 }
 protected:
 int width;
 int height;
 };

 // 派生类
 class Rectangle: public Shape
 {
 public:
 int getArea()
 {
 return (width * height);
 }
 };

 int main(void)
 {
 Rectangle Rect;

 Rect.setWidth(5);
 Rect.setHeight(7);

 // 输出对象的面积
 cout << "Total area: " << Rect.getArea() << endl;

 return 0;
 }
 */

/*
 #include <iostream>

 using namespace std;

 // 基类 Shape
 class Shape
 {
 public:
 void setWidth(int w)
 {
 width = w;
 }
 void setHeight(int h)
 {
 height = h;
 }
 protected:
 int width;
 int height;
 };

 // 基类 PaintCost
 class PaintCost
 {
 public:
 int getCost(int area)
 {
 return area * 70;
 }
 };

 // 派生类
 class Rectangle: public Shape, public PaintCost
 {
 public:
 int getArea()
 {
 return (width * height);
 }
 };

 int main(void)
 {
 Rectangle Rect;
 int area;

 Rect.setWidth(5);
 Rect.setHeight(7);

 area = Rect.getArea();

 // 输出对象的面积
 cout << "Total area: " << Rect.getArea() << endl;

 // 输出总花费
 cout << "Total paint cost: $" << Rect.getCost(area) << endl;

 return 0;
 }
 */

/*
 #include <iostream>
 using namespace std;

 class printData
 {
 public:
 void print(int i) {
 cout << "整数为: " << i << endl;
 }

 void print(double  f) {
 cout << "浮点数为: " << f << endl;
 }

 void print(string c) {
 cout << "字符串为: " << c << endl;
 }
 };

 int main(void)
 {
 printData pd;

 // 输出整数
 pd.print(5);
 // 输出浮点数
 pd.print(500.263);
 // 输出字符串
 pd.print("Hello C++");

 return 0;
 }
 */

/*

 #include <iostream>
 using namespace std;

 class Box
 {
 public:

 double getVolume(void)
 {
 return length * breadth * height;
 }
 void setLength( double len )
 {
 length = len;
 }

 void setBreadth( double bre )
 {
 breadth = bre;
 }

 void setHeight( double hei )
 {
 height = hei;
 }
 // 重载 + 运算符，用于把两个 Box 对象相加
 Box operator+(const Box& b)
 {
 Box box;
 box.length = this->length + b.length;
 box.breadth = this->breadth + b.breadth;
 box.height = this->height + b.height;
 return box;
 }
 private:
 double length;      // 长度
 double breadth;     // 宽度
 double height;      // 高度
 };
 // 程序的主函数
 int main( )
 {
 Box Box1;                // 声明 Box1，类型为 Box
 Box Box2;                // 声明 Box2，类型为 Box
 Box Box3;                // 声明 Box3，类型为 Box
 double volume = 0.0;     // 把体积存储在该变量中

 // Box1 详述
 Box1.setLength(6.0);
 Box1.setBreadth(7.0);
 Box1.setHeight(5.0);

 // Box2 详述
 Box2.setLength(12.0);
 Box2.setBreadth(13.0);
 Box2.setHeight(10.0);

 // Box1 的体积
 volume = Box1.getVolume();
 cout << "Volume of Box1 : " << volume <<endl;

 // Box2 的体积
 volume = Box2.getVolume();
 cout << "Volume of Box2 : " << volume <<endl;

 // 把两个对象相加，得到 Box3
 Box3 = Box1 + Box2;

 // Box3 的体积
 volume = Box3.getVolume();
 cout << "Volume of Box3 : " << volume <<endl;

 return 0;
 }
 */
/*

 #include <iostream>
 using namespace std;

 class Box
 {
 double length;      // 长度
 double breadth;     // 宽度
 double height;      // 高度
 public:

 double getVolume(void)
 {
 return length * breadth * height;
 }
 void setLength( double len )
 {
 length = len;
 }

 void setBreadth( double bre )
 {
 breadth = bre;
 }

 void setHeight( double hei )
 {
 height = hei;
 }
 // 重载 + 运算符，用于把两个 Box 对象相加
 Box operator+(const Box& b)
 {
 Box box;
 box.length = this->length + b.length;
 box.breadth = this->breadth + b.breadth;
 box.height = this->height + b.height;
 return box;
 }
 };
 // 程序的主函数
 int main( )
 {
 Box Box1;                // 声明 Box1，类型为 Box
 Box Box2;                // 声明 Box2，类型为 Box
 Box Box3;                // 声明 Box3，类型为 Box
 double volume = 0.0;     // 把体积存储在该变量中

 // Box1 详述
 Box1.setLength(6.0);
 Box1.setBreadth(7.0);
 Box1.setHeight(5.0);

 // Box2 详述
 Box2.setLength(12.0);
 Box2.setBreadth(13.0);
 Box2.setHeight(10.0);

 // Box1 的体积
 volume = Box1.getVolume();
 cout << "Volume of Box1 : " << volume <<endl;

 // Box2 的体积
 volume = Box2.getVolume();
 cout << "Volume of Box2 : " << volume <<endl;

 // 把两个对象相加，得到 Box3
 Box3 = Box1 + Box2;

 // Box3 的体积
 volume = Box3.getVolume();
 cout << "Volume of Box3 : " << volume <<endl;

 return 0;
 }
 */

/*

 #include <iostream>
 using namespace std;

 class Distance
 {
 private:
 int feet;             // 0 到无穷
 int inches;           // 0 到 12
 public:
 // 所需的构造函数
 Distance(){
 feet = 0;
 inches = 0;
 }
 Distance(int f, int i){
 feet = f;
 inches = i;
 }
 // 显示距离的方法
 void displayDistance()
 {
 cout << "F: " << feet << " I:" << inches <<endl;
 }
 // 重载负运算符（ - ）
 Distance operator- ()
 {
 feet = -feet;
 inches = -inches;
 return Distance(feet, inches);
 }
 // 重载小于运算符（ < ）
 bool operator <(const Distance& d)
 {
 if(feet < d.feet)
 {
 return true;
 }
 if(feet == d.feet && inches < d.inches)
 {
 return true;
 }
 return false;
 }
 };
 int main()
 {
 Distance D1(11, 10), D2(5, 11);

 if( D1 < D2 )
 {
 cout << "D1 is less than D2 " << endl;
 }
 else
 {
 cout << "D2 is less than D1 " << endl;
 }
 return 0;
 }
 */

/*

 #include <iostream>
 using namespace std;

 class Distance
 {
 private:
 int feet;             // 0 到无穷
 int inches;           // 0 到 12
 public:
 // 所需的构造函数
 Distance(){
 feet = 0;
 inches = 0;
 }
 Distance(int f, int i){
 feet = f;
 inches = i;
 }
 friend ostream &operator<<( ostream &output,
 const Distance &D )
 {
 output << "F : " << D.feet << " I : " << D.inches;
 return output;
 }

 friend istream &operator>>( istream  &input, Distance &D )
 {
 input >> D.feet >> D.inches;
 return input;
 }
 };
 int main()
 {
 Distance D1(11, 10), D2(5, 11), D3;

 cout << "Enter the value of object : " << endl;
 cin >> D3;
 cout << "First Distance : " << D1 << endl;
 cout << "Second Distance :" << D2 << endl;
 cout << "Third Distance :" << D3 << endl;


 return 0;
 }
 */
/*

 #include <fstream>
 #include <iostream>

 using namespace std;

 int main ()
 {

 char data[100];

 // 以写模式打开文件
 ofstream outfile;
 outfile.open("afile.dat");

 cout << "Writing to the file" << endl;
 cout << "Enter your name: ";
 cin.getline(data, 100);

 // 向文件写入用户输入的数据
 outfile << "Name: " << data << endl;

 cout << "Enter your age: ";
 cin >> data;
 cin.ignore();

 // 再次向文件写入用户输入的数据
 outfile << "Age: " << data << endl;

 // 关闭打开的文件
 outfile.close();

 // 以读模式打开文件
 ifstream infile;
 infile.open("afile.dat");

 cout << "Reading from the file" << endl;
 infile >> data;

 // 在屏幕上写入数据
 cout << data << endl;

 // 再次从文件读取数据，并显示它
 infile >> data;
 cout << data << endl;

 // 关闭打开的文件
 infile.close();

 return 0;
 }
 */

/*

 #include <iostream>
 using namespace std;

 double division(int a, int b)
 {
 if( b == 0 )
 {
 throw "Division by zero condition!";
 }
 return (a/b);
 }

 int main ()
 {
 int x ;
 int y ;
 cin >> x >> y;
 cin.ignore();
 double z = 0;

 try {
 z = division(x, y);
 cout << z << endl;
 }catch (const char* msg) {
 cerr << msg << endl;
 }

 return 0;
 }
 */

/*#include <iostream>
 #include <iomanip>
 using namespace std;

 int main ()
 {
 double* pvalue  = NULL; // 初始化为 null 的指针
 pvalue  = new double;   // 为变量请求内存

 *pvalue = 29494.99;     // 在分配的地址存储值

 cout << fixed << setprecision(4);
 cout << "Value of pvalue : " << *pvalue << endl;

 delete pvalue;         // 释放内存

 return 0;
 }*/

/*

 #include <stdio.h>

 int main(int argc, char **argv) {

 int num1,num2;
 printf("input two number,for example: a/b \n");
 scanf("%d/%d",&num1,&num2);
 if(10<=num1 && num1 < num2 && num2 <=100)
 {
 int d,i=0;
 printf("0.");
 do{
 num1 *=10;
 d = num1/num2;
 num1 = num1%num2;
 i++;
 printf("%d",d);
 }while(num1 && i<200);
 printf("\n");
 }

 return 0;
 }

 */

/*
 #include <stdio.h>
 #include <math.h>

 void outNum(int j,int k)
 {
 int absk = abs(k);
 if(absk==1 && j!=1 && j!=0)
 {
 printf("x%d",j);
 }
 else if(absk==1 && j!=0)
 {
 printf("x");
 }
 else if(absk==1)
 {
 printf("%d",absk);
 }
 else if(j==0)
 {
 printf("%d",absk);
 }
 else if(j==1)
 {
 printf("%dx",absk);
 }
 else
 {
 printf("%dx%d",absk,j);
 }

 }

 int main()
 {
 int num[101] = { (0) };
 int cut = 0;
 int ent = 0;
 int i,j,k;
 while(cut < 2)
 {
 k=0;
 scanf("%d %d",&j,&k);
 num[j] += k;
 if(j==0)
 cut++;
 }

 for(i=100;i>-1;i--)
 {
 j=i;
 k=num[j];
 if(k!=0)
 {
 ent++;
 if(cut==2)
 {
 if(k<0)
 printf("-");
 outNum(j,k);
 cut ++;
 }
 else
 {
 if(k<0)
 {
 printf("-");
 outNum(j,k);
 }
 else
 {
 printf("+");
 outNum(j,k);
 }
 }
 }
 }
 if(ent==0)
 printf("0");

 return 0;
 }
 */

/*

 #include <iostream>
 using namespace std;
 int main(int argc, char **argv) {

 void outp1(int *p,int);
 void outp(int (*p)[4]);
 void outp2(int *p,int n);
 int a[][4] = {2,12,43,21,54,31,56,23,15,17,16,19,};
 //	int n = sizeof(a)/sizeof(int);
 //	cout << sizeof(a)/sizeof(int) << endl;
 //	int *p = a[0];
 //	cout << p << " " << p+sizeof(a)/sizeof(int) << endl;
 //	cout << 0x22ff2c - 0x22fefc;
 //	int *p1 = a[0];
 //	int **pp = a;
 outp1(a[0],sizeof(a)/sizeof(int)); //a[0]是 int *
 cout << endl;
 outp(a); //a 是int (*)[4]
 cout << endl;
 outp2(a[0],sizeof(a)/sizeof(int));
 //	int *p = a[0];
 //	cout << p << " " << ++p << endl;
 //	cout << a << " " << a+1;
 //	cout << endl << 0x22ff10 - 0x22ff00;
 return 0;
 }
 void outp1(int *p,int n)
 {
 int *p2 = p;
 for( ; p  < p2 + n; p++)
 cout << *p << " ";
 cout << endl << "this is in outp1 by *p[]!";
 }

 void outp(int (*p)[4])
 {
 for(int i = 0; p+i < p+3; i++)
 for(int j = 0; p +j < p+sizeof(*(p+i))/sizeof(int);j++)
 cout << *(*(p+i)+j) << " ";
 cout << endl << "this is in outp1 by **p!";
 }
 void outp2(int *p,int n)
 {
 int *p2 = p;
 for(;p < p2 +n; p++)
 cout << *(p) << " ";
 cout << endl << "this is in outp2 by *p[]!";
 }

 void outp3(int **p,int n)
 {

 }
 */

/*
 #include <iostream>
 using namespace std;
 int main(int argc, char **argv) {

 char *ch[] ={"this","is","a","test",};
 char **str = ch;
 cout << *str << " " << **str << endl;
 cout << sizeof(ch);
 //	while()
 return 0;
 }
 */
/*
 #include <iostream>
 using namespace std;
 int main(int argc, char **argv) {

 int a[3][4] = {1,3,5,7,9,11,13,15,17,18,21,23};
 int i,j;
 int (*p)[4] = a;//指针指向含有4个整型元素的一维数组

 //	cin >> i >> j;
 //	cout << *(*(a+i)+j) << endl;
 //	for( ; )
 //	cout << sizeof(*p) << endl;
 //	cout << sizeof(a) << endl;
 //	cout << sizeof(p[0]);
 return 0;
 }
 */

/*
 #include <iostream>
 using namespace std;
 int main(int argc, char **argv) {

 int max(int x, int y);
 int (*p)(int,int);
 p = max;
 int a, b, m;
 cin >> a >> b;
 m = p(a,b);
 cout << "max = " << m << endl;
 return 0;
 }
 int max(int x, int y)
 {
 int z;
 if (x > y)
 z = x;
 else
 z = y;
 return z;
 }
 */

/*
 #include <iostream>
 #include <string.h>
 using namespace std;
 int main(int argc, char **argv) {
 void sort(char *name[], int n);
 void print(char *name[], int n);
 char *name[] = { "BASIC", "FORTRAN", "C++", "Pascal", "COBOL"};
 int n = 5;
 sort(name,n);
 print(name,n);
 return 0;
 }
 void sort(char *name[], int n)
 {
 char *temp;
 for(int i = 0; i < n - 1; i++)
 {
 for(int j = i + 1; j < n; j++)
 if(strcmp(name[i], name[j]) > 0)
 {
 temp = name[i];
 name[i] = name[j];
 name[j] = temp;
 }
 }
 }
 void print(char *name[], int n)
 {
 //	for(int i = 0; i < n; i++)
 //		cout << name[i] << endl;
 char **p = name;
 while(p < name+n)
 cout << *(p++) << " ";
 cout << endl;
 }
 */

//注意指针数组和数组指针分别是如何指向二维数组的
/*
 #include <stdio.h>
 int main()
 {
 static int m[3][4]={0,1,2,3,4,5,6,7,8,9,10,11}; 定义二维数组m并初始化
 int (*p)[4];//数组指针  p是指针，指向一维数组,每个一维数组有4个int元素
 int i,j;
 int *q[3];//指针数组 q是数组，数组元素是指针，3个int指针
 p=m;    //p是指针，可以直接指向二维数组
 printf("--数组指针输出元素--\n");
 for(i=0;i<3;i++)输出二维数组中各个元素的数值
 {
 for(j=0;j<4;j++)
 {
 printf("%3d ",*(*(p+i)+j));
 }
 printf("\n");
 }
 printf("\n");
 for(i=0;i<3;i++,p++)//p可看成是行指针
 {
 printf("%3d ",**p);//每一行的第一个元素
 printf("%3d ",*(*p+1));//每一行的第二个元素
 printf("%3d ",*(*p+2));//每一行的第三个元素
 printf("%3d ",*(*p+3));//每一行的第四个元素
 printf("\n");
 }
 printf("\n");
 printf("--指针数组输出元素--\n");
 for(i=0;i<3;i++)
 q[i]=m[i];//q是数组，元素q[i]是指针
 for(i=0;i<3;i++)
 {
 for(j=0;j<4;j++)
 {
 printf("%3d ",q[i][j]);//q[i][j]可换成*(q[i]+j)
 }
 printf("\n");
 }
 printf("\n");
 q[0]=m[0];
 for(i=0;i<3;i++)
 {
 for(j=0;j<4;j++)
 {
 printf("%3d ",*(q[0]+j+4*i));
 }
 printf("\n");
 }
 printf("\n");
 return 0;
 }
 */
/*
 #include <iostream>
 using namespace std;
 int main(int argc, char **argv) {
 int a,z= 0;
 cin >> a;
 while(a)
 {
 z+=a;
 cin >> a;
 }
 cout << z;
 return 0;
 }
 */

/*
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main(int argc, char **argv) {
	Student stu(20, 90, "female");
	stu.getInfo();
	cout << endl << stu.getSize();
	cout << endl << sizeof(stu);
	string st = "this";
	cout << endl << sizeof(st);
	int *p = new int(5);
	Student *pst = new Student();
	cout << endl << *p << endl;
	pst->getInfo();
	return 0;
}
*/

/*

#include <iostream>
#include "Point.h"
using namespace std;

int main(int argc, char **argv) {

	Point point(3.2, 4.5);
	Circle circle(2.4,1.2,5.6);
	Cylinder cylinder(3.5,6.4,5.2,10.5);
	Point *cy1 = new Cylinder(5.3,8.6,4.5,6.3);
	point.shapeName();
	cout << point << endl;

	circle.shapeName();
	cout << circle << endl;

	cylinder.shapeName();
	cout << cylinder << endl;

	Shape *pt;
	pt = &point;
	pt->shapeName();
	cout << "x=" << pt->getX() << " y=" << pt->getY() << "\narea=" << pt->area()
			<< "\nvolume=" << pt->volume() << "\n\n";

	pt = &circle;
	pt->shapeName();
	cout << "x=" << pt->getX() << " y=" << pt->getY() << "\narea=" << pt->area()
			<< "\nvolume=" << pt->volume() << "\n\n";
	pt = &cylinder;
	pt->shapeName();
	cout << "x=" << pt->getX() << " y=" << pt->getY() << "\narea=" << pt->area()
			<< "\nvolume=" << pt->volume() << "\n\n";


	cy1->shapeName();
	cout << "x=" << cy1->getX() << " y=" << cy1->getY() << "\narea=" << cy1->area()
			<< "\nvolume=" << cy1->volume() << "\n\n";
	delete cy1;
	return 0;
}
*/

//编译环境Windows 7 VS2015 Update3 //编译成32位程序
/*
#include <iostream>
#include <stdlib.h>
using namespace std;
class A {
public:
	virtual void a(void) {
		cout << "A::a 函数发骚了" << endl;
	}
	virtual void b(void) {
		cout << "A::b 函数发骚了" << endl;
	}
	virtual void c(void) {
		cout << "A::c 函数发骚了" << endl;
	}

	virtual ~A(){}
};
int main() {
	void (*fun)(void);//函数指针,其数据类型是void (*)(void)
	A A_demo;
	cout << &A_demo << endl;//输出的是A_demo对象的首地址
	//(&A_demo)对象首地址
	// ///\*((int *)&A_demo)虚函数表首地址
	//(*((int *)(*((int *)&A_demo))))虚函数表的第一个函数地址。
	fun = (void(*)(void))(*((int *)(*((int *)&A_demo))));
	cout << fun << endl;
	cout << *((int *)&A_demo) << endl;
	fun();

	fun = (void(*)(void))(*((int *)(*((int *)&A_demo)) + 1));
	cout << fun << endl;
	fun();

	fun = (void(*)(void))(*((int *)(*((int *)&A_demo)) + 2));
	cout << fun << endl;
	fun();

	return 0;
}
*/
/*

#include <iostream>
using namespace std;
double cube(double a){
	return a*a*a;
}
double recube(const double &b){
	double d = b;
	d *= b * b;
	return d;
}
double pcube(const double *p){

	double d = *p;
	d *= *p * *p;

	return d;
}
int main(int argc, char **argv) {

	double a = 3;
	double c = 4;
	double d = 5;
	long edge = 42;
//	char a;
//	cin >> a;
	cout << a << " " << cube(a+3.0) << endl;
	cout << c << " " << recube(edge) << endl;
	cout << d << " " << pcube(&d) << endl;
	cout << "d = " << d << endl;
	cout << "a = " << a << endl;
	cout << "c = " << c << endl;
//	cout << a++ <<" "<< ++a << endl;
	int a1 = 1;
	int a2 = 2;
	cout << ++a1 << endl;
	cout << ++a2 << " " << a2++ << endl;
	return 0;
}
*/
/*

#include <iostream>
#include "Point.h"
using namespace std;
int main(int argc, char **argv) {

	Cylinder cy(2.3,4.6,5.8,7.0);
//	cy.setHeight(2.6);
	cout << cy.area();
	return 0;
}
*/
/*
#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char **argv) {

	char first[20],first2[10];
	char second[30];
	cin >>first >> first2;
	strcat(first," ");
	strcat(first,first2);
	cout << first;
	char *p;
	p = strchr(first, ' ');
	*p = 0;
	strcpy(second,p+1);
	strcat(second," ");
	strcat(second,first);
	cout << endl << second << endl;

	return 0;
}
*/
/*
#include <iostream>
using namespace std;

int seqSearch(int list[],int start,int n, int key){
	for(int i = start; i < n; i++)
		if(list[i] == key)
			return i;
	return -1;
}
int main(int argc, char **argv) {

	int a[10];
	int key,count = 0,pos;
	cout << " enter 10 number: ";
	for(pos = 0; pos < 10; pos++)
		cin >> a[pos];
	cout << "enter a key: ";
	cin >> key;
	pos = 0;
	while((pos = seqSearch(a,pos,10,key)) != -1)
		{
			count++;
			pos++;//序号后移
		}
	cout << key << "occurs " << count
		 << (count != 1 ? " times" : " time")
		 << "in the list." << endl;
	return 0;
}*/
/*

#include <iostream>
using namespace std;
template <class Type>
class dataList{
public:
	dataList(int size = 10):arraySize(size),Element(new dataList[size]){}
	~dataList(){delete [] Element;}
	void sort() const;
	friend ostream &operator <<(ostream &out, const dataList<Type> &outList);
	friend istream &operator >> (istream &in, const dataList<Type> &inList);
private:
	Type *Element;
	int arraySize;
	int maxKey(const int low, const int high);
	void swap(const int mark1, const int mark2);

};

template <class Type>
void dataList <Type>::swap(const int mark1, const int mark2)
{
	Type temp = Element[mark1];
	Element[mark1] = Element[mark2];
	Element[mark2] = Element[mark1];
}

template <class Type>
int dataList<Type>::maxKey(const int low,const int high)
{
	int max = low;
	for(int i = low + 1; i < high; i++)
		if(Element[max] < Element[i])
			max = i;
	return max;
}

template< class Type >
ostream &operater << (ostream &out, const dataList<Type> &outList)
{
	out << " Srray Content: \n";
	for(int i = 0; i < outList.size; i++)
		out << Element[i] << ' ';
	out << endl;
	out << "array current size: " << outList.arraySize << endl;
	return out;
}

template <class Type>
istream &operator >> (istream &in, const dataList<Type> &inList)
{

}

//template < class Type >
//void dataList <Type> ::sort()
//{
//	for()
//	{
//
//	}
//}



*/





