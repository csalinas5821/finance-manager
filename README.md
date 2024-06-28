# finance-manager
I want to further my skills in c++. 
After taking a OOP and intro to data structures/algorithms courses, I intend to challenge myself by making a personal finance manager program.

Some key software components I want to integrate:
    File I/O
    data structures (vectors, maps, etc...)
    OOP principles
    Works on an html page

Features:
    Track income and expenses
    Categorize transactions
    generate reports (monthly, weekly)

I will learn things along the way, dedicating at least 10 hours a week minimum to working on this program.

Ideas to create:
1. use classes and inheritance as a way to create individual account(classes) that will account for the inputs
    for example, one object will consist of a description, amount, etc... things that can be used to group or identify the inputs.

Where to start?
1. set up and study the correct way to create classes to handle inputs and overall function
2. make sure everything works smoothly when attempting to use the features
3. work on the html page to link the program with it

More ideas to come.

-
child classes with operations that the program will be able to execute
 save accounts onto a seperate file for long term storage
-


okay heres where I am at 6/26/24 at 11:31: 

there is a login screen to ask user if theyre returning or new
then an if statement to point the user in the right direction, create new account or sign in to account

here is how i want it to work going forward:

if the user is new:
    -ask them to create a username and a four digit code as a passcode.
    -use the username for their class name, if possible.
    -once account is created, send them back to front to log in successfully as returning

if the user is returning:
    - ask them for their username and passcode
    - locate username if exists, then verify if passcode works.
    - if the passcode is entered incorrectly more than 5 times, then they are denied access

I need t


update 6/28/24 at 11:24 am 
okay so im caffeinted like crazy right now and am having a hard time grasping how i want this to work...
i would like the information to be saved and stored after usage, in a safe area.
need to learn how to do that... lol lol ....
also how to create class account names that arent random, i think i want this to work by grabbing the last saved account name..
example would be if 100 accounts are created and saved, the next account would 101...
so first prioritize saving accounts that are created onto a separate file that is secure, then work from there.
