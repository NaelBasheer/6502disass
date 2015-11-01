#pragma once
#include <cstdint>
#include <iostream>
#include <iomanip>

#include "instruction_procedures.h"
#include "decoder.h"

using namespace std;

void Format(AddressingMode addressingMode)
{
	switch (addressingMode)
	{
	case Immediate:
		cout << "#$";
		break;
	case ZeroPage:
	case ZeroPageX:
		cout << "$" << setw(2) << setfill('0') << uppercase << hex;
		break;
	case Absolute:
	case AbsoluteX:
	case AbsoluteY:
		cout << "$" << setw(4) << setfill('0') << uppercase << hex;
		break;
	}
}
void ProcADC(AddressingMode addressingMode, int16_t operands[])
{
	cout<< "ADC ";
	Format(addressingMode);
	if (addressingMode == Immediate)
		cout << operands[0];
	else if (addressingMode == ZeroPage)
		cout << operands[0];
	else if (addressingMode == ZeroPageX)
		cout << operands[0] << ",X";
	else if (addressingMode == Absolute)
		cout << operands[0];
	else if (addressingMode == AbsoluteX)
		cout << operands[0]<<",X";
	else if (addressingMode == AbsoluteY)
		cout << operands[0]<<",Y";
	//else if (addressingMode == )
	cout << endl;
		
}

void ProcAND(AddressingMode addressingMode, int16_t operands[])
{
	cout << "AND ";
		Format(addressingMode);
	if (addressingMode == Immediate)
		cout << operands[0];
	else if (addressingMode == ZeroPage)
		cout << operands[0];
	else if (addressingMode == ZeroPageX)
		cout << operands[0] << ",X";
	else if (addressingMode == Absolute)
		cout << operands[0];
	else if (addressingMode == AbsoluteX)
		cout << operands[0] << ",X";
	else if (addressingMode == AbsoluteY)
		cout << operands[0] << ",Y";
	
	cout << endl;
}

void ProcASL(AddressingMode addressingMode, int16_t operands[])
{
	cout << "ASL ";
	Format(addressingMode);
	if (addressingMode == Accumulator)
		cout << 'A';
	else if (addressingMode == ZeroPage)
		cout << operands[0];
	else if (addressingMode == ZeroPageIndirectX)
		cout << operands[0];
	else if (addressingMode == Absolute)
		cout << operands[0];
	else if (addressingMode == AbsoluteX)
		cout << operands[0];

}

void ProcBCC(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcBCS(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcBEQ(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcBIT(AddressingMode addressingMode, int16_t operands[])
{
	cout << "BIT";
	Format(addressingMode);
	if (addressingMode == ZeroPage)
		cout << operands[0];
	else if (addressingMode == Absolute)
		cout << operands[0];
	cout<<endl;
}

void ProcBMI(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcBNE(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcBPL(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcBRK(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcBVC(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcBVS(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcCLC(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcCLD(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcCLI(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcCLV(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcCMP(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcCPX(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcCPY(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcDEC(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcDEX(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcDEY(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcEOR(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcINC(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcINX(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcINY(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcJMP(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcJSR(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcLDA(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcLDX(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcLDY(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcLSR(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcNOP(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcORA(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcPHA(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcPHP(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcPLA(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcPLP(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcROL(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcROR(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcRTI(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcRTS(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcSBC(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcSEC(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcSED(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcSEI(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcSTA(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcSTX(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcSTY(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcTAX(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcTAY(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcTSX(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcTXA(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcTXS(AddressingMode addressingMode, int16_t operands[])
{
}

void ProcTYA(AddressingMode addressingMode, int16_t operands[])
{
}