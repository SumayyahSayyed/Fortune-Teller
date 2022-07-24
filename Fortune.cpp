#include <iostream>
#include <windows.h> // To clear screen,sleep and system pause
#include <string>
using namespace std;

class User
{
private:
    string name;
    string star = "";
    int date, month, year;

public:
    void Welcome() // Welcome Screen
    {
        cout << endl;
        cout << "        ------------------------------------------------------------------------------------------------------" << endl;
        cout << "########################################################################################################################" << endl;
        cout << "########################################################################################################################" << endl;
        cout << endl
             << endl
             << endl
             << endl
             << endl;
        cout << "                               ********************************************************" << endl
             << endl;
        cout << "                                          WELCOME TO THE FORTUNE TELLER GAME" << endl;
        cout << "                                              YES! WE KNOW ALL ABOUT YOU ;) " << endl
             << endl;
        cout << "                               ********************************************************" << endl;
        cout << endl
             << endl
             << endl;
        cout << "Project made by = " << endl;
        cout << "    *Sumayyah Sayyed   " << endl;
        cout << "########################################################################################################################" << endl;
        cout << "########################################################################################################################" << endl;
        cout << "        ------------------------------------------------------------------------------------------------------" << endl;
        cout << endl;
        system("pause");
        system("cls");
    }
    string getStar() // Function to access the star variable outside the class
    {
        return star;
    }
    void Name() // Take the name from user
    {
        cout << endl
             << endl;
        cout << "                                       ------------ ENTER DATA ------------" << endl;
        cout << "                                       Enter your name = ";
        cin >> name;

        for (int i = 0; i < name.length(); i++) // Re-take input if incorrect
        {
            if (!(isalpha(name[i])))
            {
                cout << endl
                     << endl;
                cout << "                                       ------------ Wrong Input! ------------" << endl;
                cout << "                                       ------------ Enter again -------------" << endl;
                Name();
            }
        }
    }
    void Dob() // Take the birth date from user
    {
        cout << "                                       Enter your Date Of Birth" << endl;
        cout << "                                       Date  = ";
        cin >> date;
        cout << "                                       Month = ";
        cin >> month;
        cout << "                                       Year  = ";
        cin >> year;

        for (int j = 1; j <= 100; j++) // Re-take input if incorrect
        {
            if ((month > 12) || (month == 2 && date > 30) || (month == 1, 3, 5, 7, 8, 10, 12 && date > 31) || (month == 2, 4, 6, 9, 11 && date > 30) || (year > 2022) || (year == 0) || (date == 0))
            {
                cout << endl
                     << endl;
                cout << "                                       ------------ Wrong Input! ------------" << endl;
                cout << "                                       ------------ Enter again -------------" << endl;
                Dob();
            }
        }
    }
    void Display() // To display users information
    {
        system("cls"); // To clear the screen
        cout << endl;
        cout << "                               ********************************************************" << endl
             << endl;
        cout << "                                       ------------USER INFORMATION------------" << endl;
        cout << "                                       Name = " << name << endl;
        cout << "                                       Date of Birth = " << date << " / " << month << " / " << year << endl;
        cout << "                                       ----------------------------------------" << endl
             << endl;
        cout << "                               ********************************************************" << endl
             << endl;
    }
    void Horoscope() // Function to set the stars range
    {
        if ((date >= 21 && month == 3) || (date <= 19 && month == 4)) // For Aries
        {
            star = "ARIES";
            cout << "                                     -------------- You are an " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                                 *      *   " << endl;
            cout << "                                                                                *  *   *  * " << endl;
            cout << "                                                                               *    * *    *" << endl;
            cout << "                                                                                     *      " << endl;
            cout << "                                                                                     *      " << endl;
            cout << "                                                                                     *      " << endl;
            cout << "                                                                                     *      " << endl;
        }
        if ((date >= 20 && month == 4) || (date <= 20 && month == 5)) // For Taurus
        {
            star = "TAURUS";
            cout << "                                     -------------- You are a " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                               *         *     " << endl;
            cout << "                                                                             *   *     *   *   " << endl;
            cout << "                                                                           *        **       * " << endl;
            cout << "                                                                                  *    *       " << endl;
            cout << "                                                                                *        *     " << endl;
            cout << "                                                                                  *    *       " << endl;
            cout << "                                                                                    *          " << endl;
        }
        if ((date >= 21 && month == 5) || (date <= 20 && month == 6)) // For Gemini
        {
            star = "GEMINI";
            cout << "                                     -------------- You are a " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                                *************   " << endl;
            cout << "                                                                                   **    **     " << endl;
            cout << "                                                                                   **    **     " << endl;
            cout << "                                                                                   **    **     " << endl;
            cout << "                                                                                   **    **     " << endl;
            cout << "                                                                                   **    **     " << endl;
            cout << "                                                                                *************   " << endl;
        }
        if ((date >= 21 && month == 6) || (date <= 22 && month == 7)) // For Cancer
        {
            star = "CANCER";
            cout << "                                     -------------- You are a " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                                            *          " << endl;
            cout << "                                                                                          *    * * *   " << endl;
            cout << "                                                                                        *     *     *  " << endl;
            cout << "                                                                                      *       *     *  " << endl;
            cout << "                                                                                    *  *       *   *   " << endl;
            cout << "                                                                                   *     *        *    " << endl;
            cout << "                                                                                   *     *      *      " << endl;
            cout << "                                                                                    * * *     *        " << endl;
            cout << "                                                                                            *          " << endl;
        }
        if ((date >= 23 && month == 7) || (date <= 22 && month == 8)) // For Leo
        {
            star = "LEO";
            cout << "                                     -------------- You are a " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                                     * * *       " << endl;
            cout << "                                                                                   *       *     " << endl;
            cout << "                                                                                    *      *     " << endl;
            cout << "                                                                                     *     *     " << endl;
            cout << "                                                                                   *  *    *     " << endl;
            cout << "                                                                                 *     *   *   * " << endl;
            cout << "                                                                                 *     *    * *  " << endl;
            cout << "                                                                                  * * *          " << endl;
            cout << "                                                                                                 " << endl;
        }
        if ((date >= 23 && month == 8) || (date <= 22 && month == 9)) // For Virgo
        {
            star = "VIRGO";
            cout << "                                     -------------- You are a " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                                **     **    **            " << endl;
            cout << "                                                                                  *   *  *  *  *  ******   " << endl;
            cout << "                                                                                    *     *     **     *   " << endl;
            cout << "                                                                                    *     *     *      *   " << endl;
            cout << "                                                                                    *     *     *      *   " << endl;
            cout << "                                                                                    *     * ************   " << endl;
            cout << "                                                                                    *     *     *          " << endl;
            cout << "                                                                                    *     *     *          " << endl;
            cout << "                                                                                   ***   ***   ***         " << endl;
        }
        if ((date >= 23 && month == 9) || (date <= 22 && month == 10)) // For Libra
        {
            star = "LIBRA";
            cout << "                                     -------------- You are a " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                             ***                *** " << endl;
            cout << "                                                                             ** *              * ** " << endl;
            cout << "                                                                             **   ************   ** " << endl;
            cout << "                                                                             **   ************   ** " << endl;
            cout << "                                                                             ** *      *       * ** " << endl;
            cout << "                                                                             ***     *    *     *** " << endl;
            cout << "                                                                                   *        *       " << endl;
            cout << "                                                                                     *    *         " << endl;
            cout << "                                                                                        *           " << endl;
        }
        if ((date >= 23 && month == 10) || (date <= 21 && month == 11)) // For Scorpio
        {
            star = "SCORPIO";
            cout << "                                     -------------- You are a " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                              **     **    **              " << endl;
            cout << "                                                                                *   *  *  *  *             " << endl;
            cout << "                                                                                  *     *     *            " << endl;
            cout << "                                                                                  *     *     *            " << endl;
            cout << "                                                                                  *     *     *            " << endl;
            cout << "                                                                                  *     *     *     *****  " << endl;
            cout << "                                                                                  *     *     *   *  *  *  " << endl;
            cout << "                                                                                  *     *       *   *      " << endl;
            cout << "                                                                                 ***   ***        *        " << endl;
        }
        if ((date >= 22 && month == 11) || (date <= 21 && month == 12)) // For Sagittarius
        {
            star = "SAGITTARIUS";
            cout << "                                     -------------- You are a " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                                        *      " << endl;
            cout << "                                                                                      ****     " << endl;
            cout << "                                                                                    *  *  *    " << endl;
            cout << "                                                                                  *   *    *   " << endl;
            cout << "                                                                                *    *      *  " << endl;
            cout << "                                                                                    *          " << endl;
            cout << "                                                                                   *           " << endl;
            cout << "                                                                                  *            " << endl;
            cout << "                                                                                 *             " << endl;
            cout << "                                                                                *              " << endl;
        }
        if ((date >= 22 && month == 12) || (date <= 19 && month == 1)) // For Capricorn
        {
            star = "CAPRICORN";
            cout << "                                     -------------- You are a " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                                              *   " << endl;
            cout << "                                                                             *               *  * " << endl;
            cout << "                                                                              *             *    *" << endl;
            cout << "                                                                               *           * * *  " << endl;
            cout << "                                                                                *         *       " << endl;
            cout << "                                                                                 *       *  *     " << endl;
            cout << "                                                                                  *     *    *    " << endl;
            cout << "                                                                                   *   *    *     " << endl;
            cout << "                                                                                    * * ***       " << endl;
            cout << "                                                                                                  " << endl;
        }
        if ((date >= 20 && month == 1) || (date <= 18 && month == 2)) // For Aquarius
        {
            star = "AQUARIUS";
            cout << "                                     -------------- You are an " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                          *   *   *   *   *  " << endl;
            cout << "                                                                        *   *   *   *   *    " << endl;
            cout << "                                                                                             " << endl;
            cout << "                                                                          *   *   *   *   *  " << endl;
            cout << "                                                                        *   *   *   *   *    " << endl;
        }
        if ((date >= 19 && month == 2) || (date <= 20 && month == 3)) // For Pisces
        {
            star = "PISCES";
            cout << "                                     -------------- You are a " << star << "--------------" << endl
                 << endl
                 << endl;
            cout << "                                                                            *        * " << endl;
            cout << "                                                                             *      *  " << endl;
            cout << "                                                                              *    *   " << endl;
            cout << "                                                                               ****    " << endl;
            cout << "                                                                              *    *   " << endl;
            cout << "                                                                             *      *  " << endl;
            cout << "                                                                            *        * " << endl;
        }
    }
}; // User class ended

class Questions // Abstract Class
{
    virtual void AboutYourself() = 0; // Pure virtual function
    virtual void Fortunes() = 0;      // Pure virtual function
    virtual void LuckyNumbers() = 0;  // Pure virtual function
};

class Aries : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "Seems like sensible but actually you are a fool." << endl;
        cout << "You are Selfish and attention-seeker." << endl;
        cout << "You have lack of patience." << endl;
        cout << "You get jealous from others." << endl;
        cout << "You are absolutely worst and most negative personality of earth." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "Coming Wednesday is your bad day." << endl;
        cout << "You will be married 6 times." << endl;
        cout << "You will graduate with dishonor." << endl;
        cout << "Year 2020 will be a worst year for you." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "5      ";
        Sleep(1000);
        cout << "8      ";
        Sleep(500);
        cout << "16     ";
        Sleep(500);
        cout << "24     ";
        Sleep(500);
        cout << "37     ";
        Sleep(500);
        cout << "43     ";
        Sleep(500);
        cout << "51" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Taurus : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "You are poor and slow in communication." << endl;
        cout << "You have lack of common sense." << endl;
        cout << "You will think about your close ones all day but will never text them." << endl;
        cout << "You will expect them to call or text you. " << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "Your fortune in 2020 is pretty good." << endl;
        cout << "You will gain a lot of opportunities which will help you to grow." << endl;
        cout << "You are determined." << endl;
        cout << "Once you set your goals, you will believe in yourself and make efforts to achieve them." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "5      ";
        Sleep(500);
        cout << "8      ";
        Sleep(500);
        cout << "10     ";
        Sleep(500);
        cout << "11     ";
        Sleep(500);
        cout << "23     ";
        Sleep(500);
        cout << "34     ";
        Sleep(500);
        cout << "45" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Gemini : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "You think too much." << endl;
        cout << "You are clever, sarcastic, independent, adventurous." << endl;
        cout << "You are a troublemaker." << endl;
        cout << "People try to insult you daily but you prove them that you are obstinate. " << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "You are unlucky." << endl;
        cout << "Today is your bad day." << endl;
        cout << "You may get insulted from your parents on your study and may be your grand insult is when your 2nd semester result will come." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "6      ";
        Sleep(500);
        cout << "9      ";
        Sleep(500);
        cout << "11     ";
        Sleep(500);
        cout << "19     ";
        Sleep(500);
        cout << "25     ";
        Sleep(500);
        cout << "35     ";
        Sleep(500);
        cout << "60" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Cancer : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "You like to arguing with idiots." << endl;
        cout << "You give fake smile to your friends." << endl;
        cout << "You have a weird way of knowing things." << endl;
        cout << "You are good at making others feel like they are weird." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "You will plan for higher studies to groom your career." << endl;
        cout << "If you are currently a single Cancerian, then this is also a great year to try to find love." << endl;
        cout << "You need to change in 2020." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "8      ";
        Sleep(500);
        cout << "10      ";
        Sleep(500);
        cout << "21     ";
        Sleep(500);
        cout << "28     ";
        Sleep(500);
        cout << "29     ";
        Sleep(500);
        cout << "47     ";
        Sleep(500);
        cout << "48" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Leo : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "You are known to be prone to jealousy and possessiveness." << endl;
        cout << "Like a crackling fire, you tend to be warm, passionate, and dynamic." << endl;
        cout << "You never put any person before yourself." << endl;
        cout << "You are an unhappy person." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "Life will be full of twists and turns for you." << endl;
        cout << "Be prepared to handle some major changes in your relationship." << endl;
        cout << "Do not try to overdo things." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "2      ";
        Sleep(500);
        cout << "3      ";
        Sleep(500);
        cout << "4     ";
        Sleep(500);
        cout << "17     ";
        Sleep(500);
        cout << "18     ";
        Sleep(500);
        cout << "37     ";
        Sleep(500);
        cout << "44" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Virgo : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "Virgos are illogical, practical, and are idiots in their approach to life." << endl;
        cout << "You are always paying attention to the smallest details which are stupid." << endl;
        cout << "You are known to be impractical and deeply rooted in your ways." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "You should use every year to try to improve your personal life, even if your social and work life. Learn to tolerate a little mess." << endl;
        cout << "2020 is a great year for the you both in terms of personal development, and partnerships and relationships." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "4      ";
        Sleep(500);
        cout << "9      ";
        Sleep(500);
        cout << "16     ";
        Sleep(500);
        cout << "17     ";
        Sleep(500);
        cout << "22     ";
        Sleep(500);
        cout << "38     ";
        Sleep(500);
        cout << "41" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Libra : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "Libras are known for being charming, beautiful, and well-balanced." << endl;
        cout << "You're a very thoughtful person who understands the things most people don't." << endl;
        cout << "You hate being alone." << endl;
        cout << "Libras tend to fall in love with Virgos." << endl;
        cout << "You have a short temper." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "2020 is a great year to focus on yourself and your relationships." << endl;
        cout << "It is still a big problem." << endl;
        cout << "Due to their bad temper, Libra people are unwilling to listen to others." << endl;
        cout << "The only way you'll be able to get through the tough times is if you continue to stay focused and steer clear from procrastinating." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "6      ";
        Sleep(500);
        cout << "7      ";
        Sleep(500);
        cout << "26     ";
        Sleep(500);
        cout << "30     ";
        Sleep(500);
        cout << "35     ";
        Sleep(500);
        cout << "38     ";
        Sleep(500);
        cout << "53" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Scorpio : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "You hate everyone." << endl;
        cout << "You are an irritated person too." << endl;
        cout << "But you are most effective and fulfilled in their work when they can be of service to others, benefit from minimal supervision, but not micromanagement, and do work that fulfills them. " << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "2020 is a great year to focus on your hobbies and do the other things that you love again." << endl;
        cout << "You will have more energy and be happier, in general, this year, so make sure to take advantage of it. " << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "4      ";
        Sleep(500);
        cout << "8      ";
        Sleep(500);
        cout << "10     ";
        Sleep(500);
        cout << "17     ";
        Sleep(500);
        cout << "19     ";
        Sleep(500);
        cout << "41     ";
        Sleep(500);
        cout << "49" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Sagittarius : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "Sagittarius are the world." << endl;
        cout << "You are a bit reckless when it comes to dealing with certain things. " << endl;
        cout << "You will often take decisions in an impulse and thank yourself later." << endl;
        cout << "Your carefree attitude towards life might sometimes lead you to miracle. " << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "You are lucky." << endl;
        cout << "You will have more money than usual this year." << endl;
        cout << "You will meet many people this year and will recognize good or bad friends this year." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "1      ";
        Sleep(500);
        cout << "5      ";
        Sleep(500);
        cout << "8     ";
        Sleep(500);
        cout << "22     ";
        Sleep(500);
        cout << "29     ";
        Sleep(500);
        cout << "33     ";
        Sleep(500);
        cout << "44" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Capricorn : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "Sometimes the most productive thing you can do is to rest." << endl;
        cout << "You like lazy people." << endl;
        cout << "You love your pets more than anything." << endl;
        cout << "You hate being fat but love to eat every time." << endl;
        cout << "You are stubborn." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "According to your horoscope, 2020 is a year when you put your mind into full focus and create the world you have longed to live in." << endl;
        cout << "You�ve always wanted to make your life more special, unique, and full of enthusiasm, and now is the right time to spice things up." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "7      ";
        Sleep(500);
        cout << "10      ";
        Sleep(500);
        cout << "18     ";
        Sleep(500);
        cout << "21     ";
        Sleep(500);
        cout << "24     ";
        Sleep(500);
        cout << "36     ";
        Sleep(500);
        cout << "59" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Aquarius : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "You are a master at ignoring people." << endl;
        cout << "You always repeat the same mistake over and over again." << endl;
        cout << "You don't know how to find something good in a situation and will cling to all the negative things that may or may not happen." << endl;
        cout << "People usually dislike your behavior." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "You will be hungry again in one hour." << endl;
        cout << "Someone has googled you recently." << endl;
        cout << "You will soon be famous in SCET." << endl;
        cout << "Do not show off your ego this will destroy your future." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "6      ";
        Sleep(500);
        cout << "7      ";
        Sleep(500);
        cout << "13     ";
        Sleep(500);
        cout << "16     ";
        Sleep(500);
        cout << "27     ";
        Sleep(500);
        cout << "34     ";
        Sleep(500);
        cout << "47" << endl;
        Sleep(1000);
        system("pause");
    }
};
class Pisces : public Questions
{
public:
    // Polymorphism Technique
    void AboutYourself()
    {
        cout << endl
             << "                           --------------------------ABOUT YOURSELF--------------------------" << endl;
        cout << "When you get emotional you start crying like a baby." << endl;
        cout << "Your heart and mind often working at wrong times." << endl;
        cout << "You get jealous from people very quickly." << endl;
        cout << "You have thirst of money." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void Fortunes()
    {
        cout << endl
             << "                           --------------------------FORTUNES--------------------------" << endl;
        cout << "Stay away from your best friend. " << endl;
        cout << "You can sometimes feel lost and directionless." << endl;
        cout << "Sorry, we're talking about your weaknesses right away. " << endl;
        cout << "You can react extremely aggressively if you discover you've been cheated." << endl;
        Sleep(1000);
        system("pause");
    }
    // Polymorphism Technique
    void LuckyNumbers()
    {
        cout << endl
             << "                           --------------------------LUCKY NUMBERS--------------------------" << endl;
        cout << "3      ";
        Sleep(500);
        cout << "8      ";
        Sleep(500);
        cout << "17     ";
        Sleep(500);
        cout << "33     ";
        Sleep(500);
        cout << "38     ";
        Sleep(500);
        cout << "44" << endl;
        Sleep(1000);
        system("pause");
    }
};

int choice;
// Function to display the prediction of users star
void Cases(User obj)
{
    if (obj.getStar() == "ARIES")
    {
        obj.Display();
        obj.Horoscope();
        Aries A;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            A.AboutYourself();
            break;
        case 2:
            A.Fortunes();
            break;
        case 3:
            A.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "TAURUS")
    {
        obj.Display();
        obj.Horoscope();
        Taurus T;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            T.AboutYourself();
            break;
        case 2:
            T.Fortunes();
            break;
        case 3:
            T.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "GEMINI")
    {
        obj.Display();
        obj.Horoscope();
        Gemini G;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            G.AboutYourself();
            break;
        case 2:
            G.Fortunes();
            break;
        case 3:
            G.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "CANCER")
    {
        obj.Display();
        obj.Horoscope();
        Cancer C;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            C.AboutYourself();
            break;
        case 2:
            C.Fortunes();
            break;
        case 3:
            C.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "LEO")
    {
        obj.Display();
        obj.Horoscope();
        Leo L;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            L.AboutYourself();
            break;
        case 2:
            L.Fortunes();
            break;
        case 3:
            L.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "VIRGO")
    {
        obj.Display();
        obj.Horoscope();
        Virgo V;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            V.AboutYourself();
            break;
        case 2:
            V.Fortunes();
            break;
        case 3:
            V.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "LIBRA")
    {
        obj.Display();
        obj.Horoscope();
        Libra Li;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            Li.AboutYourself();
            break;
        case 2:
            Li.Fortunes();
            break;
        case 3:
            Li.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "SCORPIO")
    {
        obj.Display();
        obj.Horoscope();
        Scorpio S;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            S.AboutYourself();
            break;
        case 2:
            S.Fortunes();
            break;
        case 3:
            S.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "SAGITTARIUS")
    {
        obj.Display();
        obj.Horoscope();
        Sagittarius Sa;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            Sa.AboutYourself();
            break;
        case 2:
            Sa.Fortunes();
            break;
        case 3:
            Sa.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "CAPRICORN")
    {
        obj.Display();
        obj.Horoscope();
        Capricorn Ca;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            Ca.AboutYourself();
            break;
        case 2:
            Ca.Fortunes();
            break;
        case 3:
            Ca.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "AQUARIUS")
    {
        obj.Display();
        obj.Horoscope();
        Aquarius A;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            A.AboutYourself();
            break;
        case 2:
            A.Fortunes();
            break;
        case 3:
            A.LuckyNumbers();
            break;
        }
    }
    else if (obj.getStar() == "PISCES")
    {
        obj.Display();
        obj.Horoscope();
        Pisces P;
        switch (choice) // Switch case to display the question user enters
        {
        case 1:
            P.AboutYourself();
            break;
        case 2:
            P.Fortunes();
            break;
        case 3:
            P.LuckyNumbers();
            break;
        }
    }
}

// Main function of the program
int main()
{
    User obj;
    // Calling the user class functions
    obj.Welcome();
    obj.Name();
    obj.Dob();
    obj.Display();
    obj.Horoscope();
    cout << endl
         << endl;
    system("pause");
    system("cls");

    char again = '\0';
    // Do-While loop to Display the main menu
    do
    {
        cout << endl
             << endl
             << "                       -------------------Here are your choices-------------------" << endl
             << endl;
        cout << "                           1. About Yourself"
             << "                        "
             << "2. Fortunes" << endl;
        cout << "                           3. Lucky numbers" << endl
             << endl;

        cout << "                           Enter your choice = ";
        cin >> choice;
        while (choice > 4 || choice < 1)
        {
            cout << endl
                 << endl;
            cout << "                                 ------------ Wrong Input! ------------" << endl;
            cout << endl
                 << endl
                 << "                       -------------------Here are your choices-------------------" << endl
                 << endl;
            cout << "                           1. About Yourself"
                 << "                        "
                 << "2. Fortunes" << endl;
            cout << "                           3. Lucky numbers" << endl
                 << endl;

            cout << "                           Enter your choice = ";
            cin >> choice;
        }

        Cases(obj);

        system("cls");
        again = '\0';
        cout << "                           Go to Main Menu? [Y/N] = " << endl;
        cin >> again;

        system("cls");

        while ((again != 'y') && (again != 'Y') && (again != 'n') && (again != 'N')) // Re-take the input if entered wrong
        {
            system("cls");
            cout << "                       ------------ Invalid Input! ------------" << endl;
            cout << "                       Go to Main Menu? [Y/N] = " << endl;
            cin >> again;
        }
    } while (again == 'y' || again == 'Y'); // condition to re desplay the main menu
    system("cls");
    if ((again == 'n') || (again == 'N')) // End screen
    {
        cout << endl;
        cout << "        ------------------------------------------------------------------------------------------------------" << endl;
        cout << "########################################################################################################################" << endl;
        cout << "########################################################################################################################" << endl;
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        cout << "                               ********************************************************" << endl
             << endl;
        cout << "                                                           THANK YOU!" << endl;
        cout << "                                                   HOPE YOU LIKED OUR GAME :) " << endl
             << endl;
        cout << "                                                       COME BACK ANY TIME" << endl
             << endl;
        cout << "                               ********************************************************" << endl;
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        cout << "########################################################################################################################" << endl;
        cout << "########################################################################################################################" << endl;
        cout << "        ------------------------------------------------------------------------------------------------------" << endl;
        cout << endl;
    }
    return 0;
}