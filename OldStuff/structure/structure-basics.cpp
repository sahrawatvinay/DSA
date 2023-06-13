#include <iostream>
using namespace std;
struct Student
{
    int rollNo;
    string name;
    int age;
} s1, s2, s3;

int main()
{
    s1.rollNo = 1;
    s1.name = "David";
    s1.age = 24;

    s2.rollNo = 2;
    s2.name = "James";

    s3.rollNo = 3;

    struct Student s4;
    struct Student s5 = {5, "Anna", 28};
    
    cout << sizeof(s1) << endl;
    cout << sizeof(s4) << endl;
    cout << s1.age << endl;
    cout << s2.age << endl;
    cout << s3.name << endl;

    return 0;
}