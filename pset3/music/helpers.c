// Helper functions for music


#include<math.h>
#include <cs50.h>
#include<stdlib.h>
#include<string.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
int x =  fraction[0]-'0';
int y= fraction[2]-'0';
return (x*(8/y));
    // TODO
}

// Calculates frequency (in Hz) of a note

int frequency(string note)
{
   
    int octave = note[strlen(note) - 1] - '0';

    double freq = 0.0;

   
    if (note[0] == 'A')
    {
        freq = 440;
    }
    else if (note[0] == 'B')
    {
        freq = 440.0 * (pow(2.0, (2.0 / 12.0)));
    }
    else if (note[0] == 'C')
    {
        freq = 440.0 / (pow(2.0, (9.0 / 12.0)));
    }
    else if (note[0] == 'D')
    {
        freq = 440.0 / (pow(2.0, (7.0 / 12.0)));
    }
    else if (note[0] == 'E')
    {
        freq = 440.0 / (pow(2.0, (5.0 / 12.0)));
    }
    else if (note[0] == 'F')
    {
        freq = 440.0 / (pow(2.0, (4.0 / 12.0)));
    }
    else if (note[0] == 'G')
    {
        freq = 440.0 / (pow(2.0, (2.0 / 12.0)));
    }

    if (octave > 4)
    {
        for (int i = 0; i < octave - 4; i++)
        {
            freq *= 2.0;
        }
    }
    else if (octave < 4)
    {
        for (int i = 0; i < 4 - octave; i++)
        {
            freq /= 2.0;
        }
    }

   if (note[1] == 'b')
    {
        freq /= (pow(2.0, (1.0 / 12.0)));
    }
    else if (note[1] == '#')
    {
        freq *= (pow(2.0, (1.0 / 12.0)));
    }




    int result = round(freq);
    return result;
}


  
// Determines whether a string represents a rest
bool is_rest(string s)
{
if(s[0]=='\0')
return true;
else
return false;

    // TODO
}
