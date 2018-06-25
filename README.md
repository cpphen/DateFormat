Requirements to run program. 
    
    1) Download Visual Studio 2017 and make sure to install C++ in setup. 
    2) Once installed, clone repository and open the file with .sln extension. 
    3) ctrl + F5 will run the console application.
    4) If application closes before output can be seen, click on "projects" tab on at top of VS 2017
    
        -> Go down to "dates properties"
    
        -> On left menu, go into "Configuartion Properties" then go into "Linker"
    
        -> Click on "System" 
    
        -> On right menu for "SubSystem" make sure "Console (/SUBSYSTEM:CONSOLE)" is selected.



Date format console application.

Prints user entered date in four different formats.

    1) mm/dd/yyyy, where mm is the two (or one) digit month , dd is the two (or one) digit day, and yyyy is the four digit year

    2) month dd, yyyy, where month is the full month name, dd is the two (or one digit day), and yyyy is the four digit year 

    3) yyyy-mm-dd, where yyyy is the four digit year, mm is the two (or one) digit month, and dd is the two (or one) digit day.

    4) yyyy-mon-dd, where yyyy is the four digit year, mon is the 3-letter month abbrevisation (all lower case), and dd is the two (or one) digit day

The user must enter the 3 letter abbrevation for the month. E.g January would be "Jan", "JaN" etc.

    -> If the day entered for the month is not valid for the month, day will default to 1, year to 2001, and month default to January.
    -> If year is less than 1900 or greater than 2020, year will default to 2001, day to 1 and month to January.
