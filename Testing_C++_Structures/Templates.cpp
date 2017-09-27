/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

namespace {
	/**************************************************************************
	 * Simple exception class
	 *************************************************************************/
	class E : public std::exception {
		public:
			explicit E(const char * s) throw() : msg(s) { }
			const char * what() const throw() { return msg; }

		private:
			E(){};	// no default constructor
			const char * msg;
	};


	/**************************************************************************
	 * Simple fixed-size LIFO stack template
	 *************************************************************************/
	template <typename T>
	class Stack {
		public:
			explicit Stack(int s = defaultSize);
			~Stack() { delete[] stackPtr; }
			T & push( const T & );
			T & pop();
			bool isEmpty() const { return _top < 0; }
			bool isFull() const { return _top >= _size - 1; }
			int top() const { return _top; }
			int size() const { return _size; }

		private:
			static const int defaultSize = 10;
			static const int maxSize = 1000;
			int _size;
			int _top;
			T * stackPtr;
	};


	/**************************************************************************
	 * Stack<T> constructor
	 *************************************************************************/
	template <typename T>
	Stack<T>::Stack ( int s ) {
		if(s > maxSize || s < 1) throw E("> invalid stack size");
		else _size = s;
		stackPtr = new T[_size];
		_top = -1;
	}

	template <typename T>
	T & Stack<T>::push ( const T & i ) {
		if(isFull()) throw E("> stack full");
		return stackPtr[++_top] = i;
	}

	template <typename T>
	T & Stack<T>::pop () {
		if(isEmpty()) throw E("> stack empty");
		return stackPtr[_top--];
	}
} // Anonymous namespace end



void Templates(void) {
	try {
		Stack<int> si(5);

		std::cout << "> si size: " << si.size() << std::endl;
		std::cout << "> si top: " << si.top() << std::endl;

		for ( int i : { 1, 2, 3, 4, 5 } ) {
			si.push(i);
		}

		std::cout << "> si top after pushes: " << si.top() << std::endl;
		std::cout << "> si is " << ( si.isFull() ? "" : "not " ) << "full" << std::endl;

		while(!si.isEmpty()) {
			std::cout << "> popped " << si.pop() << std::endl;
		}
	} catch (E & e) {
		std::cout << "> Stack error: " << e.what() <<std:: endl;
	}

	try {
		Stack<string> ss(5);

		std::cout << "> ss size: " << ss.size() << std::endl;
		std::cout << "> ss top: " << ss.top() << std::endl;

		for ( const char * s : { "one", "two", "three", "four", "five" } ) {
			ss.push(s);
		}

		std::cout << "> ss top after pushes: " << ss.top() << std::endl;
		std::cout << "> ss is " << ( ss.isFull() ? "" : "not " ) << "full" << std::endl;

		while(!ss.isEmpty()) {
			std::cout << "> popped " << ss.pop() << std::endl;
		}
	} catch (E & e) {
		std::cout << "> Stack error: " << e.what() << std::endl;
	}


}
