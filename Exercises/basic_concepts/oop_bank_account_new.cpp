#include <iostream>
#include <string>
#include <vector>


class Personal_Account
{
private:
    std::string person_name;
    std::string person_job_title;
    double person_anual_wage;
    int person_id;
    double balance;

public:
    std::string get_person_name() {return person_name;}
    std::string get_person_job_title() {return person_job_title;}
    double get_person_anual_wage() {return person_anual_wage;}
    int get_person_id() {return person_id;}
    double get_balance() {return balance;}

    void set_person_name(std::string person_name_val) {person_name = person_name_val;}
    void set_person_job_title(std::string person_job_title_val) {person_job_title = person_job_title_val;}
    void set_person_anual_wage(double person_anual_wage_val) {person_anual_wage = person_anual_wage_val;}
    void set_person_id(int person_id_val) {person_id = person_id_val;}
    void set_balance(double balance_val) {balance = balance_val;}

    

};


int main()
{
    
}
