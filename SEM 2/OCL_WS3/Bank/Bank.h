#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED
class Bank
{
    private:
        float balance;
        int money;
    public:
        Bank();
        float balance_check();
        float add(int);
        float withdraw(int );

};



#endif // BANK_H_INCLUDED
