#ifndef __QUESTION_FACTORY_HPP__
#define __QUESTION_FACTORY_HPP__

#include "question.hpp"
#include "question_mc.hpp"
#include "question_tf.hpp"

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <ctime>

class Question_Factory {
  private:
    std::vector<std::string> vect_question_tf = {
      "You allowed to be flexible using the Waterfall method.",
      "Agile is an individual method.",
      "After each sprint, goals and progress are re-assessed and re-prioritized and a new sprint is planned.",
      "Unit testing usually tests an individual function.",
      "GUI testing includes the size of the buttons and input field present on the screen, alignment of all text, tables and content in the tables.",
      "An acceptance test is performed by the client and verifies whether the end to end flow of the system is as per the business requirements or not and if it is as per the needs of the end user.",
      "Usability testing is to see how many users use the program.",
      "Stubs are typically used in a top-down approach, where you create the highest level modules first and the systems that module calls doesn’t exist.",
      "Drivers are typically used in a bottom-up approach, where you create the innermost modules and need to simulate a higher level system call them.",
      "Encapsulation in C++ is accomplished primarily through private and protected members and methods.",
      "Abstraction is primarily accomplished through private methods.",
      "Interfaces are not specific to object oriented programming and are commonacross many programming paradigms.",
      "Superclass and subclass allow us to discuss how a set of classes are relatedthrough inheritance.",
      "Protected members are accessible for anyone.",
      "The Composite Pattern consists of NOT using tree like structures."
    };
    std::vector<std::string> vect_question_tf_answers = {
      "F",
      "F",
      "T",
      "T",
      "T",
      "T",
      "F",
      "T",
      "T",
      "T",
      "F",
      "T",
      "T",
      "F",
      "F"
    };

    std::vector<std::string> vect_question_tf_answers2 = {
      "f",
      "f",
      "t",
      "t",
      "t",
      "t",
      "f",
      "t",
      "t",
      "t",
      "f",
      "t",
      "t",
      "f",
      "f"
    };

    std::vector<std::string> vect_question_mc = {
      "How long is a typical Sprint Cycle?",
      "What is usually not in the Composite Pattern?",
      "Which is NOT non-functional testing?",
      "Which command will go to the user's home?",
      "Which command doesn't exist?",
      "Which command is the final step to give your code to Github?",
      "Which command is for creating a new branch?",
      "Which command is for checking what files aren't version controlled?",
      "What is a common C++ testing framework?",
      "What does cd stand for?",
      "In the Strategy Pattern, I won't be: ",
      "Which command is to add files onto the staging area of Github?",
      "What type of language is used to implement design patterns?",
      "Which is not a part of Agile?",
      "In a Unit Test are we testing a: ",
    };

    std::vector<std::vector<std::string>> vect_question_mc_choices = {
      {"1 Week", "2 Weeks", "3 Weeks", "4 Weeks"},
      {"Leaves", "Components", "Composites", "Decorators"},
      {"Performance Testing", "Load Testing", "Stress Testing", "Acceptance Testing"},
      {"cd home", "cd ~", "cd /", "cd ../home"},
      {"echo hello", "say hello", "cd hello", "git status"},
      {"git status", "git force", "git push", "git commit"},
      {"git clone", "git branch <name>", "git add <name>", "git push"},
      {"git push --set", "git status", "git checkout", "git add"},
      {"Googletest", "JUnit", "C++Test", "ForkTest"},
      {"Change Directory", "Change Direction", "Change Dimension", "Checkout Directory"},
      {"Define a family of algorithms", "Encapsulate each one", "Make them interchangeable", "Use trees"},
      {"git commit", "git add", "git force", "git fork"},
      {"C++", "Java", "Any of them", "Python"},
      {"Scrum", "Kanban", "Standup Meetings", "Fork"},
      {"Function", "Program", "Paired Programming", "Formulas"}
    };

    std::vector<std::string> vect_question_mc_answer = {
      "2 Weeks", 
      "Decorators", 
      "Acceptance Testing", 
      "cd ~",
      "say hello",
      "git push",
      "git branch <name>",
      "git status",
      "GoogleTest",
      "Change Directory",
      "Use trees",
      "git add",
      "Any of them",
      "Fork",
      "Function"
    };

    std::vector<Question*> vect_of_questions;

  public:
    Question_Factory(){};
    std::vector<Question*> createQuestion(std::string questionID) {
      std::srand(std::time(0)); //seed
      //0 is T/F
      if (questionID == "0") {
        for (int i = 0; i < 15; i++) {
          Question_TF* question = new Question_TF(vect_question_tf[i], vect_question_tf_answers[i], vect_question_tf_answers2[i]);
          vect_of_questions.push_back(question);
        }
        return vect_of_questions;
      } else {
        for (int i = 0; i < 15; i++) {
          int arr[] = {0, 1, 2, 3};

          int n = sizeof(arr) / sizeof(arr[0]); 
  
          shuffle_array(arr, n); 

          Question_MC* question = new Question_MC(vect_question_mc[i], vect_question_mc_answer[i], vect_question_mc_choices[i][arr[0]], vect_question_mc_choices[i][arr[1]], vect_question_mc_choices[i][arr[2]], vect_question_mc_choices[i][arr[3]]);
          vect_of_questions.push_back(question);
        }
        return vect_of_questions;
      }
    }

    void shuffle_array(int arr[], int n) { 
  
    // To obtain a time-based seed 
    unsigned seed = 0; 
  
    // Shuffling our array using random_shuffle 
    std::random_shuffle(arr, arr + n); 
    } 
};

#endif //__QUESTION_TF_HPP__