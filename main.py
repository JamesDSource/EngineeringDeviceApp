from tkinter import *

root = Tk()

root.title("Engineering Device Desktop Application")
w = 800
h = 500
root.geometry(f"{w}x{h}")

# Main frame that everything is parented to
main_frame = Frame(root)

# Navigation frame for the software
def nav_bar_hide():
    navigation_open_button.place(relx=0.9, rely=0.05, relwidth=0.05)
    navigation_frame.place_forget()

def nav_bar_show():
    navigation_frame.place(relx=0.9, relwidth=0.1, relheight=1)
    navigation_open_button.place_forget()

navigation_open_button = Button(main_frame, text="Open nav", command=nav_bar_show)
navigation_frame = Frame(main_frame)

navigation_close_button = Button(navigation_frame, text="Close")
navigation_close_button.place()
nav_bar_hide()

main_frame.place(relwidth=1, relheight=1)
root.mainloop()