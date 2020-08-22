#ifndef __QUESTION_MC_HPP__
#define __QUESTION_MC_HPP__

#include "question.hpp"

#include <iostream>
#include <vector>

class Question_MC : public Question {
  private:
    std::string question_desc;
    std::string question_ans;
    std::string question_ans_choice1;
    std::string question_ans_choice2;
    std::string question_ans_choice3;
    std::string question_ans_choice4;

  public:
    Question_MC(
     std::string question_desc,
     std::string question_ans,
     std::string question_ans_choice1,
     std::string question_ans_choice2,
     std::string question_ans_choice3,
     std::string question_ans_choice4) : Question() {
      this->question_desc = question_desc;
      this->question_ans = question_ans;
      this->question_ans_choice1 = question_ans_choice1;
      this->question_ans_choice2 = question_ans_choice2;
      this->question_ans_choice3 = question_ans_choice3;
      this->question_ans_choice4 = question_ans_choice4;
    }

    void printQuestion() {
      std::cout << this->question_desc << std::endl;
    }

    void printQuestionAnswers() {
      std::cout << "A. " + this->question_ans_choice1 << std::endl;
      std::cout << "B. " + this->question_ans_choice2 << std::endl;
      std::cout << "C. " + this->question_ans_choice3 << std::endl;
      std::cout << "D. " + this->question_ans_choice4 << std::endl;
    }

    bool correctAns(std::string ans) {
      std::cout << "Correct Answer: " << this->question_ans << std::endl;
      if (ans == "A" || ans == "a") {
        if (this->question_ans == this->question_ans_choice1) {
          return true;
        }
      } else if (ans == "B" || ans == "b") {
         if (this->question_ans == this->question_ans_choice2) {
          return true;
        }
      } else if (ans == "C" || ans == "c") {
         if (this->question_ans == this->question_ans_choice3) {
          return true;
        }
      } else if (ans == "D" || ans == "d"){
         if (this->question_ans == this->question_ans_choice4) {
          return true;
        }
      }
      return false;
    }

    bool getQuestionType() {return false;}
};

#endif //__QUESTION_MC_HPP__