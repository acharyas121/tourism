import random
# creating a list of words for the game
list = ["dictionary","books","popular","mouse","conversation"]
# choice() chooses one of the elements from the list
a = random.choice(list)
name = input("Enter your name")
print("Hello {} \n Welcome to Hangman game!".format(name))
print("A random word will be chosen by the computer. The player will have to guess all the letters of the word and 10 chances are given")
guess = input("Enter your first guess for the letters of the word")
length1 = len(a)
count = 10
while count !=0:
    for z in range(0,length1):
        if guess == a[z]:
            print("\t{}".format(a[z]))

            count=count+1
        else:
            print("\t_")
    count=count-1
    guess =input("Enter your guess for the letters of the word")
