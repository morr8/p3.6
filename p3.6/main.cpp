/*
 •• P3.6
 Write a program that prompts for the day and month of the user’s birthday and then prints a horoscope. Make up fortunes for programmers, like this:
 
 Please enter your birthday (month and day): 6 16
 Gemini are experts at figuring out the behavior of complicated programs.
 You feel where bugs are coming from and then stay one step ahead.
 Tonight, your style wins approval from a tough critic.
 Each fortune should contain the name of the astrological sign. (You will find the names and date ranges of the signs at a distressingly large number of sites on the Internet.)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter your birthday (month and day): ";
    int month, day;
    cin >> month >> day;
    string sign;
    
    if (month == 1)
    {
        if (day <= 19)
        {
            sign = "Capricorn";
        }
        else
        {
            sign = "Aquarius";
        }
    }
    else if (month == 2)
    {
        if (day <= 18)
        {
            sign = "Aquarius";
        }
        else
        {
            sign = "Pisces";
        }
    }
    else if (month == 3)
    {
        if (day <= 20)
        {
            sign = "Pisces";
        }
        else
        {
            sign = "Aries";
        }
    }
    else if (month == 4)
    {
        if (day <= 19)
        {
            sign = "Aries";
        }
        else
        {
            sign = "Taurus";
        }
    }
    else if (month == 5)
    {
        if (day <= 20)
        {
            sign = "Taurus";
        }
        else
        {
            sign = "Gemini";
        }
    }
    else if (month == 6)
    {
        if (day <= 20)
        {
            sign = "Gemini";
        }
        else
        {
            sign = "Cancer";
        }
    }
    else if (month == 7)
    {
        if (day <= 22)
        {
            sign = "Cancer";
        }
        else
        {
            sign = "Leo";
        }
    }
    else if (month == 8)
    {
        if (day <= 22)
        {
            sign = "Leo";
        }
        else
        {
            sign = "Virgo";
        }
    }
    else if (month == 9)
    {
        if (day <= 22)
        {
            sign = "Virgo";
        }
        else
        {
            sign = "Libra";
        }
    }
    else if (month == 10)
    {
        if (day <= 22)
        {
            sign = "Libra";
        }
        else
        {
            sign = "Scorpio";
        }
    }
    else if (month == 11)
    {
        if (day <= 21)
        {
            sign = "Scorpio";
        }
        else
        {
            sign = "Sagittarius";
        }
    }
    else
    {
        if (day <= 21)
        {
            sign = "Sagittarius";
        }
        else
        {
            sign = "Capricorn";
        }
    }
    if (sign == "Aries")
    {
        cout << "Aries loves to be number one, so it’s no surprise that \nthese audacious rams are the first sign of the zodiac. Bold and ambitious, Aries dives headfirst into even the most challenging situations.\n";
    }
    else if (sign == "Taurus")
    {
        cout << "Taurus is an earth sign represented by the bull. Like their \ncelestial spirit animal, Taureans enjoy relaxing in serene, bucolic environments, surrounded by soft sounds, soothing aromas, \nand succulent flavors.\n";
    }
    else if (sign == "Gemini")
    {
        cout << "Have you ever been so busy that you wished you could clone yourself \njust to get everything done? That’s the Gemini experience in a nutshell. Appropriately symbolized by the celestial twins, this air sign \nwas interested in so many pursuits that it had to double itself.\n";
    }
    else if (sign == "Cancer")
    {
        cout << "Cancer is a cardinal water sign. Represented by the crab, this oceanic \ncrustacean seamlessly weaves between the sea and shore, representing Cancer’s ability to exist in both emotional and material realms. \nCancers are highly intuitive, and their psychic abilities manifest in tangible spaces: For instance, Cancers can effortlessly pick up \nthe energies of a room.\n";
    }
    else if (sign == "Leo")
    {
        cout << "Roll out the red carpet, because Leo has arrived. Leo is represented by\n the lion, and these spirited fire signs are the kings and queens of the celestial jungle. They’re delighted to embrace their royal \nstatus: Vivacious, theatrical, and passionate, Leos love to bask in the spotlight and celebrate themselves.\n";
    }
    else if (sign == "Virgo")
    {
        cout << "Virgo is an earth sign historically represented by the goddess of wheat and \nagriculture, an association that speaks to Virgo’s deep-rooted presence in the material world. Virgos are logical, practical, and \nsystematic in their approach to life. This earth sign is a perfectionist at heart and isn’t afraid to improve skills through diligent and \nconsistent practice.\n";
    }
    else if (sign == "Libra")
    {
        cout << "Libra is an air sign represented by the scales (interestingly, the only \ninanimate object of the zodiac), an association that reflects Libra's fixation on balance and harmony. Libra is obsessed with symmetry and \nstrives to create equilibrium in all areas of life.\n";
    }
    else if (sign == "Scorpio")
    {
        cout << "Scorpio is one of the most misunderstood signs of the zodiac. Because of its \nincredible passion and power, Scorpio is often mistaken for a fire sign. In fact, Scorpio is a water sign that derives its strength from \nthe psychic, emotional realm.\n";
    }
    else if (sign == "Sagittarius")
    {
        cout << "Represented by the archer, Sagittarians are always on a quest for knowledge. \nThe last fire sign of the zodiac, Sagittarius launches its many pursuits like blazing arrows, chasing after geographical, intellectual, and \nspiritual adventures.\n";
    }
    else if (sign == "Capricorn")
    {
        cout << "The last earth sign of the zodiac, Capricorn is represented by the sea \ngoat, a mythological creature with the body of a goat and tail of a fish. Accordingly, Capricorns are skilled at navigating both the \nmaterial and emotional realms.\n";
    }
    else if (sign == "Aquarius")
    {
        cout << "Despite the “aqua” in its name, Aquarius is actually the last air sign \nof the zodiac. Aquarius is represented by the water bearer, the mystical healer who \nbestows water, or life, upon the land. Accordingly, Aquarius is the most humanitarian astrological sign.\n";
    }
    else if (sign == "Pisces")
    {
        cout << "Pisces, a water sign, is the last constellation of the zodiac. It's \nsymbolized by two fish swimming in opposite directions, representing the constant division of Pisces's attention between fantasy \nand reality. As the final sign, Pisces has absorbed every lesson — the joys and the pain, the hopes and the fears — learned by all of the other signs.\n";
    }
    
}
