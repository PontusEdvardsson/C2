#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
Marvin with a simple menu to start up with.
Marvin doesnt do anything, just presents a menu with some choices.
You should add functinoality to Marvin.
"""

marvin_image = r"""
      _       _
     (_\     /_)
       ))   ((
     .-"""""""-.  
 /^\/  _.   _.  \/^\
 \(   /__\ /__\   )/
  \,  \o_/_\o_/  ,/
    \    (_)    /
     `-.'==='.-'
      __) - (__   
     /  `~~~`  \
    /  /     \  \
    \ :       ; /
     \|==(*)==|/
      :       :
       \  |  /
     ___)=|=(___
    {____/ \____}
"""

"""
Its an eternal loop, until q is pressed.
It should check the choice done by the user and call a appropriate
function.
"""
while True:
    print(chr(27) + "[2J" + chr(27) + "[;H")
    print(marvin_image)
    print("Hi, I'm Marv1n. I know it all. What can I do you for?")
    print("q) Quit.")
    print("1) Present yourself to Marv1n.")
    print("2) Celcius to Farenheit.")
    print("3) Ordmultiplicering.")
    print("4) Summa och medel.")
    print("5) menyval 5.")
    print("6) menyval 6.")
    print("7) menyval 7.")

    choice = input("--> ")

    if choice == "q":
        print("Bye, bye - and welcome back anytime!")
        break

    elif choice == "1":
        name = input("What is your name? ")
        print("\nMarvin says:\n")
        print("Hello %s - your awesomeness!" % name)
        print("What can I do you for?!")

    elif choice == "2":
        celc = input("type temperatur in celius ")
        fahr = (((int(celc) / 5) * 9) + 32)
        print("\nMarvin says:\n")
        print("%s celcius is %d fahrenheit" % (celc,fahr))
        print("What can I do you for?!")

    elif choice == "3":
        word = input("type a word to multiply ")
        number = input("type a number to multiply by ")
        print("\nMarvin says:\n")
        print(word * int(number))
        print("What can I do you for?!")

    elif choice == "4":
        print("\nMarvin says:\n")

        count = 0
        total = 0
        while True:
            try:
                input_number = input("Enter a number: ")
                print("type 'done' when done")
                if input_number == "done":
                    break

                else:
                    count = count + 1
                    total = total + int(input_number)
            except:
                print("Invalid input")
                continue


        print("summ: ", total, "medel: ", total/count)

        print("What can I do you for?!")

    elif choice == "5":
        print("\nMarvin says:\n")
        num = None
        while True:
            prev_num = num
            num = input("write a number ")
            
            if prev_num == None:
                continue

            elif num == "done":
                break

            elif int(num) > int(prev_num):
                print("this number is larger than the previous one")
           
            elif int(num) < int(prev_num):
                print("this number is smaller than the previous one")
            
            elif int(num) == int(prev_num):
                print("this is the same number as the previous one")
            
            else:
                continue
            
        print("What can I do you for?!")

    elif choice == "6":
        name = input("What is your name? ")
        print("\nMarvin says:\n")
        print("Hello %s - your awesomeness!" % name)
        print("What can I do you for?!")






        

    elif choice == "7":
        name = input("What is your name? ")
        print("\nMarvin says:\n")
        print("Hello %s - your awesomeness!" % name)
        print("What can I do you for?!")

    else:
        print("That is not a valid choice. You can only choose from the menu.")

    input("\nPress enter to continue...")
