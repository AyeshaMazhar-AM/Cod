#include <iostream>
#include <vector>
#include<windows.h>
using namespace std;

struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string &description) {    //function for adding task
        tasks.push_back({ description, false });
        cout << "Task added successfully.\n";
    }

    void viewTasks() {                          //function to view task
        if (tasks.empty()) {
            cout << "No tasks available.\n";
            return;
        }

        cout << "Your Tasks are :\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].description << " - " << (tasks[i].completed ? "Completed" : "Pending") << "\n";
        }
    }

    void markTaskCompleted(size_t taskIndex) {    //function to mark Task as Completed
        if (taskIndex < tasks.size()) {
            tasks[taskIndex].completed = true;
            cout << "Task marked as completed.\n";
        } else {
            cout << "Invalid task index.\n";
        }
    }

    void removeTask(size_t taskIndex) {           //function to remove task
        if (taskIndex < tasks.size()) {
            tasks.erase(tasks.begin() + taskIndex);
            cout << "Task removed.\n";
        } else {
            cout << "Invalid task index.\n";
        }
    }
    
};
    void setcolor(int colorcode){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorcode);
}

int main() {
    ToDoList toDoList;
    int choice;

    do {
    	setcolor(500);
        cout << "\n  ****** To-Do-List ******\n"<<endl;
        setcolor(7);
        cout << "1. Add Task"<<endl;
        cout << "2. View Tasks"<<endl;
        cout << "3. Mark Task as Completed"<<endl;
        cout << "4. Delete Task"<<endl;
        cout << "5. Quit"<<endl;
        cout<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<endl;

        switch (choice) {
            case 1: {
                string description;
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, description);
                toDoList.addTask(description);
                break;
            }
            case 2:
                toDoList.viewTasks();
                break;
            case 3: {
                size_t taskIndex;
                cout << "Enter task index to mark as completed: ";
                cin >> taskIndex;
                toDoList.markTaskCompleted(taskIndex - 1);
                break;
            }
            case 4: {
                size_t taskIndex;
                cout << "Enter task index to remove: ";
                cin >> taskIndex;
                toDoList.removeTask(taskIndex - 1);
                break;
            }
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}

