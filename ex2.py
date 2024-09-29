def pertence_fibonacci(num):
    a, b = 0, 1

    if num == 0 or num == 1:
        return True

    while b <= num:
        if b == num:
            return True
        a, b = b, a + b
    
    return False

numero = int(input("Informe um número: "))

if pertence_fibonacci(numero):
    print(f"O número {numero} pertence à sequência de Fibonacci.")
else:
    print(f"O número {numero} NÃO pertence à sequência de Fibonacci.")