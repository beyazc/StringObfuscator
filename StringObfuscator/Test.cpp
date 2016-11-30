#include "stdafx.h"

Test::Test()
{
}

Test::~Test()
{
} 


void	Test::testAll(){

	Obfuscator obfuscate;
	char* testString="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char obfuscatedString[10+2*26+1]="";

	int obfuscateIdx=0;
	obfuscate.n0(obfuscatedString+obfuscateIdx);		   obfuscateIdx++;
	obfuscate.n1(obfuscatedString+obfuscateIdx);		   obfuscateIdx++;
	obfuscate.n2(obfuscatedString+obfuscateIdx);		   obfuscateIdx++;
	obfuscate.n3(obfuscatedString+obfuscateIdx);		   obfuscateIdx++;
	obfuscate.n4(obfuscatedString+obfuscateIdx);		   obfuscateIdx++;
	obfuscate.n5(obfuscatedString+obfuscateIdx);		   obfuscateIdx++;
	obfuscate.n6(obfuscatedString+obfuscateIdx);		   obfuscateIdx++;
	obfuscate.n7(obfuscatedString+obfuscateIdx);		   obfuscateIdx++;
	obfuscate.n8(obfuscatedString+obfuscateIdx);		   obfuscateIdx++;
	obfuscate.n9(obfuscatedString+obfuscateIdx);		   obfuscateIdx++;
	obfuscate.A(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.B(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.C(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.D(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.E(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.F(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.G(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.H(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.I(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.J(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.K(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.L(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.M(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.N(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.O(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.P(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.Q(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.R(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.S(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.T(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.U(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.V(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.W(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.X(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.Y(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.Z(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.a(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.b(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.c(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.d(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.e(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.f(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.g(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.h(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.i(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.j(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.k(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.l(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.m(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.n(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.o(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.p(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.q(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.r(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.s(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.t(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.u(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.v(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.w(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.x(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.y(obfuscatedString+obfuscateIdx);			obfuscateIdx++;
	obfuscate.z(obfuscatedString+obfuscateIdx);			obfuscateIdx++;

	if(strcmp(obfuscatedString,testString)==0)
	{
		printf("obfuscated and test strings are aqual");
	}
	else
	{
		printf("obfuscated %s and test %s strings are different",obfuscatedString,testString);
	}
}