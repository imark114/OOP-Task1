class Calculator:
    val1 = 0;
    val2 = 0;

    # Constructor / Dunder method
    def __init__(self, val1, val2)->None:
        self.val1 = val1
        self.val2 = val2

    # Create a method which can add two number
    def add(self) -> int:
        return self.val1 + self.val2

    # Create a method which can multiplied two number
    def multi(self) -> int:
        return self.val1 * self.val2

obj = Calculator(5,10)
print(obj.add())
print(obj.multi())