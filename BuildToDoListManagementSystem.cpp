#include "BuildToDoListManagementSystem.h"

void BuildToDoListManagementSystem::BuildManagementSystem() {
  BuildManagementSystem();
}

void BuildToDoListManagementSystem::BuildManagementSystem() {
  do {
    PrintMenuSelection();
    selection = verify.ValidatedMenuSelectionInput(selection, 0, NUMBER_OF_SELECTION);
    switch (selection) {
      case 1:
        todo_list.InsertTask();
        break;
      case 2:
        todo_list.CompleteTask();
        break;
      case 3:
        todo_list.DeleteTask();
        break;
      case 4:
        todo_list.PrintTasks();
        break;
      case 5:
        std::cout << "Thank you. Goodbye!!\n";
        break;
    } while (selection != NUMBER_OF_SELECTION);
  }
}

void BuildToDoListManagementSystem::PrintMenuSelection() {
  std::cout << "\nWelcome to the To-Do List Management System\n";
  std::cout << "1. Add Task.\n";
  std::cout << "2. Mark Task Complete/Pending.\n";
  std::cout << "3. Delete Task\n";
  std::cout << "4. List Tasks\n";
  std::cout << "5. EXIT\n";
  std::cout << "Your Selection >> ";
}
