# Fortune Teller

## Table of contents

- [Overview](#overview)
  - [Language](#language)
  - [Working](#working)
- [Methadology](#methadology)
  - [Programming Model](#programming-model)
  - [Classes](#classes)
  - [Functions](#functions)
  - [Libraries](#libraries)
- [Author](#author)

## Overview

### Language

This project is made in [C++] programming language.

### Working

•	The welcome screen is displayed to the user.
•	The user enters his/her name, and then the program asks the user its date-of-birth.
•	The program recognizes the wrong input, and allows to re-enter your wronged information.
•	When the right input is inserted, the application determines your horoscope and prints the star sign.
•	The program then displays 3 questions:
        1. About Yourself
        2. Fortunes
        3. Lucky Numbers 
    from which the user chooses a question they want to know about.
•	This program is made flexible for the user to go back to the questions section and choose again.
•	If the user does not want to go to the question section, the program thanks the user for using our program.

This project is made just for fun. The knowledge about the horescope(About Yourself, Fortunes, Lucky Numbers) is not aunthentic. I randomly took the data from the internet and just copy pasted it. Please donot take this personally.

## Methadology

### Programming Model

This Project is made with the concept of [Object-Oriented-Programming].

### Classes

•    class User
•    class Questions
•    class Aries
•    class Taurus
•    class Gemini
•    class Cancer
•    class Leo
•    class Virgo
•    class Libra
•    class Scorpio
•    class Sagittarius
•    class Capricorn
•    class Aquarius
•    class Pisces

### Functions

•    void Welcome()  
•    string getStar()    //Function to access the star variable outside the class
•    void Name()         // Take the name from user
•    void Dob()          // Take the birth date from user
•    void Display()      // To display users information
•    void Horoscope()        // Function to set the stars range
•    virtual void AboutYourself() = 0;       // Pure virtual function
•    virtual void Fortunes() = 0;            // Pure virtual function
•    virtual void LuckyNumbers() = 0;        // Pure virtual function


### Libraries

•	# include <iostream>
•	# include <windows.h>   
•	# include <string>	

## Author

[SumayyahSayyed]
