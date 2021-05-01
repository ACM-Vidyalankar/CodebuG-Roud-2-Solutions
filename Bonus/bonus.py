de, me, ye = input().split(' ')
de = int(de)
me = int(me)
ye = int(ye)

da, ma, ya = input().split(' ')
da = int(da)
ma = int(ma)
ya = int(ya)

bonus = 0
if(ye==ya):
    if(me < ma):
        # changed '+' to '-'
        bonus = (ma - me) * 500
    # changed 'or' to 'and'
    elif((me == ma) and (de < da)):
        bonus = (da - de) * 15
elif(ye < ya):
    # changed 'ye-ya' to 'ya-ye'
    bonus = 10000*(ya-ye)
# changed 'bonus*2' to 'bonus'
print("Bonus for given duration:", bonus)