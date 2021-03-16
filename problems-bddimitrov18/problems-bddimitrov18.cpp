#include <iostream>
#include"students.h"
using namespace std;
int main()
{
    STUDENT student = {1,"anton","georgiev",12,5};
    cout << student.name << " " << student.surname;
}

