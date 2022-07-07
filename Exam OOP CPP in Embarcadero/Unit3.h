//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class Inima : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall Inima(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
