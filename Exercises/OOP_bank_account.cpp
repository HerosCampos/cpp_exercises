#include <iostream>
#include <vector>
#include <string>


class Personal_info
{
private:
    std::string person_name;
    std::string person_job_title;
    double person_anual_wage;
    int person_id;

public:
    std::string get_person_name() {return person_name;}
    std::string get_person_job_title() {return person_job_title;}
    double get_person_anual_wage() {return person_anual_wage;}
    int get_person_id() {return person_id;}

    void set_person_name(std::string person_name_var) {person_name = person_name_var;}
    void set_person_job_title(std::string person_job_title_var) {person_job_title = person_job_title_var;}
    void set_person_anual_wage(double person_anual_wage_var) {person_anual_wage = person_anual_wage_var;}
    void set_person_id(int person_id_var) {person_id = person_id_var;}

    Personal_info(std::string person_name_var = "No name", std::string person_job_title_var = "Unemployed", double person_anual_wage_var = 0.0, int person_id_var = 0);
    Personal_info(const Personal_info &source);
    ~Personal_info()
    {
        std::cout << "Destructor called for: " << person_name << std::endl;
    }
};



int main()
{

}
