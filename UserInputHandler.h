#ifndef UserInputHandler_h
#define UserInputHandler_h
#include "Task.h"

class UserInputHandler {
  public:
    void SetTaskDescription(const std::string& prompt);
    Task& GetCurrentTask();
    unsigned GetUserMenuSelection(unsigned user_input, unsigned low, unsigned high);
  
  private:
    Task task;
    unsigned MenuSelection(unsigned user_input, unsigned low, unsigned high);
    void ClearKeyboard();
};

#endif /* UserInputHandler_h */
