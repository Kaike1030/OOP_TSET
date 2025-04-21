# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iomanip>
# include <cmath>

#define pi 3.1415926535897932384626433

double Cylinder :: SurfaceArea(){
    
    return pi * radius * 2 * (height + radius)/*radius * radius * M_PI * 2 + 2 * M_PI * radius * height*/;
}

double Cylinder :: Volume(){

    return pi * radius * radius * height;
}

double Cylinder :: Circumference(){

    return 2 * pi * radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
	in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << std::setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " /*<< fixed << std::setprecision(3)*/ << cldr.SurfaceArea() << endl;
    out << "Volume: " /*<< fixed << std::setprecision(3) */<< cldr.Volume() << endl;
    return out;
}

# endif
