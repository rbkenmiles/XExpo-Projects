'''l = []
for i in range(2):
  r = []
  for j in range(2):
    s = int(input('Enter a number'))
    r.append(s)
  l.append(r)
'''

'''l = []
for i in range(3):
  r = []
  sumy = 0
  for j in range(3):
    s = int(input('Enter a number'))
    r.append(s)
    sumy += s
  l.append(r)
print(l)'''

l = [
    [1,2,3],
    [4,5,6],
    [7,8,9]
     ]
'''sum2 = 0
for mele in l:
  elem = mele
  if l.index(mele) == 1:
    sum2= sum2+ (mele[0]+mele[2])
  else:
    for ele in mele:
      sum2 += ele
print(sum2)'''
leftcount = 0
sum3 = 0
sum4 = 0
for i in l:
  sum3 += i[leftcount]
  leftcount += 1
print(sum3)
rightcount = 2
for j in l:
  sum4 += j[rightcount]
  rightcount -= 1
print(sum4)
