class BankAccount:
    def __init__(self,nam, balance = 0.00)-> None:
        # Encapsulate data (private Attributes)
        self.__nam= nam
        self.__balance = balance
    
    def deposit(self, amount)->None:
        if amount > 0:
            self.__balance+=amount
            print("Deposite Successfull")
        else:
            print("Invalid Deposit amount")
    def getBalance(self)-> float:
        return self.__balance;

user1 = BankAccount("Rakib Khan")
print(user1.getBalance())
user1.deposit(500)
print(user1.getBalance())