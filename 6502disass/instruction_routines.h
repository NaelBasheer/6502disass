#pragma once
#include "decoder.h"

void ADC (AddressingMode addressingMode, int operands[]);
void AND (AddressingMode addressingMode, int operands[]);
void ASL (AddressingMode addressingMode, int operands[]);
void BCC (AddressingMode addressingMode, int operands[]);
void BCS (AddressingMode addressingMode, int operands[]);
void BEQ (AddressingMode addressingMode, int operands[]);
void BIT (AddressingMode addressingMode, int operands[]);
void BMI (AddressingMode addressingMode, int operands[]);
void BNE (AddressingMode addressingMode, int operands[]);
void BPL (AddressingMode addressingMode, int operands[]);
void BRK (AddressingMode addressingMode, int operands[]);
void BVC (AddressingMode addressingMode, int operands[]);
void BVS (AddressingMode addressingMode, int operands[]);
void CLC (AddressingMode addressingMode, int operands[]);
void CLD (AddressingMode addressingMode, int operands[]);
void CLI (AddressingMode addressingMode, int operands[]);
void CLV (AddressingMode addressingMode, int operands[]);
void CMP (AddressingMode addressingMode, int operands[]);
void CPX (AddressingMode addressingMode, int operands[]);
void CPY (AddressingMode addressingMode, int operands[]);
void DEC (AddressingMode addressingMode, int operands[]);
void DEX (AddressingMode addressingMode, int operands[]);
void DEY (AddressingMode addressingMode, int operands[]);
void EOR (AddressingMode addressingMode, int operands[]);
void INC (AddressingMode addressingMode, int operands[]);
void INX (AddressingMode addressingMode, int operands[]);
void INY (AddressingMode addressingMode, int operands[]);
void JMP (AddressingMode addressingMode, int operands[]);
void JSR (AddressingMode addressingMode, int operands[]);
void LDA (AddressingMode addressingMode, int operands[]);
void LDX (AddressingMode addressingMode, int operands[]);
void LDY (AddressingMode addressingMode, int operands[]);
void LSR (AddressingMode addressingMode, int operands[]);
void NOP (AddressingMode addressingMode, int operands[]);
void ORA (AddressingMode addressingMode, int operands[]);
void PHA (AddressingMode addressingMode, int operands[]);
void PHP (AddressingMode addressingMode, int operands[]);
void PLA (AddressingMode addressingMode, int operands[]);
void PLP (AddressingMode addressingMode, int operands[]);
void ROL (AddressingMode addressingMode, int operands[]);
void ROR (AddressingMode addressingMode, int operands[]);
void RTI (AddressingMode addressingMode, int operands[]);
void RTS (AddressingMode addressingMode, int operands[]);
void SBC (AddressingMode addressingMode, int operands[]);
void SEC (AddressingMode addressingMode, int operands[]);
void SED (AddressingMode addressingMode, int operands[]);
void SEI (AddressingMode addressingMode, int operands[]);
void STA (AddressingMode addressingMode, int operands[]);
void STX (AddressingMode addressingMode, int operands[]);
void STY (AddressingMode addressingMode, int operands[]);
void TAX (AddressingMode addressingMode, int operands[]);
void TAY (AddressingMode addressingMode, int operands[]);
void TSX (AddressingMode addressingMode, int operands[]);
void TXA (AddressingMode addressingMode, int operands[]);
void TXS (AddressingMode addressingMode, int operands[]);
void TYA (AddressingMode addressingMode, int operands[]);
