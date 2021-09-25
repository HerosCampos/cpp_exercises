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


Personal_info::Personal_info(std::string person_name_var, std::string person_job_title_var, double person_anual_wage_var, int person_id_var)
    :person_name{person_name_var}, person_job_title{person_job_title_var}, person_anual_wage{person_anual_wage_var}, person_id{person_id_var} {
        std::cout << "Constructor created for: " << person_name << std::endl;
}

Personal_info::Personal_info(const Personal_info &source)
    :Personal_info(source.person_name, source.person_job_title, source.person_anual_wage, source.person_id) {
        std::cout << "Copy constructor called for: " << source.person_name << std::endl;
}


void display_personal_info(Personal_info pi)
{
    std::cout << "Name: " << pi.get_person_name() << std::endl;
    std::cout << "Job title: " << pi.get_person_job_title() << std::endl;
    std::cout << "Anual wage: " << pi.get_person_anual_wage() << std::endl;
    std::cout << "ID: " << pi.get_person_id() << std::endl;
}


// ===========================================================================================================


class Account_balance: public Personal_info
{
private:
    double balance;

public:
    double get_balance() {return balance;}
    void set_balance(double balance_var) {balance = balance_var;}

    bool deposit(double amount);
    bool withdraw(double amount);
};


bool Account_balance::deposit(double amount)
{
    balance += amount;
    std::cout << "Deposit ok" << std::endl;
    return true;
}

bool Account_balance::withdraw(double amount)
{
    if((balance - amount) >= 0)
    {
        balance -= amount;
        std::cout << "Withdraw ok!" << std::endl;
        return true;
    }
    else
    {
        std::cout << "No sufficient funds!" << std::endl;
        return false;
    }
}


// ===========================================================================================================


int main()
{
    Account_balance heros;
    heros.set_person_name("Heros");
    heros.set_person_job_title("C++ Developer");
    heros.set_person_anual_wage(90000);
    heros.set_person_id(123456);

    display_personal_info(heros);

    heros.set_balance(195888.69);
    heros.deposit(1000000);
    heros.withdraw(50000);
}
