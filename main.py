from tkinter import *
from PIL import Image, ImageTk

root = Tk()

root.title("Engineering Device Desktop Application")
w = 1920
h = 1080
root.geometry(f"{w}x{h}")

# Main frame that everything is parented to
main_frame = Frame(root)
#main_frame.place(relwidth=1, relheight=1)

welcome_label = Label(main_frame, text="Welcome to the Application")
welcome_label.pack()

# Navigation frame for the software
def nav_bar_hide():
    root.update()
    win_width = root.winfo_width()
    win_height = root.winfo_height()
    navigation_open_button.place(relx=0.90, rely=0.03, relwidth = 0.05, relheight=win_width*0.05/win_height)

    navigation_frame.place_forget()

def nav_bar_show():
    navigation_frame.place(relx=0.8, relwidth=0.2, relheight=1)
    navigation_open_button.place_forget()

navigation_open_button_image = Image.open("Assets/Navigation Open Button/NavigationOpenButton.png")
navigation_open_button_photoimage = ImageTk.PhotoImage(navigation_open_button_image)
navigation_open_button = Button(main_frame, image=navigation_open_button_photoimage, command=nav_bar_show)
navigation_frame = Frame(main_frame, bg="#000000")

navigation_close_button = Button(navigation_frame, text="Close", command=nav_bar_hide)
navigation_close_button.place(relx=0.5-0.1, rely=0.05, relwidth=0.2)

nav_bar_hide()

main_frame.place(relwidth=1, relheight=1)
root.mainloop()