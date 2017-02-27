#ifndef BACTERIE_H
#define BACTERIE_H 

//==============================
//    INCLUDES
//==============================
#include <iostream>
#include <cstdio>
#include <cstdlib>

class Bacterie {
 public:
 //==============================
 //    CONSTRUCTORS
 //==============================
 Bacterie();

 //==============================
 //    DESTRUCTOR
 //==============================
 virtual ~Bacterie();
 //==============================
 //    GETTERS
 //==============================
 inline float Aout() const;
 inline float A() const;
 inline float Bout() const;
 inline float B() const;
 inline float Cout() const;
 inline float w() const;
 inline const char* type_() const;


class Bacterie
{
public:
//==============================
//    CONSTRUCTORS
//==============================


//==============================
//    DESTRUCTOR
//==============================

//==============================
//    GETTERS
//==============================


//==============================
//    SETTERS
//==============================

//==============================
//    OPERATORS
//==============================

//==============================
//    PUBLIC METHODS
//==============================
 virtual bool death()=0;
 virtual void adaptation(float elt_nutritif)=0;


protected:
//==============================
//    PROTECTED METHODS
//==============================

//==============================
//    ATTRIBUTES
//==============================
<<<<<<< HEAD
 float RAA;
 float RAB;
 float RBB;
 float RBC;
 float w_;
 float A_;
 float B_;
 float Aout_;
 float Bout_;
 float Cout_;
 float Wmin;
 const char* type;

};

//==============================
//    GETTER DEFINITION
//==============================
 inline float Bacterie::Aout() const {
	return Aout_;
 }


 inline float Bacterie::A() const {
	return A_;
 }

 inline float Bacterie::Bout() const {
	return Bout_;
 }

 inline float Bacterie::B() const {
	return B_;
 }

 inline float Bacterie::Cout() const {
	return Cout_;
 }

 inline float Bacterie::w() const {
	return w_;
 }

 inline const char* Bacterie::type_() const {
	return type;
 }


//==============================
//    SETTER DEFINITION
//==============================

//==============================
//    OPERATOR DEFINITION
//==============================


#endif // BACTERIE_H
