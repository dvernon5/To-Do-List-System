# To-Do List Application

This is a simple console-based to-do list application written in C++. It provides basic functionalities to manage tasks efficiently through a command-line interface. 

## Features 
* Add Task: Add new tasks to your to-do list.
* Mark Task as Done: Mark tasks as completed or pending.
* Delete Task: Remove tasks from the to-do list.
* List Tasks: Display all tasks in the to-do list along with their completion status.

## How to Use
1. Building the Application:
   * Clone the repository to your local machine.
   * Navigate to the project directory.
   * Compile the source code using your preferred C++ compiler.
2. Running the Application:
   * Execute the compiled executable file.
   * Follow the on-screen instructions to manage your to-do list.
3. Commands:
   * Add Task: Add a new task to the to-do list.
   * Mark Task as Done: Mark a task as completed or pending.
   * Delete Task: Remove a task from the to-do list.
   * List Tasks: Display all tasks in the to-do list.
   * Exit: Close the application.
  
## How It Works
The application consists of the following main components:
* ToDoListManager: Manages tasks and provides functionalities like adding, completing, deleting, and listing tasks.
* UserInputHandler: Handles user input for adding tasks and selecting menu options.
* ValidationManager: Validates user input and ensures data integrity.
* Task: Defines the structure of a task with a description and completion status.
* ActionType: Enumerates different actions that can be performed on tasks.
