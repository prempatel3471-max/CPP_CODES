#include<iostream>
using namespace std;


class course{
    int courseID;
    string courseName;
    int coursecredit;
    string courseDuration;
    int courseFee;


    public:

    void getCourseData(){

        cout<<"Enter courseId:";
        cin>>courseID;

        cout<<"Enter CourseName:";
        cin>>courseName;

        cout<<"Enter CourseCredit:";
        cin>>coursecredit;

        cout<<"Enter courseDuration:";
        cin>>courseDuration;

        cout<<"enter courseFee:";
        cin>>courseFee;

    }

    void printdata(){
        cout<<"\n||==== Course Details ====||"<<endl;
        cout<<"Course Id:"<<courseID<<endl;
        cout<<"Course Name:"<<courseName<<endl;
        cout<<"Course Credit:"<<coursecredit<<endl;
        cout<<"Course Duration:"<<courseDuration<<endl;
        cout<<"Course Fee:"<<courseFee<<endl;
    }
};

int main(){
     
    course c[3];

    for(int i=0;i<3 ; i++){
        cout<<"\n\n===== Get Course Data ====="<<endl;
        c[i].getCourseData();
    }

    for(int i=0;i<3 ; i++){
        cout<<"\n\n===== Course Detail ====="<<endl;
        c[i].printdata();
    }



    return 0;
}