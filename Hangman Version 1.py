#Hangman Game in Python ver.1.01
#Version 1.0.1

import getpass

def PlayGame_Hangman():
  wtgia = False
  word =  ' '
  while wtgia == False:
    wtg = getpass.getpass('Enter the word the players must guess: ')
    v_wtg = wtg.isalpha()
    if v_wtg== True:
      wtgia = True
      print('Input Enter Successful')
      wtglc = len(wtg)
      wtgb = list('_'*wtglc)
      word = wtg.upper()
      print('Here is the outline of the word to guess')
      guessword(word,wtgb,wtglc)
    else:
      print('Invalid Input! Try Again')


def guessword(wtg,wtg_b,wtg_lc):
  print(wtg_b)
  errors = 0
  wtgc = list(wtg)
  while errors<=8:
    posfound = 0
    guess_letter = (input('Enter a letter from A-Z: ')).upper()
    for index in range(0,wtg_lc):
      if guess_letter == wtg[index]:
        posfound += 1
        wtg_b[index] = guess_letter
    if (posfound >= 1):
      print('Word Placed successfully')
    else:
      print('Letter Not found in word')
      errors += 1
      print('Incorrect Guesses Remaning: ',8-errors)
    print(wtg_b)
    if wtg_b == wtgc:
      print('Congrats You have guesed the word correctly!!')
      print(f'Word: {wtg}')
      print('Play again and explore the fun!!')
      break
    else:
      print('Keep going!')
      print('----+------+------+-------')
    
    if errors == 8:
      print('Game Over!! Person is Hanged!!')
      print(f'Your word to guess was: {wtg}')
      print('Hope you enjoyed playing!! Try again :)')
      break

PlayGame_Hangman()
PlayAgain = input('Wanna play again? y/n: ')
if PlayAgain == 'y':
  PlayGame_Hangman()
else:
  print('Happy Playing')
