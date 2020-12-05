#if !defined(FRACTIE_HPP)
#define FRACTIE_HPP
/// Ursu Catalin-Emilian 323AB

#include <iostream>
using namespace std;

class fractie
{
private:
int a; //numarator
int b; //numitor
public:
fractie(const int ,const int ); 
fractie(const fractie&);
fractie & operator=(const fractie &);
~fractie();
double getValoare();
fractie getInv();
void setdata(const int,const int);
float getA();
float getB();
friend fractie operator +(const fractie&, const fractie&); 
friend fractie operator -( const fractie&, const fractie&);
friend fractie operator *( const fractie&, const fractie&);
friend fractie operator /( const fractie&, const fractie&);
friend fractie operator -(const fractie&);
fractie& operator +=( const fractie&); 
fractie& operator -=( const fractie&);
fractie& operator *=( const fractie&);
fractie& operator /=( const fractie&);
bool operator ==(const fractie &);
bool operator !=(const fractie&);
bool operator <(const fractie&);
bool operator >(const fractie&);
bool operator <=(const fractie&);
bool operator >=(const fractie&);

};

#endif // FRACTIE_HPP
