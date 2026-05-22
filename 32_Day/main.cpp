#include <iostream>
using namespace std;
int main()
{
    struct Student{
        int roll;
        string name;
        float math,sc,ssc,hnd,eng,per;
        string division;
    };
    int choice=0;
    Student s[100];
    int index=0;
    float total;
    
    
    std::cout<<"********** Student Record Management **********" << std::endl;
    
    do{
        std::cout << "------Choose the desired option-----" << std::endl;
        std::cout << "1. Add Student Data" << std::endl;
        std::cout << "2. View Students Data" << std::endl;
        std::cout << "3. Exit" << std::endl;
        
        std::cout << "Enter your choice : ";
        std::cin >> choice;
        switch(choice){
            case 1:
                std::cout << "Adding Data:" << std::endl;
                std::cout << "Roll No: ";
                std::cin >> s[index].roll;
                std::cout << "Name: ";
                std::cin >> s[index].name;
                std::cout << "Enter Marks:\n";
                std::cout << "Math: ";
                std::cin >> s[index].math;
                std::cout << "Science: ";
                std::cin >> s[index].sc;
                std::cout << "Social Science: ";
                std::cin >> s[index].ssc;
                std::cout << "Hindi: ";
                std::cin >> s[index].hnd;
                std::cout << "English: ";
                std::cin >> s[index].eng;
                
                total = s[index].math+s[index].sc+s[index].ssc+s[index].hnd+s[index].eng; 
                
                s[index].per = total/500*100;
                
                if(s[index].per >= 60){
                    s[index].division = "1st";
                }else if(s[index].per >= 45){
                    s[index].division = "2nd";
                }else if(s[index].per >= 30){
                    s[index].division = "3rd";
                }else{
                    s[index].division = "Fail";
                }
                
                index++;
                
                std::cout << "Students Data Added Successfully." << std::endl;
                break;
            case 2:
                std::cout << "-----Students List-----" << std::endl;
                for(int i=0; i<1;i++){
                    std::cout << "==========================" << std::endl;
                    std::cout << "Roll :" << s[i].roll << std::endl;
                    std::cout << "Name :" << s[i].name << std::endl;
                    std::cout << "Math :" << s[i].math << std::endl;
                    std::cout << "Science :" << s[i].sc << std::endl;
                    std::cout << "Social Science :" << s[i].ssc << std::endl;
                    std::cout << "Hindi :" << s[i].hnd << std::endl;
                    std::cout << "English :" << s[i].eng << std::endl;
                    std::cout << "Percentage :" << s[i].per << std::endl;
                    std::cout << "Division :" << s[i].division << std::endl;
                    std::cout << "==========================" << std::endl;
                }
                break;
            case 3:
                std::cout << "Closed" << std::endl;
                break;
            default:
                std::cout << "Invalid Choice." << std::endl;
            
        }
        
        
    }while(choice != 3);

    return 0;
}