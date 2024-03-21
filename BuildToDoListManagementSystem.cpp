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
