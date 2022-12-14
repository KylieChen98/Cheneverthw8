using std::string;

class bankAccount
{
  private:
    string customerName;
    float balance;
    void setName(string n);
    void setBalance(float bal);

  public:
    bankAccount(string n, float bal);
    string getName();
    float getBalance();
    void deposit(float dep);
    void withdraw(float draw);
    ~bankAccount();
};
