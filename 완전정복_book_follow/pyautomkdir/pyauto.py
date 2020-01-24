import os

def crt_fldr(directory):
    try:
        if not os.path.exists(directory):
            os.makedirs(directory)
    except OSError:
        print("Error creating dir" + directory)
'''
temp = os.path.realpath(__file__)
print(temp)
tmpe = os.getcwd()
print(temp)
'''

templist = ['Q511','Q512','Q513','Q521','Q522','Q523','Q524','Q525','Q526','Q527','Q528','Q531','Q532','Q541','Q542']
for i in templist:
    temp = os.path.dirname(os.path.realpath(__file__))
    temp += '\\'
    temp += i
    #print(temp)
    crt_fldr(temp) 


