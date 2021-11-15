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

    Personal_Account(std::string person_name_val = "No name", std::string person_job_title_val = "No job title", double person_anual_wage_val = 0.0, int person_id_val = 0, double balance_val = 0.0);
    Personal_Account(const Personal_Account &source);
    ~Personal_Account()
    {
        std::cout << "Destructor called for: " << person_name << std::endl;
    }

    bool deposit(double amount);
    bool withdraw(double amount);
};


Personal_Account::Personal_Account(std::string person_name_val, std::string person_job_title_val, double person_anual_wage_val, int person_id_val, double balance_val)
    :person_name{person_name_val}, person_job_title{person_job_title_val}, person_anual_wage{person_anual_wage_val}, person_id{person_id_val}, balance{balance_val} {
        std::cout << "Constructor called for: " << person_name << std::endl;
}

Personal_Account::Personal_Account(const Personal_Account &source)
    :Personal_Account(source.person_name, source.person_job_title, source.person_anual_wage, source.person_id, source.balance) {
        std::cout << "Copy constructor called for: " << source.person_name << std::endl;
}

bool Personal_Account::deposit(double amount)
{
    balance += amount;
    std::cout << "Deposit ok" << std::endl;
    return true;
}

bool Personal_Account::withdraw(double amount)
{
    if((balance - amount) < 0)
    {
        std::cout << "No sufficient funds" << std::endl;
        return false;
    }
    else
    {
        balance -= amount;
        std::cout << "Withdraw ok!" << std::endl;
        return true;
    }
}

void display_personal_account(Personal_Account account_name)
{
    std::cout << "Person Name: " << account_name.get_person_name() << std::endl;
    std::cout << "Job Title: " << account_name.get_person_job_title() << std::endl;
    std::cout << "Anual wage: " << account_name.get_person_anual_wage() << std::endl;
    std::cout << "Person ID: " << account_name.get_person_id() << std::endl;
    std::cout << "Balance: " << account_name.get_balance() << std::endl;
}


// -------------------------------------------------------------------------------------------------





// -------------------------------------------------------------------------------------------------


int main()
{
    Personal_Account heros{"Heros Campos", "C++ Developer", 200.00, 123456789, 9584555.99};
    display_personal_account(heros);
    
}
