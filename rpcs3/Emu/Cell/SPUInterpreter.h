#pragma once

#include "SPUOpcodes.h"

class spu_thread;

using spu_inter_func_t = bool(*)(spu_thread& spu, spu_opcode_t op);

struct spu_interpreter
{
	static bool UNK(spu_thread&, spu_opcode_t);
	static void set_interrupt_status(spu_thread&, spu_opcode_t);

	static bool STOP(spu_thread&, spu_opcode_t);
	static bool LNOP(spu_thread&, spu_opcode_t);
	static bool SYNC(spu_thread&, spu_opcode_t);
	static bool DSYNC(spu_thread&, spu_opcode_t);
	static bool STATICHLE(spu_thread&, spu_opcode_t);
	static bool MFSPR(spu_thread&, spu_opcode_t);
	static bool RDCH(spu_thread&, spu_opcode_t);
	static bool RCHCNT(spu_thread&, spu_opcode_t);
	static bool SF(spu_thread&, spu_opcode_t);
	static bool OR(spu_thread&, spu_opcode_t);
	static bool BG(spu_thread&, spu_opcode_t);
	static bool SFH(spu_thread&, spu_opcode_t);
	static bool NOR(spu_thread&, spu_opcode_t);
	static bool ABSDB(spu_thread&, spu_opcode_t);
	static bool ROT(spu_thread&, spu_opcode_t);
	static bool ROTM(spu_thread&, spu_opcode_t);
	static bool ROTMA(spu_thread&, spu_opcode_t);
	static bool SHL(spu_thread&, spu_opcode_t);
	static bool ROTH(spu_thread&, spu_opcode_t);
	static bool ROTHM(spu_thread&, spu_opcode_t);
	static bool ROTMAH(spu_thread&, spu_opcode_t);
	static bool SHLH(spu_thread&, spu_opcode_t);
	static bool ROTI(spu_thread&, spu_opcode_t);
	static bool ROTMI(spu_thread&, spu_opcode_t);
	static bool ROTMAI(spu_thread&, spu_opcode_t);
	static bool SHLI(spu_thread&, spu_opcode_t);
	static bool ROTHI(spu_thread&, spu_opcode_t);
	static bool ROTHMI(spu_thread&, spu_opcode_t);
	static bool ROTMAHI(spu_thread&, spu_opcode_t);
	static bool SHLHI(spu_thread&, spu_opcode_t);
	static bool A(spu_thread&, spu_opcode_t);
	static bool AND(spu_thread&, spu_opcode_t);
	static bool CG(spu_thread&, spu_opcode_t);
	static bool AH(spu_thread&, spu_opcode_t);
	static bool NAND(spu_thread&, spu_opcode_t);
	static bool AVGB(spu_thread&, spu_opcode_t);
	static bool MTSPR(spu_thread&, spu_opcode_t);
	static bool WRCH(spu_thread&, spu_opcode_t);
	static bool BIZ(spu_thread&, spu_opcode_t);
	static bool BINZ(spu_thread&, spu_opcode_t);
	static bool BIHZ(spu_thread&, spu_opcode_t);
	static bool BIHNZ(spu_thread&, spu_opcode_t);
	static bool STOPD(spu_thread&, spu_opcode_t);
	static bool STQX(spu_thread&, spu_opcode_t);
	static bool BI(spu_thread&, spu_opcode_t);
	static bool BISL(spu_thread&, spu_opcode_t);
	static bool IRET(spu_thread&, spu_opcode_t);
	static bool BISLED(spu_thread&, spu_opcode_t);
	static bool HBR(spu_thread&, spu_opcode_t);
	static bool GB(spu_thread&, spu_opcode_t);
	static bool GBH(spu_thread&, spu_opcode_t);
	static bool GBB(spu_thread&, spu_opcode_t);
	static bool FSM(spu_thread&, spu_opcode_t);
	static bool FSMH(spu_thread&, spu_opcode_t);
	static bool FSMB(spu_thread&, spu_opcode_t);
	static bool LQX(spu_thread&, spu_opcode_t);
	static bool ROTQBYBI(spu_thread&, spu_opcode_t);
	static bool ROTQMBYBI(spu_thread&, spu_opcode_t);
	static bool SHLQBYBI(spu_thread&, spu_opcode_t);
	static bool CBX(spu_thread&, spu_opcode_t);
	static bool CHX(spu_thread&, spu_opcode_t);
	static bool CWX(spu_thread&, spu_opcode_t);
	static bool CDX(spu_thread&, spu_opcode_t);
	static bool ROTQBI(spu_thread&, spu_opcode_t);
	static bool ROTQMBI(spu_thread&, spu_opcode_t);
	static bool SHLQBI(spu_thread&, spu_opcode_t);
	static bool ROTQBY(spu_thread&, spu_opcode_t);
	static bool ROTQMBY(spu_thread&, spu_opcode_t);
	static bool SHLQBY(spu_thread&, spu_opcode_t);
	static bool ORX(spu_thread&, spu_opcode_t);
	static bool CBD(spu_thread&, spu_opcode_t);
	static bool CHD(spu_thread&, spu_opcode_t);
	static bool CWD(spu_thread&, spu_opcode_t);
	static bool CDD(spu_thread&, spu_opcode_t);
	static bool ROTQBII(spu_thread&, spu_opcode_t);
	static bool ROTQMBII(spu_thread&, spu_opcode_t);
	static bool SHLQBII(spu_thread&, spu_opcode_t);
	static bool ROTQBYI(spu_thread&, spu_opcode_t);
	static bool ROTQMBYI(spu_thread&, spu_opcode_t);
	static bool SHLQBYI(spu_thread&, spu_opcode_t);
	static bool NOP(spu_thread&, spu_opcode_t);
	static bool CGT(spu_thread&, spu_opcode_t);
	static bool XOR(spu_thread&, spu_opcode_t);
	static bool CGTH(spu_thread&, spu_opcode_t);
	static bool EQV(spu_thread&, spu_opcode_t);
	static bool CGTB(spu_thread&, spu_opcode_t);
	static bool SUMB(spu_thread&, spu_opcode_t);
	static bool HGT(spu_thread&, spu_opcode_t);
	static bool CLZ(spu_thread&, spu_opcode_t);
	static bool XSWD(spu_thread&, spu_opcode_t);
	static bool XSHW(spu_thread&, spu_opcode_t);
	static bool CNTB(spu_thread&, spu_opcode_t);
	static bool XSBH(spu_thread&, spu_opcode_t);
	static bool CLGT(spu_thread&, spu_opcode_t);
	static bool ANDC(spu_thread&, spu_opcode_t);
	static bool CLGTH(spu_thread&, spu_opcode_t);
	static bool ORC(spu_thread&, spu_opcode_t);
	static bool CLGTB(spu_thread&, spu_opcode_t);
	static bool HLGT(spu_thread&, spu_opcode_t);
	static bool CEQ(spu_thread&, spu_opcode_t);
	static bool MPYHHU(spu_thread&, spu_opcode_t);
	static bool ADDX(spu_thread&, spu_opcode_t);
	static bool SFX(spu_thread&, spu_opcode_t);
	static bool CGX(spu_thread&, spu_opcode_t);
	static bool BGX(spu_thread&, spu_opcode_t);
	static bool MPYHHA(spu_thread&, spu_opcode_t);
	static bool MPYHHAU(spu_thread&, spu_opcode_t);
	static bool MPY(spu_thread&, spu_opcode_t);
	static bool MPYH(spu_thread&, spu_opcode_t);
	static bool MPYHH(spu_thread&, spu_opcode_t);
	static bool MPYS(spu_thread&, spu_opcode_t);
	static bool CEQH(spu_thread&, spu_opcode_t);
	static bool MPYU(spu_thread&, spu_opcode_t);
	static bool CEQB(spu_thread&, spu_opcode_t);
	static bool HEQ(spu_thread&, spu_opcode_t);
	static bool BRZ(spu_thread&, spu_opcode_t);
	static bool STQA(spu_thread&, spu_opcode_t);
	static bool BRNZ(spu_thread&, spu_opcode_t);
	static bool BRHZ(spu_thread&, spu_opcode_t);
	static bool BRHNZ(spu_thread&, spu_opcode_t);
	static bool STQR(spu_thread&, spu_opcode_t);
	static bool BRA(spu_thread&, spu_opcode_t);
	static bool LQA(spu_thread&, spu_opcode_t);
	static bool BRASL(spu_thread&, spu_opcode_t);
	static bool BR(spu_thread&, spu_opcode_t);
	static bool FSMBI(spu_thread&, spu_opcode_t);
	static bool BRSL(spu_thread&, spu_opcode_t);
	static bool LQR(spu_thread&, spu_opcode_t);
	static bool IL(spu_thread&, spu_opcode_t);
	static bool ILHU(spu_thread&, spu_opcode_t);
	static bool ILH(spu_thread&, spu_opcode_t);
	static bool IOHL(spu_thread&, spu_opcode_t);
	static bool ORI(spu_thread&, spu_opcode_t);
	static bool ORHI(spu_thread&, spu_opcode_t);
	static bool ORBI(spu_thread&, spu_opcode_t);
	static bool SFI(spu_thread&, spu_opcode_t);
	static bool SFHI(spu_thread&, spu_opcode_t);
	static bool ANDI(spu_thread&, spu_opcode_t);
	static bool ANDHI(spu_thread&, spu_opcode_t);
	static bool ANDBI(spu_thread&, spu_opcode_t);
	static bool AI(spu_thread&, spu_opcode_t);
	static bool AHI(spu_thread&, spu_opcode_t);
	static bool STQD(spu_thread&, spu_opcode_t);
	static bool LQD(spu_thread&, spu_opcode_t);
	static bool XORI(spu_thread&, spu_opcode_t);
	static bool XORHI(spu_thread&, spu_opcode_t);
	static bool XORBI(spu_thread&, spu_opcode_t);
	static bool CGTI(spu_thread&, spu_opcode_t);
	static bool CGTHI(spu_thread&, spu_opcode_t);
	static bool CGTBI(spu_thread&, spu_opcode_t);
	static bool HGTI(spu_thread&, spu_opcode_t);
	static bool CLGTI(spu_thread&, spu_opcode_t);
	static bool CLGTHI(spu_thread&, spu_opcode_t);
	static bool CLGTBI(spu_thread&, spu_opcode_t);
	static bool HLGTI(spu_thread&, spu_opcode_t);
	static bool MPYI(spu_thread&, spu_opcode_t);
	static bool MPYUI(spu_thread&, spu_opcode_t);
	static bool CEQI(spu_thread&, spu_opcode_t);
	static bool CEQHI(spu_thread&, spu_opcode_t);
	static bool CEQBI(spu_thread&, spu_opcode_t);
	static bool HEQI(spu_thread&, spu_opcode_t);
	static bool HBRA(spu_thread&, spu_opcode_t);
	static bool HBRR(spu_thread&, spu_opcode_t);
	static bool ILA(spu_thread&, spu_opcode_t);
	static bool SELB(spu_thread&, spu_opcode_t);
	static bool SHUFB(spu_thread&, spu_opcode_t);
	static bool MPYA(spu_thread&, spu_opcode_t);
	static bool DFCGT(spu_thread&, spu_opcode_t);
	static bool DFCMGT(spu_thread&, spu_opcode_t);
	static bool DFTSV(spu_thread&, spu_opcode_t);
	static bool DFCEQ(spu_thread&, spu_opcode_t);
	static bool DFCMEQ(spu_thread&, spu_opcode_t);
};

struct spu_interpreter_fast final : spu_interpreter
{
	static bool FREST(spu_thread&, spu_opcode_t);
	static bool FRSQEST(spu_thread&, spu_opcode_t);
	static bool FCGT(spu_thread&, spu_opcode_t);
	static bool FA(spu_thread&, spu_opcode_t);
	static bool FS(spu_thread&, spu_opcode_t);
	static bool FM(spu_thread&, spu_opcode_t);
	static bool FCMGT(spu_thread&, spu_opcode_t);
	static bool DFA(spu_thread&, spu_opcode_t);
	static bool DFS(spu_thread&, spu_opcode_t);
	static bool DFM(spu_thread&, spu_opcode_t);
	static bool DFMA(spu_thread&, spu_opcode_t);
	static bool DFMS(spu_thread&, spu_opcode_t);
	static bool DFNMS(spu_thread&, spu_opcode_t);
	static bool DFNMA(spu_thread&, spu_opcode_t);
	static bool FSCRRD(spu_thread&, spu_opcode_t);
	static bool FESD(spu_thread&, spu_opcode_t);
	static bool FRDS(spu_thread&, spu_opcode_t);
	static bool FSCRWR(spu_thread&, spu_opcode_t);
	static bool FCEQ(spu_thread&, spu_opcode_t);
	static bool FCMEQ(spu_thread&, spu_opcode_t);
	static bool FI(spu_thread&, spu_opcode_t);
	static bool CFLTS(spu_thread&, spu_opcode_t);
	static bool CFLTU(spu_thread&, spu_opcode_t);
	static bool CSFLT(spu_thread&, spu_opcode_t);
	static bool CUFLT(spu_thread&, spu_opcode_t);
	static bool FNMS(spu_thread&, spu_opcode_t);
	static bool FMA(spu_thread&, spu_opcode_t);
	static bool FMS(spu_thread&, spu_opcode_t);
};

struct spu_interpreter_precise final : spu_interpreter
{
	static bool FREST(spu_thread&, spu_opcode_t);
	static bool FRSQEST(spu_thread&, spu_opcode_t);
	static bool FCGT(spu_thread&, spu_opcode_t);
	static bool FA(spu_thread&, spu_opcode_t);
	static bool FS(spu_thread&, spu_opcode_t);
	static bool FM(spu_thread&, spu_opcode_t);
	static bool FCMGT(spu_thread&, spu_opcode_t);
	static bool DFA(spu_thread&, spu_opcode_t);
	static bool DFS(spu_thread&, spu_opcode_t);
	static bool DFM(spu_thread&, spu_opcode_t);
	static bool DFMA(spu_thread&, spu_opcode_t);
	static bool DFMS(spu_thread&, spu_opcode_t);
	static bool DFNMS(spu_thread&, spu_opcode_t);
	static bool DFNMA(spu_thread&, spu_opcode_t);
	static bool FSCRRD(spu_thread&, spu_opcode_t);
	static bool FESD(spu_thread&, spu_opcode_t);
	static bool FRDS(spu_thread&, spu_opcode_t);
	static bool FSCRWR(spu_thread&, spu_opcode_t);
	static bool FCEQ(spu_thread&, spu_opcode_t);
	static bool FCMEQ(spu_thread&, spu_opcode_t);
	static bool FI(spu_thread&, spu_opcode_t);
	static bool CFLTS(spu_thread&, spu_opcode_t);
	static bool CFLTU(spu_thread&, spu_opcode_t);
	static bool CSFLT(spu_thread&, spu_opcode_t);
	static bool CUFLT(spu_thread&, spu_opcode_t);
	static bool FNMS(spu_thread&, spu_opcode_t);
	static bool FMA(spu_thread&, spu_opcode_t);
	static bool FMS(spu_thread&, spu_opcode_t);
};
