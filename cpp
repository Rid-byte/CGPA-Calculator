#include <iostream>
#include <vector>
using namespace std;
class subject{
    public:
    string subjectname;
    int credits;
    float gradepoints;
    
    //constructor
    subject(string name, int cr, float gp){
        subjectname=name;
        credit=r;
        gradepoints=gp;
        
    }
    
};

class student{
    public:
    string name;
    vector<subject>subjects;
    //constructor
    
    student(string studentname)
    {
        name=studentname;
    }
    void addsubject(string subjectname, int credits, float gradepoints)
    {
        subject newsubject(subjectname, credits, gradepoints);
        subjects.push_back(newsubject);
    }
    
}
int main()
{
    string studentname;
    int numsub;
    
    cout<<"enter student's name";
    getline(cin ,studentname);
    
    cout<<"enter the numer of subects";
    cin>>numsub;
    
    for(int i=0;i<numsub;i++){
        string subjectname;
        int credits;
        float gradepoints;
        
        cout<<"enter the subject's name";
        cin.ignore();
        getline(cin, subjectname);
        
        cout<<"enter the credits of each subject";
        cin>>credit;
        
        cout<<"enter the gradepoint";
        cin>>gradepoint;
        
    }

    return 0;
}
