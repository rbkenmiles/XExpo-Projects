#python

def cheqbucl(EqnVal):
  clear_output()
  print('Desole Robin')
  print('Un chat est dans mes jardin')
  print(EqnVal,'UNable to print?')


print('Welcome to Kinematic Equation calculator')
def Start():
  clear_output()
  Equation = wid.Select(options=['v = u+at', 's = ut+½ at²', 'v²-u² = 2as'],description='Equation:',disabled=False)
  display(Equation)
  choeqn = wid.Button(description="Continue =>",button_style = 'Info',icon = 'Check')
  display(choeqn)
  EqnVal = Equation.value
  choeqn.on_click(cheqbucl)
  return EqnVal



Start()
