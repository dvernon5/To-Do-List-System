#ifndef ValidationManager_h
#define ValidationManager_h
#include "Task.h"
#include "ActionType.h"
#include <vector>
using str = std::string;
using TaskList = std::vector<Task>;

class ValidationManager {
  public:
    bool ValidateTask(const TaskList& tasks, const str& description, ActionType action);
  
  private:
    bool is_valid_task;
    bool SetupValidateTask(const TaskList& tasks, const str& description, ActionType action);
    bool ValidateInsertTask(const TaskList& tasks, const str& description);
    bool ValidateTaskExistence(const TaskList& tasks, const str& description);
    bool DoesTaskExist(const TaskList& tasks, const str& description);
    bool IsUserSelectionBlank(const str& description);
    bool IsListEmpty(const TaskList& tasks);
};

#endif /* ValidationManager_h */
