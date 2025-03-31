![added](https://github.com/user-attachments/assets/e687e529-2da5-49b0-af98-d46b1450e8d9)
![display](https://github.com/user-attachments/assets/9d661f7a-432e-4f3c-951b-161cf62b1812)
![remove](https://github.com/user-attachments/assets/19e2d8de-5c5a-4681-98ac-b95ce54dd94a)
![search](https://github.com/user-attachments/assets/dba64869-9d70-4e69-a851-2cdadfdfade2)
![exit](https://github.com/user-attachments/assets/cddfdd55-29ba-4224-be18-d3352e41ae1f)


Student Management System Overview:

✅ 1. Purpose:

This C++ program implements a Student Management System using class templates and a vector to manage student records. It provides the following functionalities:

    Add a student.

    Display all students.

    Search for a student by ID.

    Remove a student by ID.

    Exit the system.

📌 2. Class Structure:
➡️ Student Class (Template):

    Template Parameters:

        T1 → Data type for student ID (usually int).

        T2 → Data type for student name (usually string).

    Attributes:

        T1 id → Stores the student ID.

        T2 name → Stores the student name.

    Constructor:

        Initializes id and name using parameters.

    Methods:

        void display() → Displays the student's ID and name.

        T1 getId() → Returns the student's ID.

📌 3. Utility Functions:
➡️ displayAllStudents()

    Purpose: Displays all students in the vector.

    Parameters:

        vector<Student<T1, T2>> &students → Reference to the vector of Student objects.

    Logic:

        If vector is empty, displays Student Not Found!.

        Otherwise, iterates through the vector and calls display() on each student.

➡️ searchStudent()

    Purpose: Searches for a student by ID and returns the index.

    Parameters:

        vector<Student<T1, T2>> &students → Reference to the vector.

        T1 id → ID of the student to search.

    Logic:

        Iterates through the vector to compare id with the getId() method.

        Returns the index if a match is found, otherwise returns -1.

➡️ removeStudent()

    Purpose: Removes a student by ID.

    Parameters:

        vector<Student<T1, T2>> &students → Reference to the vector.

        T1 id → ID of the student to be removed.

    Logic:

        Calls searchStudent() to find the index.

        If the student is found (index != -1), deletes the student using students.erase().

📌 4. Main Menu and Program Flow:
➡️ main() Function:

    Vector Declaration:
    vector<Student<int, string>> students; → Stores student records.

    Menu-driven Program:

        Uses a do-while loop to display options until choice == 5.

        Displays the menu:

            Add Student

            Display Students

            Remove Student

            Search Student

            Exit

        Based on user input, calls appropriate functions.

🔄 5. Functionalities:
➡️ Add Student:

    Prompts for id and name.

    Creates a new Student object and adds it to the vector.

    Displays Added Successfully!!.

➡️ Display Students:

    Calls displayAllStudents() to list all students.

➡️ Remove Student:

    Prompts for id.

    Calls removeStudent() to delete the student if found.

    Displays Remove Successfully! if successful.

➡️ Search Student:

    Prompts for id.

    Calls searchStudent() to find the student.

    If found, displays the student's details.

    Otherwise, displays Student Not Found!.

➡️ Exit Program:

    Exits the program by breaking out of the loop when choice == 5.

⚡️ 6. Key Concepts:

    Templates: Enables reusability with different data types.

    Vectors: Dynamic array used to store student objects.

    Object-Oriented Programming (OOP): Encapsulation, constructor, and member functions.

