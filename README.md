# 🎓 Student Management System

A menu-driven **Student Management System** built in **C++** to practice programming fundamentals by developing a real project step by step. Instead of building everything at once, this project follows a **Sprint-Based Development** approach, where each sprint introduces new features and improvements while reinforcing programming concepts.

---

# 📌 Project Goal

The objective of this project is to simulate a basic student management system while improving problem-solving skills, programming logic, debugging, and software development practices.

This project is being continuously improved and expanded with every sprint.

---

## ✨ Features

### ✅ Implemented

* Add Student Records
* View All Students
* Search Student by ID
* Update Student Name
* Update Student Course
* Update Student Percentage
* Delete Student Records
* Delete Student by ID
* Confirmation before deleting a student
* Cancel deletion option
* Shift array elements after deletion
* Store Student Name
* Store Student ID
* Store Student Course
* Store Student Percentage
* Display Total Number of Students
* Menu Driven Interface
* Student Capacity Limitation
* Empty Student List Handling
* Student Not Found Handling
* Invalid Menu Option Handling
* Basic Percentage Validation
-----

## 🚧 Upcoming Features

* 📊 Student Statistics
* 💾 File Handling for Permanent Data Storage
* 🏛️ Object-Oriented Version using Classes
* 🔍 Better Input Validation
* 🧹 Code Refactoring
* 🗃️ Replace Parallel Arrays with Structures/Classes

---

# 🛠 Technologies Used

- C++
- Visual Studio Code
- Git
- GitHub

---

# 📚 Concepts Practiced

- Functions
- Arrays
- Loops
- Switch Statements
- Conditional Statements
- User Input
- Menu Driven Programming
- Problem Solving
- Debugging
- Program Design

---

# 📂 Current Project Structure

```
Student Management System
│
├── Add Student
├── View All Students
└── Exit
```

---

# 🚀 Development Progress

## ✅ Sprint 1 - Foundation

### Features Added

- Created menu-driven interface
- Added multiple student records
- Display all stored students
- Store Name, ID, Course and Percentage
- Display total students
- Handle empty student list
- Improved code organization using functions

### Concepts Learned

- Arrays
- Functions
- Managing multiple records
- Array indexing
- Debugging logical errors

---

## 🚧 Sprint 2 :
### Features Added

- Added a Search Student option to the main menu
- Search students using their Student ID
- Display complete student details when a match is found
- Display a "Student Not Found" message when no matching ID exists
- Handle search attempts when no students have been added

### Concepts Practiced

- Linear Search
- Searching through arrays
- `for` loops
- Conditional statements
- Array indexing
- Functions
- Boolean-style search logic
- Debugging and problem solving

### What I Learned

In this sprint, I learned how Linear Search works and applied it to search through the stored student IDs. The search checks each student one by one until the required ID is found or all stored records have been checked.

---



## 🚧 Sprint 3  - Update Student Information

### Features Added

- Added an Update Student option
- Search for a student using their ID
- Update student name
- Update student course
- Update student percentage
- Allow multiple details to be updated in one session
- Added an option to cancel the update process
- Added invalid update-option handling

### Concepts Practiced

- Array indexing
- Linear Search
- Functions
- `for` loops
- `switch` statements
- `do-while` loops
- Assignment and modifying existing array elements
- Using temporary variables
- Data modification

### What I Learned

In this sprint, I learned how to modify existing data stored in arrays. After finding a student using their ID, the index of that student is used to update the corresponding information in the appropriate array.

---

## 🚧 Sprint 4 
 - Delete Student Records

### Features Added

* Added a Delete Student option
* Search for a student using their ID before deletion
* Display student details before deletion
* Added confirmation before deleting a student
* Delete student by shifting remaining array elements
* Automatically decrease the total student count after deletion
* Added student-not-found handling
* Added deletion-cancellation handling
* Handles deletion when the student list is empty

### Concepts Practiced

* Array shifting
* Array indexing
* Linear Search
* `for` loops
* `if-else` statements
* Modifying multiple arrays together
* Updating the `total` variable
* Handling edge cases
* Debugging and fixing logical errors

### What I Learned

In this sprint, I learned how deletion works when using fixed-size arrays. Since array elements cannot simply be removed, the elements after the deleted student are shifted one position to the left, and the total number of students is decreased.

---

## 🚧 Sprint 5 
 - Delete Student & Input Validation

### Features Added

* Added Delete Student option
* Search for a student using their ID before deletion
* Added confirmation before deleting a student
* Added deletion cancellation
* Shifted remaining student records after deletion
* Decreased total student count after deletion
* Added validation for number of students entered
* Added validation for student percentage
* Added handling for empty student list

### Concepts Practiced

* Array shifting
* Array indexing
* Linear Search
* Functions
* `for` loops
* `if-else`
* `switch` statements
* `do-while` loops
* Modifying existing array elements
* Deleting data from fixed-size arrays
* Input validation
* Returning from functions using `return`
* Handling edge cases

### What I Learned

In this sprint, I learned how deletion works when using fixed-size arrays. Since arrays do not automatically shrink, the records after the deleted student have to be shifted one position to the left and the total number of students has to be reduced.

I also learned the importance of input validation and handling edge cases such as invalid input, an empty student list, and searching for a student that does not exist.

---

# 💻 Sample Output

```
********** Student Management System **********

1. Add Student
2. View All Students
3. Exit

Enter Your Option :
```

---

# 🎯 What I Learned

Through this project I learned how to:

- Store and manage multiple records using arrays
- Organize programs into reusable functions
- Build menu-driven applications
- Improve debugging and logical thinking
- Develop software incrementally using sprint-based development
- Maintain a project using Git and GitHub

---

# 🔄 Future Scope

This project will continue to evolve by adding more real-world features such as searching, updating, deleting, file storage, and eventually converting the project into an Object-Oriented version using C++ classes.

---

# 👨‍💻 Author

**Rishik**

First-Year Engineering Student

Learning C++ • DSA • Git • Software Development

Building projects one sprint at a time 🚀
