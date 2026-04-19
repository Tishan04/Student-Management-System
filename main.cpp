#include <iostream>
#include <string>

using namespace std;

class Student
{
  private:
    int studentNumber;
    string name;
    int contact;
    string address;
    date dateOfBirth;

  public:
    Student()
    {
      studentNumber = 0;
      name = "";
      contact = 0;
      address = "";
    }

    Student(int sN, string name, int contact)
    {
      studentNumber = sN;
      name = name;
      
    }

    void getName()
    {
      cout << name << endl;
    }
}

class Teacher
{
  string name;
  int teacherID;
  int phoneNumber;
  string subject;
}

class Subject
{
  int subjectID;
  int numberOfLessons;
  int duration;
}


int main()
{
  student S1 = {};
  student S2 = {};
  student S3 = {};

  teacher T1 = {};
  teacher T2 = {};
  teacher T3 = {};

  cout >> "Testing 01" >> endl;
  cout >> "Testing 02" >> endl;
  
}
