/**
 * Color.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#Description#>
 */

#include "Color.h"

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.


#include "Color.h"

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.


Color::Color(){
    red = 0;
    green = 0;
    blue = 0;
}


int Color::checkRange(int val){
    if( val >=0 && val <= 255){
        return val;
    }
    else if(val > 255){
        val = 255;
        return val;
    }
    return 0;
}

Color::Color(int redVal, int greenVal, int blueVal){
    red = checkRange(redVal);
    green = checkRange(greenVal);
    blue = checkRange(blueVal);
    
}



void Color:: setRed(int redVal){
    red = checkRange(redVal);
    }

int Color::getRed(){
    return red;
}


void Color::setGreen(int greenVal){
    green = checkRange(greenVal);
}

int Color::getGreen(){
    return green;
}

void Color:: setBlue(int blueVal){
    blue = checkRange(blueVal);
}

int Color::getBlue(){
    return blue;
}


 
void Color::read(istream& ins){
    if(ins.good()){
        ins >> red >> green >> blue;
    }
    red= checkRange(red);
    green= checkRange(green);
    blue= checkRange(blue);
}


 
void Color:: write(ostream& outs){
    if(outs.good()){
        outs << red << green << blue;
    }
}



istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}

istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}
