#include <iostream>
#include <vector>
#include <string>


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

    void set_person_name(std::string person_name_var) {person_name = person_name_var;}
    void set_person_job_title(std::string person_job_title_var) {person_job_title = person_job_title_var;}
    void set_person_anual_wage(double person_anual_wage_var) {person_anual_wage = person_anual_wage_var;}
    void set_person_id(int person_id_var) {person_id = person_id_var;}
    void set_balance(double balance_var) {balance = balance_var;}

    Personal_Account(std::string person_name_var = "No name", std::string person_job_title_var = "Unemployed", double person_anual_wage_var = 0.0, int person_id_var = 0, double balance_var = 0);
    Personal_Account(const Personal_Account &source);
    ~Personal_Account()
    {
        std::cout << "Destructor called for: " << person_name << std::endl;
    }

    bool deposit(double amount);
    bool withdraw(double amount);
};


Personal_Account::Personal_Account(std::string person_name_var, std::string person_job_title_var, double person_anual_wage_var, int person_id_var, double balance_var)
    :person_name{person_name_var}, person_job_title{person_job_title_var}, person_anual_wage{person_anual_wage_var}, person_id{person_id_var}, balance{balance_var} {
        std::cout << "Constructor created for: " << person_name << std::endl;
}

Personal_Account::Personal_Account(const Personal_Account &source)
    :Personal_Account(source.person_name, source.person_job_title, source.person_anual_wage, source.person_id, source.balance) {
        std::cout << "Copy constructor called for: " << source.person_name << std::endl;
}


void display_personal_Account(Personal_Account pi)
{
    std::cout << "Name: " << pi.get_person_name() << std::endl;
    std::cout << "Job title: " << pi.get_person_job_title() << std::endl;
    std::cout << "Anual wage: " << pi.get_person_anual_wage() << std::endl;
    std::cout << "ID: " << pi.get_person_id() << std::endl;
    std::cout << "Balance: " << pi.get_balance() << std::endl;
}


bool Personal_Account::deposit(double amount)
{
    balance += amount;
    std::cout << "Deposit ok" << std::endl;
    return true;
}

bool Personal_Account::withdraw(double amount)
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


class Accounts
{
private:
    std::vector<Personal_Account> all_accounts;

public:
    bool add_account(std::string person_name_var, std::string person_job_title_var, double person_anual_wage_var, int person_id_var, double balance_var);
    void display_accounts() const;
};


bool Accounts::add_account(std::string person_name_var, std::string person_job_title_var, double person_anual_wage_var, int person_id_var, double balance_var)
{
    for(Personal_Account person: all_accounts)
    {
        if(person.get_person_id() == person_id_var)
        {
            return false;
        }
    }
    Personal_Account temp{person_name_var, person_job_title_var, person_anual_wage_var, person_id_var, balance_var};
    all_accounts.push_back(temp);
    return true;
}


void Accounts::display_accounts() const
{
    if(all_accounts.size() == 0)
    {
        std::cout << "No accounts to display!" << std::endl;
    }
    else
    {
        std::cout << "===============================================" << std::endl;
        for(Personal_Account person: all_accounts)
        {
            std::cout << "Name: " << person.get_person_name() << std::endl;
            std::cout << "Person ID: " << person.get_person_id() << std::endl;
            std::cout << "Job title: " << person.get_person_job_title() << std::endl;
            std::cout << "Salary (): " << person.get_person_anual_wage() << std::endl;

        }
        std::cout << "===============================================" << std::endl;
    }
}


    // std::string person_job_title
    // double person_anual_wage

    // double balance
// ===========================================================================================================


int main()
{
    Personal_Account heros;
    heros.set_person_name("Heros");
    heros.set_person_job_title("C++ Developer");
    heros.set_person_anual_wage(90000);
    heros.set_person_id(123456);

    display_personal_Account(heros);

    heros.set_balance(195888.69);
    heros.deposit(1000000);
    heros.withdraw(50000);

    // std::string account_name;  

    // while(true)
    // {
    //     std::cout << "1 - Create an account\n2 - Check active accounts\n3 - Exit\nChoose an option: " << std::endl;
    //     int opt{0};
    //     std::cin >> opt;

    //     if(opt == 1)
    //     {
    //         std::cout << "Insert the name of the account: " << std::endl;                      
    //         std::cin >> account_name;

    //         Personal_Account account_name;

    //     }
    //     else if(opt == 2)
    //     {

    //     }
    //     else if(opt == 3)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         std::cout << "Wrong option, please try again..." << std::endl;
    //     }
    // }


}


