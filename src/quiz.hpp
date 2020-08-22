#ifndef __QUIZ_HPP__
#define __QUIZ_HPP__

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

#include <iostream>
#include <string>
#include <ctime>
#include <math.h>
#include <vector>

using namespace std;

class Quiz{

    private:    //private variables

        int score;
        int count;//number of questions (used to end the game and alternate between the two types of questions)
        int correct;//number of correct responses
        int currStreak;//current streak counter for determining streak scores
        int small;//big streak counter
        int big;//small streak counter
        PointGain*pGain;
        PointLoss*pLoss;
        PointStreakBig*sBig;
        PointStreakSmall*sSmall;
        string difficulty;//for printing at the end
        Question_Factory* factory;
        vector<Question*> question_bank;
        vector<char> progress={'_','_','_','_','_','_','_','_','_','_','_','_','_','_','_'};
        int questionCounter = 0;

    public:     //public functions:

        //Constructor:
        Quiz():score(0),count(15),correct(0),currStreak(0),small(0),big(0),pGain(new PointGain),sBig(new PointStreakBig),sSmall(new PointStreakSmall){
            string choice;
            cout<<"-> CS100 FINAL EXAM REVIEW QUIZ <-"<<endl;
            while(choice!="0"&&choice!="Easy"&&choice!="1"&&choice!="Medium"&&choice!="2"&&choice!="Hard"){//input verification
                cout<<"Enter Difficulty [0 - Easy, 1 - Medium, 2 - Hard]:" <<endl<<">> ";
                cin>>choice;
                cin.clear();
                cin.ignore(1000, '\n');
            }
            if(choice=="0"||choice=="Easy"){
                Difficulty*d=new Difficulty(0);
                pLoss=new PointLoss(d->getDifficulty());
                difficulty="Easy";
            }
            else if(choice=="1"||choice=="Medium"){
                Difficulty*d=new Difficulty(1);
                pLoss=new PointLoss(d->getDifficulty());
                difficulty="Medium";
            }
            else{
                Difficulty*d=new Difficulty(2);
                pLoss=new PointLoss(d->getDifficulty());
                difficulty="Hard";
            }
            choice="";
            while(choice!="0"&&choice!="True/False"&&choice!="1"&&choice!="Multiple Choice"){
                cout << "Enter Quiz Mode [0 - True/False, 1 - MultipleChoice]: "<<endl<<">> ";
                cin >> choice;
                cout<<endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }
            factory = new Question_Factory();
            question_bank = factory->createQuestion(choice);
            startGame();
        };

    private:    //private helpers:


        void startGame(){//TODO: actual game
            while(count>0){
                displayProgress();
                bool outcome=environment();
                grade(outcome);
                count--;
            }
            displayProgress();
            result();//this is the final thing that shows how player did
        }

        bool environment(){//TODO: prints everything
            cout<<"====================================================================="<<endl;
            cout<<"Question #"<<16-count<<endl;
            bool correctness=ask();
            //cout<<"====================================================================="<<endl;
            return correctness;
        }

        void displayProgress(){
            cout<<"Progress: " << progress.at(0);
            for(unsigned i = 1; i < progress.size(); ++i)
                cout << progress.at(i);
            cout<<endl;
        }

        bool ask(){//print out question one time per call
          string choice;
          question_bank.at(questionCounter)->printQuestion();
          question_bank.at(questionCounter)->printQuestionAnswers();
          cout << endl <<">> ";
          cin >> choice;
          
          if (question_bank.at(questionCounter)->getQuestionType()) {
            while (choice != "T" && choice != "F" && choice != "t" && choice != "f") {
            cout << "Enter a Valid Input [T, F, t, or f]: " << endl;
            cin >> choice;
            cout<<endl;
            cin.clear();
            cin.ignore(1000, '\n');
            }
          } else {
            while (choice != "A" && choice != "B" && choice != "C" && choice != "D" && choice != "a" && choice != "b" && choice != "c" && choice != "d") {
            cout << "Enter a Valid Input [a, b, c, d, A, B, C, or D]: " << endl;
            cin >> choice;
            cout<<endl;
            cin.clear();
            cin.ignore(1000, '\n');
            }
          }
          cout << endl;
          if (question_bank.at(questionCounter)->correctAns(choice)) {
            questionCounter++;
            return true;
          } else {
            questionCounter++;
            return false;
          }  
        }

        void grade(bool outcome){
            if(outcome){
                progress.at(questionCounter-1)='+';
                currStreak++;
                correct++;
                if(currStreak>=5){
                    score=sBig->PointChange(score);
                    big++;
                }
                else if(currStreak>=3){
                    score=sSmall->PointChange(score);
                    small++;
                }
                else
                    score=pGain->PointChange(score);
            }
            else{
                progress.at(questionCounter-1)='-';
                currStreak=0;
                score=pLoss->PointChange(score);
            }
        }

        void result(){
            cout<<"====================================================================="<<endl;
            cout<<"-> Quiz Completed <-"<<endl;
            cout<<"====================================================================="<<endl;
            cout<<"Difficulty           : "<<difficulty<<endl;
            cout<<"Questions Answered   : "<<15-count<<" out of 15"<<endl;
            cout<<"Correct Responses    : "<<correct<<" out of 15"<<endl;
            cout<<"Small Streaks        : "<<small<<endl;
            cout<<"Big Streaks          : "<<big<<endl;
            cout<<"Total Score          : "<<score<<endl;
            cout<<"====================================================================="<<endl<<endl;
        }
};

#endif //__QUIZ_HPP__