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
  
}
