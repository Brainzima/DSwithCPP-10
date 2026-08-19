#include <iostream>
#include <vector>
using namespace std;
struct QuizQuestion{
    int qn;
    string question;
    vector<string> options;
    int correctAns;
};

int main()
{
    vector<QuizQuestion> Quiz;
    
    //question 1
    Quiz.push_back({
        1,
        "What is the Full form of CPU?",
        {"Central Processing Uno","Central Processor Unit","Central Processu","Central Processing Unit"},
        4
    });
    
        // std::cout << Quiz[0].qn << std::endl;
    // std::cout << Quiz[0].question << std::endl;
    // std::cout << Quiz[0].options[0] << std::endl;
    // std::cout << Quiz[0].options[1] << std::endl;
    // std::cout << Quiz[0].options[2] << std::endl;
    // std::cout << Quiz[0].options[3] << std::endl;
    // std::cout << Quiz[0].correctAns << std::endl;
    
    
    //question 2
    Quiz.push_back({
        2,
        "What is the Full form of ALU?",
        {"Alluu","Arithmatic Logical unit","Alu control Uno","Alpha Control Unit"},
        2
    });
    //question 3
    Quiz.push_back({
        3,
        "What is the Full form of MU?",
        {"Memory Unit","Moja unit","Moso Uno","Masti Unit"},
        1
    });
    //question 4
    Quiz.push_back({
        4,
        "What is the Full form of CU?",
        {"Central Uno","Central Unit","Control Unit","Centa Unit"},
        3
    });
    //question 5
    Quiz.push_back({
        5,
        "What is the Full form of CD?",
        {"Central Diameter","Compact Disk","Compare Disk","Counting Disk"},
        2
    });
    
    
    int score=0;
    for (int i = 0; i < Quiz.size(); i++) {
        std::cout << "---------------------------------------------" << std::endl;
        std::cout << "Question " << Quiz[i].qn << ": " << Quiz[i].question << std::endl;
        for (int j = 0; j < Quiz[i].options.size(); j++) {
            std::cout << j+1 << ": " << Quiz[i].options[j] << std::endl;
        }
        std::cout << "---------------------------------------------" << std::endl;
        int userAns;
        std::cout << "Answer (1-4):";
        std::cin >> userAns;
        
        if(userAns == Quiz[i].correctAns){
            score += 1;
        }
    }
    
    std::cout << "****************************************************" << std::endl;
    std::cout << "Your Score : " << score << "/" << Quiz.size()  << std::endl;
    
    
    

    return 0;
}