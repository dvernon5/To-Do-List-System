#include "UserInputHandler.h"

void UserInputHandler::SetTaskDescription(const std::string& prompt) {
  std::cout << prompt;
  getline(std::cin, task.description);
}

Task& UserInputHandler::GetCurrentTask() {
  return task;
}

unsigned UserInputHandler::GetUserMenuSelection(unsigned user_input, unsigned low, unsigned high) {
  return MenuSelection(user_input, low, high);
}

unsigned UserInputHandler::MenuSelection(unsigned user_input, unsigned low, unsigned high) {
  while (!(std::cin >> user_input) || user_input < low || user_input > high) {
    std::cerr << "Invalid selection. Please enter a number between "
              << low << " and " << high << ": ";
    ClearKeyboard();
  }
  ClearKeyboard();
  
  return user_input;
}

void UserInputHandler::ClearKeyboard() {
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
