#include "fractie.hpp"
/// Ursu Catalin-Emilian 323AB

fractie::fractie(const int aa,const int bb)
{

    a = aa;
    b = bb;

}

fractie::fractie(const fractie& obj)
{

    a = obj.a;
    b = obj.b;

}
fractie::~fractie()
{

    //delete a;
    //delete b;

}

fractie & fractie::operator=(const fractie & obj)
{

    this->a = obj.a;
    this->b = obj.b;

    return *this;

}

double fractie::getValoare()
{

    return (double)a/b;

}

fractie fractie::getInv()
{

    this->a = this->a + this->b;
    this->b = this->a - this->b;
    this->a = this->a - this->b;

    return *this;

}

void fractie::setdata(const int aa,const int bb)
{

    this->a = aa;
    this->b = bb;

}

float fractie::getA()
{

    return (float)a;

}

float fractie::getB()
{

    return (float)b;

}

fractie operator +(const fractie& obj1, const fractie& obj2)
{

    return fractie( (obj1.a * obj2.b) + (obj2.a * obj1.b) , obj1.b * obj2.b );

}

fractie operator -( const fractie& obj1, const fractie& obj2)
{

    return fractie( (obj1.a * obj2.b) - (obj2.a * obj1.b) , obj1.b * obj2.b );

}

fractie operator *( const fractie& obj1, const fractie& obj2)
{

    return fractie( obj1.a * obj2.a  , obj1.b * obj2.b );

}

fractie operator /( const fractie& obj1, const fractie& obj2)
{

    return fractie( obj1.a * obj2.b  , obj1.b * obj2.a );

}

fractie operator -(const fractie& obj1)
{

    return fractie( -obj1.a , obj1.b);

}

fractie& fractie::operator +=( const fractie& obj)
{

    this->a = (this->a * obj.b) + (obj.a * this->b);
    this->b = this->b * obj.b;

    return *this;

}

fractie& fractie::operator -=( const fractie& obj)
{

    this->a = (this->a * obj.b) - (obj.a * this->b);
    this->b = this->b * obj.b;

    return *this;

}

fractie& fractie::operator *=( const fractie& obj)
{

    this->a = this->a * obj.a;
    this->b = this->b * obj.b;

    return *this;

}

fractie& fractie::operator /=( const fractie& obj)
{

    this->a = this->a * obj.b;
    this->b = this->b * obj.a;

    return *this;

}

bool fractie::operator ==(const fractie& obj)
{

    if( (this->a * obj.b) == (obj.a * this->b) )
        return true;
    else return false;

}

bool fractie::operator !=(const fractie& obj)
{

    return !(*this == obj);

}

bool fractie::operator <(const fractie& obj)
{

    if( (this->a * obj.b) < (obj.a * this->b) )
        return true;
    else return false;

}

bool fractie::operator >(const fractie& obj)
{

    if( (this->a * obj.b) > (obj.a * this->b) )
        return true;
    else return false;

}

bool fractie::operator <=(const fractie& obj)
{

    if( (this->a * obj.b) <= (obj.a * this->b) )
        return true;
    else return false;

}

bool fractie::operator >=(const fractie& obj)
{

    if( (this->a * obj.b) >= (obj.a * this->b) )
        return true;
    else return false;

}