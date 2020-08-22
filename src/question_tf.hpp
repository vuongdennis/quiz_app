#ifndef __QUESTION_TF_HPP__
#define __QUESTION_TF_HPP__

#include "question.hpp"

#include <iostream>
#include <vector>

class Question_TF : public Question {
  private:
    std::string question_desc;
    std::string question_ans;
    std::string question_ans2;
  public:
    Question_TF(std::string question_desc, std::string question_ans, std::string question_ans2) : Question() {
      this->question_desc = question_desc;
      this->question_ans = question_ans;
      this->question_ans2 = question_ans2;
    }

    void printQuestion() {
      std::cout << this->question_desc << std::endl;
    }

    void printQuestionAnswers() {
      std::cout << "T" << std::endl;
      std::cout << "F" << std::endl;
    }

    bool correctAns(std::string ans) {
      std::cout << "Correct Answer: " << this->question_ans << std::endl;
      if (this->question_ans == ans || this->question_ans2 == ans) {
        return true;
      } else {
        return false;
      }
    }

    bool getQuestionType() {
      return true;
    }

};

#endif //__QUESTION_TF_HPP__