#include<iostream>
using namespace std;

class Company{
    int comp_Id;
    string comp_Name;
    string comp_staff_quality;
    int comp_revenue;
    string comp_import_raw_diamond;
    string comp_ceo;

    public:
        Company( int comp_Id,string comp_Name,string comp_staff_quality,int comp_revenue,string comp_import_raw_diamond,string comp_ceo){
            this->comp_Id = comp_Id;
            this->comp_Name = comp_Name;
            this->comp_staff_quality = comp_staff_quality;
            this->comp_revenue = comp_revenue;
            this->comp_import_raw_diamond = comp_import_raw_diamond;
            this->comp_ceo = comp_ceo;

        }

        void displayCompanyInfo(){
            cout<<"\nCompany Id:"<<comp_Id<<endl;
            cout<<"Company Name:"<<comp_Name<<endl;
            cout<<"Company staff quatlity:"<<comp_staff_quality<<endl;
            cout<<"Company Revenue:"<<comp_revenue<<endl;
            cout<<"Company raw diamond:"<<comp_import_raw_diamond<<endl;
            cout<<"Company  CEO Name:"<<comp_ceo<<endl;
        }
};

int main(){

    Company a(101,"D_company","acting",500000000,"bollywood","Daut_ibrahim");
    
    a.displayCompanyInfo();
    
    return 0;
}