#include <iostream>
#define SIZE 3
using namespace std;
struct sPerson
{
    char full_name[25];
    int age;
    char sex;
};
//sPerson get_subject()
//{
//    sPerson person;
//    cout << "Enter your name: ";
//    cin.getline(person.full_name, 25);
//    cout << "Enter your age: ";
//    cin >> person.age;
//    cout << "Enter your gender (m/f): ";
//    cin >> person.sex;
//    return person;
//}
//void get_subject(sPerson &p)
//{
//    //    sPerson person;
//    cout << "Enter your name: ";
//    cin.getline(p.full_name, 25);
//    cout << "Enter your age: ";
//    cin >> p.age;
//    cout << "Enter your gender (m/f): ";
//    cin >> p.sex;
//}
void get_subject(sPerson *p)
{
    //    sPerson person;
    cout << "Enter your name: ";
    cin.getline(p->full_name, 25);
    cout << "Enter your age: ";
    cin >> p->age;
    cout << "Enter your gender (m/f): ";
    cin >> p->sex;
    cin.ignore();
}
void print(const sPerson &p)
{
    cout << p.full_name << ", age: " << p.age << ", gender: " << p.sex << endl;
}
int main()
{
    //    char full_name[25][SIZE];
    //    int age[SIZE];
    //    char sex[SIZE];
    //    sPerson person = get_subject();
    sPerson *students;
    int n;
    cout << "Enter the number of subjects";
    cin >> n;
    students = new sPerson[n];
    for (int i = 0; i < SIZE; i++) {
        get_subject(&(students[i]));
    }
    for (int i = 0; i < SIZE; i++) {
        print(students[i]);
    }

    delete[] students;
    return 0;
}
