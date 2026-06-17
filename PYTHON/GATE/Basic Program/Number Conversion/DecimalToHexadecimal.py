def Hexa_Value(value):
    if value < 10:
        print(value,end='')
    else:
        print(chr(value+55),end='')

def Decimal_To_HexaDecimal(num):
    if(num < 16):
        Hexa_Value(num)
    else:
        Decimal_To_HexaDecimal(int(num/16))
        Hexa_Value(num%16)

n = int(input())
Decimal_To_HexaDecimal(n)
