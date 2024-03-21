#ifndef BuildToDoListManagementSystem_h
#define BuildToDoListManagementSystem_h
#include "ToDoListManager.h"

class BuildToDoListManagementSystem {
  public:
    void BuiltManagementSystem();
  
  private:
    ToDoListManager todo_list;
    ValidationManager verify;
    const unsigned NUMBER_OF_SELECTION = 5;
    unsigned selection = 0;
    void BuildManagementSystem();
    void PrintMenuSelection();
};

#endif /* BuildToDoListManagementSystem_h */
