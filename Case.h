#ifndef CASE_H
#define CASE_H 

//==============================
//    INCLUDES
//==============================

class Case
{
public:
//==============================
//    CONSTRUCTORS
//==============================
Case();

//==============================
//    DESTRUCTOR
//==============================
~Case();

//==============================
//    GETTERS
//==============================
inline float Aout() const;
inline float Bout() const;
inline float Cout() const;

//==============================
//    SETTERS
//==============================

//==============================
//    OPERATORS
//==============================

//==============================
//    PUBLIC METHODS
//==============================

protected:
//==============================
//    PROTECTED METHODS
//==============================

//==============================
//    ATTRIBUTES
//==============================

float Aout_;
float Bout_;
float Cout_;

};

//==============================
//    GETTER DEFINITION
//==============================
inline float Case::Aout() const {
	return Aout_;
}

inline float Case::Bout() const {
	return Bout_;
}

inline float Case::Cout() const {
	return Cout_;
}

//==============================
//    SETTER DEFINITION
//==============================

//==============================
//    OPERATOR DEFINITION
//==============================


#endif // CASE_H
