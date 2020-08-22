#include <iostream>
#include <string>

#include "quiz.hpp"
#include "point.hpp"
#include "point_decorator.hpp"
#include "point_gain.hpp"
#include "point_loss.hpp"
#include "point_streak_big.hpp"
#include "point_streak_small.hpp"
#include "question.hpp"
#include "question_factory.hpp"
#include "question_mc.hpp"
#include "question_tf.hpp"
#include "difficulty.hpp"
#include "difficulty_easy.hpp"
#include "difficulty_medium.hpp"
#include "difficulty_hard.hpp"

// int main() {
//   Question_Factory* factory = new Question_Factory();
  
//   std::string question_int = "1";
//   std::vector<Question*> question_bank = factory->createQuestion(question_int);
//   std::string choice;
//   int points = 0;

//   for (int i = 0; i < question_bank.size(); i++) {
//     question_bank[i]->printQuestion();
//     question_bank[i]->printQuestionAnswers();
//     std::cout << std::endl;
//     std::cin >> choice;
//     if (question_bank[i]->correctAns(choice)) {
//       points++;
//     }
//     std::cout << points << std::endl;
//   }

//   return 0;
// }

// int main(){//timer test
//     int x=-1,y=-1,z=-1;
//     Timer*t=new Timer(0);
//     x=t->getTime();
//     Timer*t2=new Timer(1);
//     y=t2->getTime();
//     Timer*t3=new Timer(2);
//     z=t3->getTime();
//     cout<<x<<" "<<y<<" "<<z<<endl;
//     return 0;
// }

// int main(){//point test
//     int score = 0;
//     PointGain* pG = new PointGain();
//     PointLoss* pL = new PointLoss();
//     PointStreakSmall* sSmall = new PointStreakSmall();
//     PointStreakBig* sBig = new PointStreakBig();
//     score=pG->PointChange(score);
//     cout<<score<<endl;
//     score=pL->PointChange(score);
//     cout<<score<<endl;
//     score=sSmall->PointChange(score);
//     cout<<score<<endl;
//     score=sBig->PointChange(score);
//     cout<<score<<endl;
//     return 0;
// }

int main(){
    Quiz*q=new Quiz();
    return 0;
}