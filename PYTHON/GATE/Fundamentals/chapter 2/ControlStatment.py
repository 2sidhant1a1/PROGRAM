# attach the value in between the sentence and print them.
z = 'GATE Year is {}, AIr is {}, Score is {}'.format(23,8765,2025)
print(z)


# Print the value of x and y between the string.
x = 'x={},y={}'.format(54,64)
print(x)


# Take input from users and print value in sentence.
"""
a = int(input("ENTER number = "))
b = int(input("ENTER number = "))
c = int(input("ENTER number = "))
print('GATE Year is {}, AIr is {}, Score is {}'.format(a,b,c))
"""

    # Sep is use in stating of string & end is use in ending of all string

print('Hello', 'How', 'are', 'You',sep = '@', end = '!')

'''NOTE:-1. sep and end attribute values must be either None or String Type. Otherwise, 'Type Error' will be raised.
        2. if tried to access data that is not defined, 'NameError' is raised.'''

# {:7d} = Output width 7 character minimum & {:4d} = Output width 4 characters.
''' For Integer value'''
print('\n\n\nX={:7d} , Y={:4d}'.format(5,3))# allocate 7 and 4 character and 
''' For float value'''
print('X={:7f} , Y={:4f}'.format(5.4,3.6))
''' FOr {:>}'''
print('Left Alignment:- X={:>7} , Y={:>4}'.format(5,4))
''' FOr {:<}'''
print('Right Alignment:- X={:<7} , Y={:<4}'.format(5,4))
''' FOr {:-}'''
print('X={:-7} , Y={:-4}'.format(5,4))
''' FOr {:,}'''
print('Thousand separater:- X={} , Y={}'.format(f'{5839890:,}',f'{38798097:,}'))
''' FOr {:}'''
print('X={:7} , Y={:4}'.format(5,3))
''' FOr {:b}'''
# print('X={:b7} , Y={:b4}'.format(4,6))
