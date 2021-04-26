from tkinter import *

root = Tk()

def f():
	print("еду_вперед")

def r():
	print("еду_назад")

def p():
	print("поворачиваю_вправо")

def l():
	print("поворачиваю_влево")


b = Button(root, text = "вперед", command=f)

b.bind('<Button-1>')

b.grid(column = 2, row = 1)


b3 = Button(root, text = "назад", command=r)

b3.bind('<Button-3>')

b3.grid(column = 2, row = 2)


b2 = Button(root, text = "право", command=p)

b2.bind('<Button-2>')

b2.grid(column = 3, row = 2)


b4 = Button(root, text = "лево", command=l)

b4.bind('<Button-4>')

b4.grid(column = 1, row = 2)

root.mainloop()



