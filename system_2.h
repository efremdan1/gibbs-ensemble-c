int Adjust(int Attemp, int Nacc, double *Dr, int AttemptVolume, int AcceptVolume, double *Vmax, double Succ);
int Ener(double *En, double *Vir, double R2, int BoxID);
int Eneri(double Xi, double Yi, double Zi, int I, int Jb, double *En, double *Vir, int BoxID);
int Init_Chem(int Switch);
int Lattice(void);
int Mcmove(double En[2], double Vir[2], int *Attempt, int *Nacc, double Dr, double BetaInt);
int Mcvol(double En[2], double Vir[2], int *Attempt, int *Acc, double Vmax);
int McvolMod(double En[2], double Vir[2], int *Attempt, int *Acc, double Vmax);
int Mcswap(double En[2], double Vir[2],  int *Attempt, int *Acc);
void Readdat(int *Melt,int *Equil,int *Prod,int *Nsamp,int *Ndispl,int *Nprint,double *Dr,int *Nvol,double *Vmax,int *Nswap,double *Succ);
void Sample(int I,double *En,double *Vir, FILE *FilePtr);
void Store(FILE* Iout,double Dr,double Vmax);
double TailC(int BoxID);
void Toterg(double *Ener,double *Vir,int BoxID);
void WritePdb(FILE *FilePtrBox0, FILE *FilePtrBox1);

//extern double /Sys1/,Box[2],Hbox[2],Temp,Beta;
//C
//C     Box      : Simulation Box Length
//C     Hbox     : 0.5 * Box
//C     Temp     : Temperature
//C     Beta     : 1/Temp
