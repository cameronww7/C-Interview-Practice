/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

namespace { // used so other files don't get confused
class Rational {
    int _n = 0;
    int _d = 1;
public:
    Rational ( int numerator = 0, int denominator = 1 ) : _n(numerator), _d(denominator) {};
    Rational ( const Rational & rhs ) : _n(rhs._n), _d(rhs._d) {};	// copy constructor
    ~Rational ();
    inline int numerator() const { return _n; };
    inline int denominator() const { return _d; };
    Rational & operator = ( const Rational & );
    Rational operator + ( const Rational & ) const;
    Rational operator - ( const Rational & ) const;
    Rational operator * ( const Rational & ) const;
    Rational operator / ( const Rational & ) const;
};

Rational & Rational::operator = ( const Rational & rhs ) {
    if( this != &rhs ) { // this is used to catch ourself
        _n = rhs.numerator();
        _d = rhs.denominator();
    }
    return *this; // this is the object that it was called on
}

Rational Rational::operator + ( const Rational & rhs ) const {
    return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator - ( const Rational & rhs ) const {
    return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator * ( const Rational & rhs ) const {
    return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator / ( const Rational & rhs ) const {
    return Rational(_n * rhs._d, _d * rhs._n);
}

Rational::~Rational() {
	printf("\n> dtor: %d/%d", _n, _d);
    _n = 0;
    _d = 1;
}

// useful for std::cout
std::ostream & operator << (std::ostream & o, const Rational & r) {
    return o << r.numerator() << '/' << r.denominator();
}

// overloaded for a literal
Rational operator + ( const Rational & lhs, const Rational & rhs ) {
    return Rational((lhs.numerator() * rhs.denominator()) + (lhs.denominator() * rhs.numerator()),
    					lhs.denominator() * rhs.denominator());
}
} //end of anonymous namespace

void OverloadingOperatorsInClass(void) {

	std::cout << std::endl;
    Rational a = 7;		// 7/1
    std::cout << "\n> a is: " << a;

    Rational b(5, 3);	// 5/3
    std::cout << "\n> b is: " << b;

    Rational c = b;		// copy constructor
    std::cout << "\n> c is: " << c;

    Rational d;			// default constructor
    std::cout << "\n> d is: " << d;

    d = c;				// assignment operator
    std::cout << "\n> d is: " << d;

    Rational & e = d;	// reference
    d = e;				// assignment to self!
    std::cout << "\n> e is: " << e;

    std::cout << "\n> "<< a << " + " << b << " = " << a + b;
    std::cout << "\n> "<< a << " - " << b << " = " << a - b;
    std::cout << "\n> "<< a << " * " << b << " = " << a * b;
    std::cout << "\n> "<< a << " / " << b << " = " << a / b;
//    std::cout << "\n> "<< a << " + " << 14 << " = " << a + 14;
    std::cout << "\n> "<< 14 << " + " << a << " = " << 14 + a;
}
