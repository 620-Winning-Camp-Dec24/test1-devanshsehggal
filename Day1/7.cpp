//wap to demonstrates by defining a base class "student" to store details like roll no and name, a derived class "result" to store marks for three subjects and calculate the total and percentage.
#include <iostream>
using namespace std;

class Student{
    protected:
        int rollNo;
        string name;
    public:
        void setDetails(int r, string n){
            rollNo = r;
            name = n;
        }
        void getDetails(){
            cout<<"Roll Number --> "<<rollNo<<endl;
            cout<<"Name --> "<<name<<endl;
        }
};
class Result : public Student{
    private:
        float marks[3];
        float total, percentage;
    public:
        void setMarks(float m1, float m2, float m3){
            marks[0]=m1;
            marks[1]=m2;
            marks[2]=m3;
        }
        void calculateResult(){
            total = marks[0]+marks[1]+marks[2];
            percentage = total/3;
        }
        void displayResult(){
            getDetails();
            cout<<"Marks --> "<<marks[0]<<", "<<marks[1]<<", "<<marks[2]<<endl;
            cout<<"Total --> "<<total<<endl;
            cout<<"Percentage --> "<<percentage<<"%"<<endl;
        }
};
int main(){
    Result student;
    int rollNumber;
    float m1, m2, m3;
    string Name;
    cout<<"Enter rollNo --> ";
    cin>>rollNumber;
    cout<<"Enter Name --> ";
    cin>>Name;
    cout<<"Enter Marks of 1st subject --> ";
    cin>>m1;
    cout<<"Enter Marks of 2nd subject --> ";
    cin>>m2;
    cout<<"Enter Marks of 3rd subject --> ";
    cin>>m3;
    student.setDetails(rollNumber, Name);
    student.setMarks(m1, m2, m3);
    student.calculateResult();
    student.displayResult();
    return 0;
}