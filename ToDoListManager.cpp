#include "ToDoListManager.h"

void ToDoListManager::InsertTask() {
  user_input.SetTaskDescription("Enter a task to insert into list: ");
  task = user_input.GetCurrentTask();
  action = ActionType::Insert;
  if (verify.ValidateTask(tasks, task.description, action)) {
    InsertTask(task);
  }
}

void ToDoListManager::InsertTask(Task& task) {
  tasks.push_back(task);
  std::cout << task.description << " added successfully\n";
}

void ToDoListManager::DeleteTask() {
  action = ActionType::Delete;
  if (verify.ValidateTask(tasks, task.description, action)) {
    user_input.SetTaskDescription("Enter a task to delete: ");
    task = user_input.GetCurrentTask();
    DeleteTask(tasks, task.description);
  }
}

void ToDoListManager::DeleteTask(TaskList& tasks, const str& description) {
  auto it = std::find_if(tasks.begin(), tasks.end(), [&description](const Task& task) {
    return task.description == description;
  });
  
  if (it != tasks.end()) {
    tasks.erase(it);
    std::cout << "Task " << task.description << " deleted successfully\n";
  } else {
    std::cout << "Task " << task.description << " not found\n";
  }
}

void ToDoListManager::CompleteTask() {
  action = ActionType::Modify;
  if (verify.ValidateTask(tasks, task.description, action)) {
    user_input.SetTaskDescription("Enter a task to mark complete or not complete: ");
    task = user_input.GetCurrentTask();
    CompleteTask(tasks, task.description);
  }
}

void ToDoListManager::CompleteTask(TaskList& tasks, const str& description) {
  auto it = std::find_if(tasks.begin(), tasks.end(), [&description](const Task& task) {
    return task.description == description;
  });
  
  if (it != tasks.end() && !it->isCompleted) {
    it->isCompleted = true;
    std::cout << "Task " << task.description << " has been completed.\n";
  } else if (it->isCompleted) {
    it->isCompleted = false;
    std::cout << "Task " << task.description << " is not completed.\n";
  }else {
    std::cout << "Task " << task.description << " not found\n";
  }
}

void ToDoListManager::PrintTasks() {
  action = ActionType::Print;
  if (verify.ValidateTask(tasks, task.description, action)) {
    PrintTask(tasks);
  }
}

void ToDoListManager::PrintTask(TaskList& tasks) {
  PrintToDoListHeaders();
  PrintToDoListTask(tasks);
}

void ToDoListManager::PrintToDoListHeaders() {
  std::cout << std::setw(20) << std::left << "TASK"
            << std::setw(1) << std::left << "STATUS\n";
  std::cout << std::setw(20) << std::left << "----"
            << std::setw(1) << std::left << "------\n";
}

void ToDoListManager::PrintToDoListTask(TaskList &tasks) {
  for (const auto& task : tasks) {
    std::cout << std::setw(20) << std::left << task.description
              << std::setw(1) << std::left << (task.isCompleted ? "Completed" : "Not Completed")
              << std::endl;
  }
}
