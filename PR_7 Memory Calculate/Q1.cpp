#include <iostream>
#include <vector>
using namespace std;

template <typename T1, typename T2>
class Student
{
public:
    T1 id;
    T2 name;

    Student(T1 id, T2 name)
    {
        this->id = id;
        this->name = name;
    }

    void display()
    {
        cout << "ID:" << id << endl;
        cout << "Name:" << name << endl;
    }

    T1 getId()
    {
        return id;
    }
};

template <typename T1, typename T2>
void displayAllStudents(vector<Student<T1, T2>> &students)
{
    if (students.empty())
    {
        cout << " Student Not Found!" << endl;
        return;
    }
    for (auto &student : students)
    {
        student.display();
    }
}

template <typename T1, typename T2>
int searchStudent(vector<Student<T1, T2>> &students, T1 id)
{
    for (size_t i = 0; i < students.size(); i++)
    {
        if (students[i].getId() == id)
        {
            return i;
        }
    }
    return -1;
}

template <typename T1, typename T2>
int removeStudent(vector<Student<T1, T2>> &students, T1 id)
{
    int index = searchStudent(students, id);
    if (index != -1)
    {
        students.erase(students.begin() + index);
        cout << "Remove Successfully!" << endl;
    }
}

int main()
{
    vector<Student<int, string>> students;
    int choice, id;
    string name;

    do
    {
        cout<<endl;
        cout << "*** Student Management System ***" << endl;
        cout << endl;
        cout << "1. Add Students" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Remove Students" << endl;
        cout << "4. Search Students" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your Choice:";
        cin >> choice;

        cout<<endl;
        switch (choice)
        {
        case 1:
            cout << "Enter Id:";
            cin >> id;
            cout << "Enter Name:";
            cin.ignore();
            getline(cin, name);
            students.push_back(Student<int, string>(id, name));
            cout << "Added Successfully!!"<<endl;
            break;

        case 2:
            displayAllStudents(students);
            break;

        case 3:
            cout << "Enter Id:";
            cin >> id;

            removeStudent(students, id);
            break;

        case 4:
            cout << "Enter Id:";
            cin >> id;
            if (searchStudent(students, id) != -1)
            {
                students[searchStudent(students, id)].display();
            }
            else
            {
                cout << "Student Not Found!" << endl;
            }
            break;

        case 5:
            cout << "Exit The Current Program!" << endl;
            break;
        default:
            cout << "Invalid Choice!!" << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}