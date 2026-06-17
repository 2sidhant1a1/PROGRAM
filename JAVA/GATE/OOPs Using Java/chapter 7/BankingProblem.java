abstract class BankAccount
{
    double balance;
    double Account;
    public BankAccount(long Account,double balance)
    {
        this.balance = balance;
        this.Account = Account;
        System.out.println("\n\nAccount : "+Account);
        System.out.println("Balance: "+ balance);
    }
    abstract double withdraw(double amount);
    abstract double deposit(double amount);
    abstract double interest(double inte);
}
class SavingAccount extends BankAccount
{
    public SavingAccount(long Account,double balance)
    {
        super(Account,balance);
    }
    @Override
    double withdraw(double amount)
    {
        balance -= amount;
        return balance;   
    }
    @Override
    double deposit(double amount)
    {
        balance += amount;
        return balance;     
    }
    @Override
    double interest(double inter)
    {
        balance += (inter * 100)/balance;
        return balance;     
    }
}
class CheckingAccount extends BankAccount
{
    public CheckingAccount(long Account,double balance)
    {
        super(Account,balance);
    }
    @Override
    double withdraw(double amount)
    {
        balance -= amount;
        return balance;   
    }
    @Override
    double deposit(double amount)
    {
        balance += amount;
        return balance;     
    }
    @Override
    double interest(double inter)
    {
        balance += (inter * 100)/balance;
        return balance;     
    }
}

public class BankingProblem {
    public static void main(String[] args) {
        SavingAccount sa = new SavingAccount(456434323, 6000);
        System.out.println("After withdrow: 500, balace: "+ sa.withdraw(500));
        System.out.println("After deposit: 1200, balace: "+ sa.deposit(1200));
        System.out.println("After adding intrest: 5, balace: "+ sa.interest(5));

        CheckingAccount ca = new CheckingAccount(5678474, 57607);
        System.out.println("After withdrow: "+ ca.withdraw(500));
        System.out.println("After deposit: "+ ca.deposit(1200));
        System.out.println("After intrest: "+ ca.interest(5));
    }
    
}
