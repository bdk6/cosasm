
int main(int argc, char **argv) {
	return 0;
}


/*  instruction set
 * ADC  74   2
 * ADCI 7c   2   ADCI  n8
 * ADI  f4   2   ADI   n8
 * AND  f2   2
 * ANI  fa   2   ANI   n8
 * B1   34   2   B1  sht
 * B2   35   2   B2  sht
 * B3   36   2   B3  sht
 * B4   37   2   B4  sht
 * BDF  33   2   BDF sht *
 * BGE  33   2   BGE sht *
 * BL   3b   2   BL  sht *
 * BM   3b   2   BM  sht *
 * BN1  3c   2   BN1 sht
 * BN2  3d   2   BN2 sht
 * BN3  3e   2   BN3 sht
 * BN4  3f   2   BN4 sht
 * BNF  3b   2   BNF sht *
 * BNQ  39   2   BNQ sht
 * BNZ  3a   2   BNZ sht
 * BPZ  33   2   BPZ sht *
 * BQ   31   2   BQ sht
 * BR   30   2   BR sht
 * BZ   32   2   BZ sht
 * DEC  2n   2   DEC reg
 * DIS  71   2   DIS
 * GHI  9n   2   GHI reg
 * GLO  8n   2   GLO reg
 * IDL  00   2   IDL
 * INC  1n   2   INC reg
 * INP  6n   2   INP N3 1-7
 * IRX  60   2   IRX
 * LBDF c3   3   LBDF  lng
 * LBNF cb   3   LBNF  lng
 * LBNQ c9   3   LBNQ  lng
 * LBNZ ca   3   LBNZ  lng
 * LBQ  c1   3   LBQ   lng
 * LBR  c0   3   LBR   lng
 * LBZ  c2   3   LBZ   lng
 * LDA  4n   2   LDA reg
 * LDI  f8   2   LDI  n8
 * LDN  0n   2   LDN  reg
 * LDX  f0   2
 * LDXA 72   2
 * LSDF cf   3   LSDF
 * LSIE cc   3   LSIE
 * LSKP c8   3   LKSP *
 * LSNF c7   3   LSNF
 * LSNQ c5   3   LSNQ
 * LSNZ c6   3   LSNZ
 * LSQ  cd   3   LSQ
 * LSZ  ce   3   LSZ
 * MARK 79   2  MARK
 * NBR  38   2   NBR  *
 * NLBR c8   3  NLBR  lng *
 * NOP  c4   2  NOP
 * OR   f1   2  OR
 * ORI  f9   2  ORI  n8
 * OUT  6n   2  OUT 9-f
 * PHI  bn   2  PHI reg
 * PLO  an   2  PLO reg
 * REQ  7a   2  REQ
 * RET  70   2  RET
 * RSHL 76   2  RSHL  *
 * RSHR 7e   2  RSHR  *
 * SAV  78   2
 * SD   f5   2
 * SDB  75   2
 * SDBI 7d   2  SDBI n8
 * SDI  fd   2  SDI  n8
 * SEP  dn   2  SEP  reg
 * SEQ  7b   2  SEQ
 * SEX  en   2  SEX  reg
 * SHL  fe   2  SHL
 * SHLC 7e   2  SHLC   *
 * SHR  f6   2  SHR
 * SHRC 76   2  SHRC   *
 * SKP  38   2   SKP  *
 * SM   f7   2
 * SMB  77   2
 * SMBI 7f   2  SMBI n8
 * SMI  ff   2  SMI n8
 * STR  5n   2   STR reg
 * STXD 73   2
 * XOR  f3   2
 * XRI  fb   2
 */
