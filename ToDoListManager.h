#ifndef ToDoListManager_h
#define ToDoListManager_h
#include "UserInputHandler.h"
#include "ValidationManager.h"
#include <iomanip>

class ToDoListManager {
  public:
    void InsertTask();
    void CompleteTask();
    void DeleteTask();
    void PrintTasks();
  
  private:
    Task task;
    UserInputHandler user_input;
    ValidationManager verify;
    ActionType action;
    TaskList tasks;
    void InsertTask(Task& tasks);
    void DeleteTask(TaskList& tasks, const str& description);
    void CompleteTask(TaskList& tasks, const str& description);
    void PrintTask(TaskList& tasks);
    void PrintToDoListHeaders();
    void PrintToDoListTask(TaskList& tasks);
};

#endif /* ToDoListManager_h */
