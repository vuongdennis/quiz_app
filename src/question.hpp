#ifndef __QUESTION_HPP__
#define __QUESTION_HPP__

class Question {
  public: 
    Question(){};
    virtual void printQuestion() = 0;
    virtual void printQuestionAnswers() = 0;
    virtual bool correctAns(std::string ans) = 0;
    virtual bool getQuestionType() = 0;
};


#endif //__QUESTION_HPP__