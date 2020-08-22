#ifndef __QUESTION_TEST_HPP__
#define __QUESTION_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/question.hpp"
#include "../src/question_tf.hpp"
#include "../src/question_mc.hpp"
#include "../src/question_factory.hpp"

#include <vector>

TEST(QuestionTest, QuestionTF_BasicTrueAns) {
	Question_TF* question = new Question_TF("Quest_Desc", "T", "t");
	EXPECT_EQ(question->correctAns("T"), true);
}

TEST(QuestionTest, QuestionTF_BasicQuestionType) {
    Question_TF* question = new Question_TF("Quest_Desc", "T", "t");
    EXPECT_EQ(question->getQuestionType(), true);
}

TEST(QuestionTest, QuestionTF_BasicFalseAns) {
    Question_TF* question = new Question_TF("Quest_Desc", "T", "t");
    EXPECT_EQ(question->getQuestionType(), true);
    EXPECT_EQ(question->correctAns("f"), false);
}

TEST(QuestionTest, QuestionMC_QuestionType) {
	Question_MC* question = new Question_MC("Quest_DESC", "A", "A", "B", "C", "D");
	EXPECT_EQ(question->getQuestionType(), false);
}

TEST(QuestionTest, QuestionMC_BasicAns) {
    Question_MC* question = new Question_MC("Quest_DESC", "A", "A", "B", "C", "D");
    EXPECT_EQ(question->correctAns("A"), true);
}

TEST(QuestionTest, QuestionMC_BasicAnsFalse) {
    Question_MC* question = new Question_MC("Quest_DESC", "A", "A", "B", "C", "D");
    EXPECT_EQ(question->correctAns("B"), false);
}

TEST(QuestionTest, QuestionMC_BasicAnsFalse2) {
    Question_MC* question = new Question_MC("Quest_DESC", "A", "A", "B", "C", "D");
    EXPECT_EQ(question->correctAns("C"), false);
}

TEST(QuestionTest, QuestionMC_BasicAnsFalse3) {
    Question_MC* question = new Question_MC("Quest_DESC", "A", "A", "B", "C", "D");
    EXPECT_EQ(question->correctAns("D"), false);
}

TEST(QuestionFactory, QuestionFactory_CreatingTFQuestions) {
	Question_Factory* factory = new Question_Factory();

	std::vector<Question*> vect_q;

	Question_TF* quest1 = new Question_TF("Quest Desc", "T", "t");
	Question_TF* quest2 = new Question_TF("Quest Desc", "T", "t");
	Question_TF* quest3 = new Question_TF("Quest Desc", "T", "t");

	vect_q.push_back(quest1);
	vect_q.push_back(quest2);  
	vect_q.push_back(quest3);  

	EXPECT_EQ(vect_q.at(0)->getQuestionType(), true);
	EXPECT_EQ(vect_q.at(1)->getQuestionType(), true);
	EXPECT_EQ(vect_q.at(2)->getQuestionType(), true);
}

TEST(QuestionFactory, QuestionFactory_CreatingMCQuestions) {
    Question_Factory* factory = new Question_Factory();

    std::vector<Question*> vect_q;

	Question_MC* quest2 = new Question_MC("Quest_DESC", "A", "A", "B", "C", "D");
	Question_MC* quest1 = new Question_MC("Quest_DESC", "A", "A", "B", "C", "D");
	Question_MC* quest3 = new Question_MC("Quest_DESC", "A", "A", "B", "C", "D");

    vect_q.push_back(quest1);
    vect_q.push_back(quest2);
    vect_q.push_back(quest3);

    EXPECT_EQ(vect_q.at(0)->getQuestionType(), false);
    EXPECT_EQ(vect_q.at(1)->getQuestionType(), false);                                                                                                                                                                       EXPECT_EQ(vect_q.at(2)->getQuestionType(), false);
}

TEST(QuestionFactory, QuestionFactory_CheckingTFQuestions) {
    Question_Factory* factory = new Question_Factory();

    std::vector<Question*> vect_q;

    Question_TF* quest1 = new Question_TF("Quest Desc", "T", "t");
    Question_TF* quest2 = new Question_TF("Quest Desc", "T", "t");
    Question_TF* quest3 = new Question_TF("Quest Desc", "T", "t");

    vect_q.push_back(quest1);
    vect_q.push_back(quest2);
    vect_q.push_back(quest3);

    EXPECT_EQ(vect_q.at(0)->correctAns("T"), true);
    EXPECT_EQ(vect_q.at(1)->correctAns("T"), true);
    EXPECT_EQ(vect_q.at(2)->correctAns("T"), true);
}

TEST(QuestionFactory, QuestionFactory_CheckingMCQuestions) {
    Question_Factory* factory = new Question_Factory();

    std::vector<Question*> vect_q;

    Question_MC* quest1 = new Question_MC("Quest_DESC", "A", "A", "B", "C", "D");
    Question_MC* quest2 = new Question_MC("Quest_DESC", "B", "A", "B", "C", "D");
    Question_MC* quest3 = new Question_MC("Quest_DESC", "C", "A", "B", "C", "D");

    vect_q.push_back(quest1);
    vect_q.push_back(quest2);
    vect_q.push_back(quest3);

    EXPECT_EQ(vect_q.at(0)->correctAns("A"), true);
    EXPECT_EQ(vect_q.at(1)->correctAns("B"), true);
    EXPECT_EQ(vect_q.at(2)->correctAns("C"), true);
}

#endif



