#include "ValidationManager.h"

bool ValidationManager::ValidateTask(const TaskList& tasks, const str& description, ActionType action) {
  return SetupValidateTask(tasks, description, action);
}

bool ValidationManager::SetupValidateTask(const TaskList& tasks, const str& description, ActionType action) {
  switch (action) {
    case ActionType::Insert:
      is_valid_task = ValidateInsertTask(tasks, description);
      break;
    case ActionType::Delete:
    case ActionType::Modify:
    case ActionType::Print:
      is_valid_task = ValidateTaskExistence(tasks, description);
      break;
    default:
      perror("Invalid action");
  }
  
  return is_valid_task;
}

bool ValidationManager::ValidateInsertTask(const TaskList &tasks, const str &description) {
  if (IsUserSelectionBlank(description)) {
    perror("Task you entered is blank");
    is_valid_task = false;
  } else if (DoesTaskExist(tasks, description)) {
    perror("Task already exists");
    is_valid_task = false;
  } else {
    is_valid_task = true;
  }
  
  return is_valid_task;
}

bool ValidationManager::ValidateTaskExistence(const TaskList &tasks, const str &description) {
  if (IsListEmpty(tasks)) {
    perror("List is empty");
    is_valid_task = false;
  } else {
    is_valid_task = true;
  }
  
  return is_valid_task;
}

bool ValidationManager::DoesTaskExist(const TaskList& tasks, const str& description) {
  auto it = std::find_if(tasks.begin(), tasks.end(), [&description](const Task& task) {
    return task.description == description;
  });
  
  return it != tasks.end();
}

bool ValidationManager::IsUserSelectionBlank(const str &description) {
  return description.size() == 0;
}

bool ValidationManager::IsListEmpty(const TaskList& tasks) {
  return tasks.empty();
}
