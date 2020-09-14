#include<bits/stdc++.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct eent
{
short atomicno,group,period,atomicr,meltp;
char name[50],ec[50],block;
float atomicw,en,boilp,density;
}
e[115];
int main()
{
int n,t,a,i;
char name[50],c;
string line;
         ifstream myfile ("DoNotDelete.txt");
         if (myfile.is_open())
         {
        while ( getline (myfile,line) )
        {
         cout << line << '\n';
       }
       myfile.close();
      }

system("PAUSE");
system("cls");
system("COLOR 04");
for(i=1;i<=114;++i)
{e[i].atomicno=i;}
{
strcpy(e[1].name,"Hydrogen- H");          strcpy(e[1].ec,"1s1");
strcpy(e[2].name,"Helium- He");           strcpy(e[2].ec,"1s2");
strcpy(e[3].name,"Lithium- Li");          strcpy(e[3].ec,"[He] 2s1");
strcpy(e[4].name,"Beryllium- Be");        strcpy(e[4].ec,"[He] 2s2	");
strcpy(e[5].name,"Boron- B");             strcpy(e[5].ec,"[He] 2s2 2p1");
strcpy(e[6].name,"Carbon- C");            strcpy(e[6].ec,"[He] 2s2 2p2");
strcpy(e[7].name,"Nitrogen- N");          strcpy(e[7].ec,"[He] 2s2 2p3");
strcpy(e[8].name,"Oxygen- O");            strcpy(e[8].ec,"[He] 2s2 2p4");
strcpy(e[9].name,"Fluorine- F");          strcpy(e[9].ec,"[He] 2s2 2p5");
strcpy(e[10].name,"Neon- Ne");            strcpy(e[10].ec,"[He] 2s2 2p6");
strcpy(e[11].name,"Sodium- Na");          strcpy(e[11].ec,"[Ne] 3s1");
strcpy(e[12].name,"Magnesium- Mg");       strcpy(e[12].ec,"[Ne] 3s2");
strcpy(e[13].name,"Aluminium- Al");       strcpy(e[13].ec,"[Ne] 3s2 3p1");
strcpy(e[14].name,"Silicon- Si");         strcpy(e[14].ec,"[Ne] 3s2 3p2");
strcpy(e[15].name,"Phosphorus- P");       strcpy(e[15].ec,"[Ne] 3s2 3p3");
strcpy(e[16].name,"Sulfur- S");           strcpy(e[16].ec,"[Ne] 3s2 3p4");
strcpy(e[17].name,"Chlorine- Cl");        strcpy(e[17].ec,"[Ne] 3s2 3p5");
strcpy(e[18].name,"Argon- Ar");           strcpy(e[18].ec,"[Ne] 3s2 3p6");
strcpy(e[19].name,"Potassium- K");        strcpy(e[19].ec,"[Ar] 4s1");
strcpy(e[20].name,"Calcium- Ca");         strcpy(e[20].ec,"[Ar] 4s2");
strcpy(e[21].name,"Scandium- Sc");        strcpy(e[21].ec,"[Ar] 3d1 4s2");
strcpy(e[22].name,"Titanium- Ti");        strcpy(e[22].ec,"[Ar] 3d2 4s2");
strcpy(e[23].name,"Vanadium- V");         strcpy(e[23].ec,"[Ar] 3d3 4s2");
strcpy(e[24].name,"Chromium- Cr");        strcpy(e[24].ec,"[Ar] 3d5 4s1");
strcpy(e[25].name,"Manganese- Mn");       strcpy(e[25].ec,"[Ar] 3d5 4s2");
strcpy(e[26].name,"Iron- Fe");            strcpy(e[26].ec,"[Ar] 3d6 4s2");
strcpy(e[27].name,"Cobalt- Co");          strcpy(e[27].ec,"[Ar] 3d7 4s2");
strcpy(e[28].name,"Nickel- Ni");          strcpy(e[28].ec,"[Ar] 3d8 4s2");
strcpy(e[29].name,"Copper- Cu");          strcpy(e[29].ec,"[Ar] 3d10 4s1");
strcpy(e[30].name,"Zinc- Zn");            strcpy(e[30].ec,"[Ar] 3d10 4s2");
strcpy(e[31].name,"Gallium- Ga");         strcpy(e[31].ec,"[Ar] 3d10 4s2 4p1");
strcpy(e[32].name,"Germanium- Ge");       strcpy(e[32].ec,"[Ar] 3d10 4s2 4p2");
strcpy(e[33].name,"Arsenic- As");         strcpy(e[33].ec,"[Ar] 3d10 4s2 4p3");
strcpy(e[34].name,"Selenium- Se");        strcpy(e[34].ec,"[Ar] 3d10 4s2 4p4");
strcpy(e[35].name,"Bromine- Br");         strcpy(e[35].ec,"[Ar] 3d10 4s2 4p5	");
strcpy(e[36].name,"Krypton- Kr");         strcpy(e[36].ec,"[Ar] 3d10 4s2 4p6	");
strcpy(e[37].name,"Rubidium- Rb");        strcpy(e[37].ec,"[Kr] 5s1");
strcpy(e[38].name,"Strontium- Sr");       strcpy(e[38].ec,"[Kr] 5s2");
strcpy(e[39].name,"Yttrium- Y");          strcpy(e[39].ec,"[Kr] 4d1 5s2");
strcpy(e[40].name,"Zirconium- Zr");       strcpy(e[40].ec,"[Kr] 4d2 5s2");
strcpy(e[41].name,"Niobium- Nb");         strcpy(e[41].ec,"[Kr] 4d4 5s1");
strcpy(e[42].name,"Molybdenum- Mo");      strcpy(e[42].ec,"[Kr] 4d5 5s1");
strcpy(e[43].name,"Technetium- Tc");      strcpy(e[43].ec,"[Kr] 4d5 5s2");
strcpy(e[44].name,"Ruthenium- Ru");       strcpy(e[44].ec,"[Kr] 4d7 5s1");
strcpy(e[45].name,"Rhodium- Rh");         strcpy(e[45].ec,"[Kr] 4d8 5s1");
strcpy(e[46].name,"Palladium- Pd");       strcpy(e[46].ec,"[Kr] 4d10");
strcpy(e[47].name,"Silver- Ag");          strcpy(e[47].ec,"[Kr] 4d10 5s1");
strcpy(e[48].name,"Cadmium- Cd");         strcpy(e[48].ec,"[Kr] 4d10 5s2");
strcpy(e[49].name,"Indium- In");          strcpy(e[49].ec,"[Kr] 4d10 5s2 5p1");
strcpy(e[50].name,"Tin- Sn");             strcpy(e[50].ec,"[Kr] 4d10 5s2 5p2");
strcpy(e[51].name,"Antimony- Sb");        strcpy(e[51].ec,"[Kr] 4d10 5s2 5p3");
strcpy(e[52].name,"Tellurium- Te");       strcpy(e[52].ec,"[Kr] 4d10 5s2 5p4");
strcpy(e[53].name,"Iodine- I");           strcpy(e[53].ec,"[Kr] 4d10 5s2 5p5");
strcpy(e[54].name,"Xenon- Xe");           strcpy(e[54].ec,"[Kr] 4d10 5s2 5p6");
strcpy(e[55].name,"Caesium- Cs");         strcpy(e[55].ec,"[Xe] 6s1");
strcpy(e[56].name,"Barium- Ba");          strcpy(e[56].ec,"[Xe] 6s2");
strcpy(e[57].name,"Lanthanum- La");       strcpy(e[57].ec,"[Xe] 5d1 6s2");
strcpy(e[58].name,"Cerium- Ce");          strcpy(e[58].ec,"[Xe] 4f1 5d1 6s2");
strcpy(e[59].name,"Praseodymium- Pr");    strcpy(e[59].ec,"[Xe] 4f3 6s2");
strcpy(e[60].name,"Neodymium- Nd");       strcpy(e[60].ec,"[Xe] 4f4 6s2");
strcpy(e[61].name,"Promethium- Pm");      strcpy(e[61].ec,"[Xe] 4f5 6s2");
strcpy(e[62].name,"Samarium- Sm");        strcpy(e[62].ec,"[Xe] 4f6 6s2");
strcpy(e[63].name,"Europium- Eu");        strcpy(e[63].ec,"[Xe] 4f7 6s2");
strcpy(e[64].name,"Gadolinium- Gd");      strcpy(e[64].ec,"[Xe] 4f7 5d1 6s2");
strcpy(e[65].name,"Terbium- Tb");         strcpy(e[65].ec,"[Xe] 4f9 6s2");
strcpy(e[66].name,"Dysprosium- Dy");      strcpy(e[66].ec,"[Xe] 4f10 6s2");
strcpy(e[67].name,"Holmium- Ho");         strcpy(e[67].ec,"[Xe] 4f11 6s2");
strcpy(e[68].name,"Erbium- Er");          strcpy(e[68].ec,"[Xe] 4f12 6s2");
strcpy(e[69].name,"Thulium- Tm");         strcpy(e[69].ec,"[Xe] 4f13 6s2");
strcpy(e[70].name,"Ytterbium- Yb");       strcpy(e[70].ec,"[Xe] 4f14 6s2");
strcpy(e[71].name,"Lutetium- Lu");        strcpy(e[71].ec,"[Xe] 4f14 5d1 6s2");
strcpy(e[72].name,"Hafnium- Hf");         strcpy(e[72].ec,"[Xe] 4f14 5d2 6s2");
strcpy(e[73].name,"Tantalum- Ta");        strcpy(e[73].ec,"[Xe] 4f14 5d3 6s2");
strcpy(e[74].name,"Tungsten- W");         strcpy(e[74].ec,"[Xe] 4f14 5d4 6s2");
strcpy(e[75].name,"Rhenium- Re");         strcpy(e[75].ec,"[Xe] 4f14 5d5 6s2");
strcpy(e[76].name,"Osmium- Os");          strcpy(e[76].ec,"[Xe] 4f14 5d6 6s2");
strcpy(e[77].name,"Iridium- Ir");         strcpy(e[77].ec,"[Xe] 4f14 5d7 6s2");
strcpy(e[78].name,"Platinum- Pt");        strcpy(e[78].ec,"[Xe] 4f14 5d9 6s1");
strcpy(e[79].name,"Gold- Au");            strcpy(e[79].ec,"[Xe] 4f14 5d10 6s1");
strcpy(e[80].name,"Mercury- Hg");         strcpy(e[80].ec,"[Xe] 4f14 5d10 6s2	");
strcpy(e[81].name,"Thallium- Tl");        strcpy(e[81].ec,"[Xe] 4f14 5d10 6s2 6p1");
strcpy(e[82].name,"Lead- Pb");            strcpy(e[82].ec,"[Xe] 4f14 5d10 6s2 6p2");
strcpy(e[83].name,"Bismuth- Bi");         strcpy(e[83].ec,"[Xe] 4f14 5d10 6s2 6p3");
strcpy(e[84].name,"Polonium- Po");        strcpy(e[84].ec,"[Xe] 4f14 5d10 6s2 6p4");
strcpy(e[85].name,"Astatine- At");        strcpy(e[85].ec,"[Xe] 4f14 5d10 6s2 6p5");
strcpy(e[86].name,"Radon- Rn");           strcpy(e[86].ec,"[Xe] 4f14 5d10 6s2 6p6");
strcpy(e[87].name,"Francium- Fr");        strcpy(e[87].ec,"[Rn] 7s1");
strcpy(e[88].name,"Radium- Ra");          strcpy(e[88].ec,"[Rn] 7s2");
strcpy(e[89].name,"Actinium- Ac");        strcpy(e[89].ec,"[Rn] 6d1 7s2");
strcpy(e[90].name,"Thorium- Th");         strcpy(e[90].ec,"[Rn] 6d2 7s2");
strcpy(e[91].name,"Protactinium- Pa");    strcpy(e[91].ec,"[Rn] 5f2 6d1 7s2");
strcpy(e[92].name,"Uranium- U");          strcpy(e[92].ec,"[Rn] 5f3 6d1 7s2");
strcpy(e[93].name,"Neptunium- Np");       strcpy(e[93].ec,"[Rn] 5f4 6d1 7s2");
strcpy(e[94].name,"Plutonium- Pu");       strcpy(e[94].ec,"[Rn] 5f6 7s2");
strcpy(e[95].name,"Americium- Am");       strcpy(e[95].ec,"[Rn] 5f7 7s2");
strcpy(e[96].name,"Curium- Cm");          strcpy(e[96].ec,"[Rn] 5f7 6d1 7s2");
strcpy(e[97].name,"Berkelium- Bk");       strcpy(e[97].ec,"[Rn] 5f9 7s2");
strcpy(e[98].name,"Californium- Cf");     strcpy(e[98].ec,"[Rn] 5f10 7s2");
strcpy(e[99].name,"Einsteinium- Es");     strcpy(e[99].ec,"[Rn] 5f11 7s2");
strcpy(e[100].name,"Fermium- Fm");        strcpy(e[100].ec,"[Rn] 5f12 7s2");
strcpy(e[101].name,"Mendelevium- Md");    strcpy(e[101].ec,"[Rn] 5f13 7s2");
strcpy(e[102].name,"Nobelium- No");       strcpy(e[102].ec,"[Rn] 5f14 7s2");
strcpy(e[103].name,"Lawrencium- Lr");     strcpy(e[103].ec,"[Rn] 5f14 7s2 7p1");
strcpy(e[104].name,"Rutherfordium- Rf");  strcpy(e[104].ec,"[Rn] 5f14 6d2 7s2");
strcpy(e[105].name,"Dubnium- Db");        strcpy(e[105].ec,"[Rn] 5f14 6d3 7s2	");
strcpy(e[106].name,"Seaborgium- Sg");     strcpy(e[106].ec,"[Rn] 5f14 6d4 7s2");
strcpy(e[107].name,"Bohrium- Bh");        strcpy(e[107].ec,"[Rn] 5f14 6d5 7s2");
strcpy(e[108].name,"Hassium- Hs");        strcpy(e[108].ec,"[Rn] 5f14 6d6 7s2");
strcpy(e[109].name,"Meitnerium- Mt");     strcpy(e[109].ec,"[Rn] 5f14 6d7 7s2");
strcpy(e[110].name,"Darmstadtium- Ds");   strcpy(e[110].ec,"[Rn] 5f14 6d8 7s2");
strcpy(e[111].name,"Roentgenium- Rg");    strcpy(e[111].ec,"[Rn] 5f14 6d9 7s2");
strcpy(e[112].name,"Copernicium- Cn");    strcpy(e[112].ec,"[Rn] 5f14 6d10 7s2");
strcpy(e[113].name,"Ununtrium- Uut");     strcpy(e[113].ec,"[Rn] 5f14 6d10 7s2 7p1");
strcpy(e[114].name,"Flerovium- Fl");      strcpy(e[114].ec,"[Rn] 5f14 6d10 7s2 7p2");
}
{
e[1].atomicw=1.008;           e[1].atomicr=53;            e[1].en=2.20;
e[2].atomicw=4.002602;        e[2].atomicr=31;            e[2].en=0;
e[3].atomicw=6.94;            e[3].atomicr=167;	          e[3].en=0.98;
e[4].atomicw=9.012182;        e[4].atomicr=112;           e[4].en=1.57;
e[5].atomicw=10.81;           e[5].atomicr=87;            e[5].en=2.04;
e[6].atomicw=12.011;          e[6].atomicr=67;            e[6].en=2.55;
e[7].atomicw=14.007;          e[7].atomicr=56;            e[7].en=3.04;
e[8].atomicw=15.999;          e[8].atomicr=48;            e[8].en=3.44;
e[9].atomicw=18.9984032;      e[9].atomicr=42;            e[9].en=3.98;
e[10].atomicw=20.1797;        e[10].atomicr=38;           e[10].en=0;
e[11].atomicw=22.98976928;    e[11].atomicr=190;          e[11].en=0.93;
e[12].atomicw=24.305;         e[12].atomicr=145;          e[12].en=1.31;
e[13].atomicw=26.9815386;     e[13].atomicr=118;          e[13].en=1.61;
e[14].atomicw=28.085;         e[14].atomicr=111;          e[14].en=1.90;
e[15].atomicw=30.973762;      e[15].atomicr=98;           e[15].en=2.19;
e[16].atomicw=32.06;          e[16].atomicr=88;           e[16].en=2.58;
e[17].atomicw=35.45;          e[17].atomicr=79;           e[17].en=3.16;
e[18].atomicw=39.948;         e[18].atomicr=71;           e[18].en=0;
e[19].atomicw=39.0983;        e[19].atomicr=243;          e[19].en=0.82;
e[20].atomicw=40.078;         e[20].atomicr=194;          e[20].en=1.00;
e[21].atomicw=44.955912;      e[21].atomicr=184;          e[21].en=1.36;
e[22].atomicw=47.867;         e[22].atomicr=176;          e[22].en=1.54;
e[23].atomicw=50.9415;        e[23].atomicr=171;          e[23].en=1.63;
e[24].atomicw=51.9961;        e[24].atomicr=166;          e[24].en=1.66;
e[25].atomicw=54.938045;      e[25].atomicr=161;          e[25].en=1.55;
e[26].atomicw=55.845;         e[26].atomicr=156;          e[26].en=1.83;
e[27].atomicw=58.933195;      e[27].atomicr=152;          e[27].en=1.88;
e[28].atomicw=58.6934;        e[28].atomicr=149;          e[28].en=1.91;
e[29].atomicw=63.546;         e[29].atomicr=145;          e[29].en=1.90;
e[30].atomicw=65.38;          e[30].atomicr=142;          e[30].en=1.65;
e[31].atomicw=69.723;         e[31].atomicr=136;          e[31].en=1.81;
e[32].atomicw=72.630;         e[32].atomicr=125;          e[32].en=2.01;
e[33].atomicw=74.92160;       e[33].atomicr=114;          e[33].en=2.18;
e[34].atomicw=78.96;          e[34].atomicr=103;          e[34].en=2.55;
e[35].atomicw=79.904;         e[35].atomicr=94;           e[35].en=2.96;
e[36].atomicw=83.798;         e[36].atomicr=88;           e[36].en=3.00;
e[37].atomicw=85.4678;        e[37].atomicr=265;          e[37].en=0.82;
e[38].atomicw=87.62;          e[38].atomicr=219;          e[38].en=0.95;
e[39].atomicw=88.90585;       e[39].atomicr=212;          e[39].en=1.22;
e[40].atomicw=91.224;         e[40].atomicr=206;          e[40].en=1.33;
e[41].atomicw=92.90638;       e[41].atomicr=198;          e[41].en=1.6;
e[42].atomicw=95.96;          e[42].atomicr=190;          e[42].en=2.16;
e[43].atomicw=98;             e[43].atomicr=183;          e[43].en=1.9;
e[44].atomicw=101.07;         e[44].atomicr=178;          e[44].en=2.2;
e[45].atomicw=102.90550;      e[45].atomicr=173;          e[45].en=2.28;
e[46].atomicw=106.42;         e[46].atomicr=169;          e[46].en=2.20;
e[47].atomicw=107.8682;       e[47].atomicr=165;          e[47].en=1.93;
e[48].atomicw=112.411;        e[48].atomicr=161;          e[48].en=1.69;
e[49].atomicw=114.818;        e[49].atomicr=156;          e[49].en=1.78;
e[50].atomicw=118.710;        e[50].atomicr=145;          e[50].en=1.96;
e[51].atomicw=121.760;        e[51].atomicr=133;          e[51].en=2.05;
e[52].atomicw=127.60;         e[52].atomicr=123;          e[52].en=2.1;
e[53].atomicw=126.90447;      e[53].atomicr=115;          e[53].en=2.66;
e[54].atomicw=131.293;        e[54].atomicr=108;          e[54].en=2.6;
e[55].atomicw=132.9054519;    e[55].atomicr=298;          e[55].en=0.79;
e[56].atomicw=137.327;        e[56].atomicr=253;          e[56].en=0.89;
e[57].atomicw=138.90547;      e[57].atomicr=169;          e[57].en=1.10;
e[58].atomicw=140.90765;      e[58].atomicr=131;          e[58].en=1.12;
e[59].atomicw=140.90765;      e[59].atomicr=247;          e[59].en=1.13;
e[60].atomicw=144.242;        e[60].atomicr=206;          e[60].en=1.14;
e[61].atomicw=145;            e[61].atomicr=205;          e[61].en=0;
e[62].atomicw=150.36;         e[62].atomicr=238;          e[62].en=1.17;
e[63].atomicw=151.964;        e[63].atomicr=231;          e[63].en=0;
e[64].atomicw=157.25;         e[64].atomicr=233;          e[64].en=1.20;
e[65].atomicw=158.92535;      e[65].atomicr=225;          e[65].en=0;
e[66].atomicw=162.500;        e[66].atomicr=228;          e[66].en=1.22;
e[67].atomicw=164.93032;      e[67].atomicr=0;            e[67].en=1.23;
e[68].atomicw=167.259;        e[68].atomicr=226;          e[68].en=1.24;
e[69].atomicw=168.93421;      e[69].atomicr=222;          e[69].en=1.25;
e[70].atomicw=173.054;        e[70].atomicr=222;          e[70].en=0;
e[71].atomicw=174.9668;       e[71].atomicr=217;          e[71].en=1.27;
e[72].atomicw=178.49;         e[72].atomicr=208;          e[72].en=1.3;
e[73].atomicw=180.94788;      e[73].atomicr=200;          e[73].en=1.5;
e[74].atomicw=183.84;         e[74].atomicr=193;          e[74].en=2.36;
e[75].atomicw=186.207;        e[75].atomicr=188;          e[75].en=1.9;
e[76].atomicw=190.23;         e[76].atomicr=185;          e[76].en=2.2;
e[77].atomicw=192.217;        e[77].atomicr=180;          e[77].en=2.20;
e[78].atomicw=195.084;        e[78].atomicr=177;          e[78].en=2.28;
e[79].atomicw=196.966569;     e[79].atomicr=174;          e[79].en=2.54;
e[80].atomicw=200.592;        e[80].atomicr=171;          e[80].en=2.00;
e[81].atomicw=204.38;         e[81].atomicr=156;          e[81].en=1.62;
e[82].atomicw=207.2;          e[82].atomicr=154;          e[82].en=2.33;
e[83].atomicw=208.98040;      e[83].atomicr=143;          e[83].en=2.02;
e[84].atomicw=209;            e[84].atomicr=135;          e[84].en=2.0;
e[85].atomicw=210;            e[85].atomicr=0 ;           e[85].en=2.2;
e[86].atomicw=222;            e[86].atomicr=120;          e[86].en=0;
e[87].atomicw=223;            e[87].atomicr=0;            e[87].en=0.7;
e[88].atomicw=226;            e[88].atomicr=0;            e[88].en=0.9;
e[89].atomicw=227;            e[89].atomicr=0;            e[89].en=1.1;
e[90].atomicw=232.03806;      e[90].atomicr=0;            e[90].en=1.3;
e[91].atomicw=231.03588;      e[91].atomicr=0;            e[91].en=1.5;
e[92].atomicw=238.02891;      e[92].atomicr=0;            e[92].en=1.38;
e[93].atomicw=237;            e[93].atomicr=0;            e[93].en=1.36	;
e[94].atomicw=244;            e[94].atomicr=0;            e[94].en=1.28;
e[95].atomicw=243;            e[95].atomicr=0;            e[95].en=1.3;
e[96].atomicw=247;            e[96].atomicr=0;            e[96].en=1.3;
e[97].atomicw=247;            e[97].atomicr=0;            e[97].en=1.3;
e[98].atomicw=251;            e[98].atomicr=0;            e[98].en=1.3;
e[99].atomicw=252;            e[99].atomicr=0;            e[99].en=1.3;
e[100].atomicw=257;           e[100].atomicr=0;           e[100].en=1.3;
e[101].atomicw=258;           e[101].atomicr=0;           e[101].en=1.3;
e[102].atomicw=259;           e[102].atomicr=0;           e[102].en=1.3;
e[103].atomicw=262;           e[103].atomicr=0;           e[103].en=1.3;
e[104].atomicw=267;           e[104].atomicr=0;           e[104].en=1.3;
e[105].atomicw=268;           e[105].atomicr=0;           e[105].en=1.3;
e[106].atomicw=269;           e[106].atomicr=0;           e[106].en=0;
e[107].atomicw=270;           e[107].atomicr=0;           e[107].en=0;
e[108].atomicw=269;           e[108].atomicr=0;           e[108].en=0;
e[109].atomicw=278;           e[109].atomicr=0;           e[109].en=0;
e[110].atomicw=281;           e[110].atomicr=0;           e[110].en=0;
e[111].atomicw=281;           e[111].atomicr=0;           e[111].en=0;
e[112].atomicw=285;           e[112].atomicr=0;           e[112].en=0;
e[113].atomicw=286;           e[113].atomicr=0;           e[113].en=0;
e[114].atomicw=289;           e[114].atomicr=0;           e[114].en=0;
}
{
e[1].meltp=14.01;            e[1].boilp=20.28;            e[1].density=0.00008988;
e[2].meltp=0.95;             e[2].boilp=4.22;             e[2].density=0.0001785;
e[3].meltp=453.69;           e[3].boilp=1560;             e[3].density=0.534;
e[4].meltp=1560;             e[4].boilp=2742;             e[4].density=1.85;
e[5].meltp=2349;             e[5].boilp=4200;             e[5].density=2.34;
e[6].meltp=3800;             e[6].boilp=4300;             e[6].density=2.267;
e[7].meltp=63.15;            e[7].boilp=77.36;            e[7].density=0.0012506;
e[8].meltp=54.36;            e[8].boilp=90.20;            e[8].density=0.001429;
e[9].meltp=53.53;            e[9].boilp=85.03;            e[9].density=0.001696;
e[10].meltp=24.56;           e[10].boilp=27.07;           e[10].density=0.0008999;
e[11].meltp=370.87;          e[11].boilp=1156;            e[11].density=0.971;
e[12].meltp=923;             e[12].boilp=1363;            e[12].density=1.738;
e[13].meltp=933.47;          e[13].boilp=2792;            e[13].density=2.698;
e[14].meltp=1687;            e[14].boilp=3538;            e[14].density=2.3296;
e[15].meltp=317.30;          e[15].boilp=550;             e[15].density=1.82;
e[16].meltp=388.36;          e[16].boilp=717.87;          e[16].density=2.067;
e[17].meltp=171.6;           e[17].boilp=239.11;          e[17].density=0.003214;
e[18].meltp=83.80;           e[18].boilp=87.30;           e[18].density=0.0017837;
e[19].meltp=336.53;          e[19].boilp=1032;            e[19].density=0.862;
e[20].meltp=1115;            e[20].boilp=1757;            e[20].density=1.54;
e[21].meltp=1814;            e[21].boilp=3109;            e[21].density=2.989;
e[22].meltp=1941;            e[22].boilp=3560;            e[22].density=4.54;
e[23].meltp=2183;            e[23].boilp=3680;            e[23].density=6.11;
e[24].meltp=2180;            e[24].boilp=2944;            e[24].density=7.15;
e[25].meltp=1519;            e[25].boilp=2334;            e[25].density=7.44;
e[26].meltp=1811;            e[26].boilp=3134;            e[26].density=7.874;
e[27].meltp=1768;            e[27].boilp=3200;            e[27].density=8.86;
e[28].meltp=1728;            e[28].boilp=3186;            e[28].density=8.912;
e[29].meltp=1357.77;         e[29].boilp=2835;            e[29].density=8.96;
e[30].meltp=692.88;          e[30].boilp=1180;            e[30].density=7.134;
e[31].meltp=302.9146;        e[31].boilp=2477;            e[31].density=5.907;
e[32].meltp=1211.40;         e[32].boilp=3106;            e[32].density=5.323;
e[33].meltp=1090;            e[33].boilp=887;             e[33].density=5.776;
e[34].meltp=453;             e[34].boilp=958;             e[34].density=4.809;
e[35].meltp=265.8;           e[35].boilp=332.0;           e[35].density=3.122;
e[36].meltp=115.79;          e[36].boilp=119.93;          e[36].density=0.003733;
e[37].meltp=312.46;          e[37].boilp=961;             e[37].density=1.532;
e[38].meltp=1050;            e[38].boilp=1655;            e[38].density=2.64;
e[39].meltp=1799;            e[39].boilp=3609;            e[39].density=4.469;
e[40].meltp=2128;            e[40].boilp=4682;            e[40].density=6.506;
e[41].meltp=2750;            e[41].boilp=5017;            e[41].density=8.57;
e[42].meltp=2896;            e[42].boilp=4912;            e[42].density=10.22;
e[43].meltp=2430;            e[43].boilp=4538;            e[43].density=11.5;
e[44].meltp=2607;            e[44].boilp=4423;            e[44].density=12.37;
e[45].meltp=2237;            e[45].boilp=3968;            e[45].density=12.41;
e[46].meltp=1828.05;         e[46].boilp=3236;            e[46].density=12.02;
e[47].meltp=1234.93;         e[47].boilp=2435;            e[47].density=10.501;
e[48].meltp=594.22;          e[48].boilp=1040;            e[48].density=8.69;
e[49].meltp=429.75;          e[49].boilp=2345;            e[49].density=7.31;
e[50].meltp=505.08;          e[50].boilp=2875;            e[50].density=7.287;
e[51].meltp=903.78;          e[51].boilp=1860;            e[51].density=6.685;
e[52].meltp=722.66;          e[52].boilp=1261;            e[52].density=6.232;
e[53].meltp=386.85;          e[53].boilp=457.4;           e[53].density=4.93;
e[54].meltp=161.4;           e[54].boilp=165.03;          e[54].density=0.005887;
e[55].meltp=301.59;          e[55].boilp=944;             e[55].density=1.873;
e[56].meltp=1000;            e[56].boilp=2170;            e[56].density=3.594;
e[57].meltp=1193;            e[57].boilp=3737;            e[57].density=6.145;
e[58].meltp=1068;            e[58].boilp=3716;            e[58].density=6.77;
e[59].meltp=1208;            e[59].boilp=3793;            e[59].density=6.773;
e[60].meltp=1297;            e[60].boilp=3347;            e[60].density=7.007;
e[61].meltp=1315;            e[61].boilp=3273;            e[61].density=7.26;
e[62].meltp=1345;            e[62].boilp=2067;            e[62].density=7.52;
e[63].meltp=1099;            e[63].boilp=1802;            e[63].density=5.243;
e[64].meltp=1585;            e[64].boilp=3546;            e[64].density=7.895;
e[65].meltp=1629;            e[65].boilp=3503;            e[65].density=8.229;
e[66].meltp=1680;            e[66].boilp=2840;            e[66].density=8.55;
e[67].meltp=1734;            e[67].boilp=2993;            e[67].density=8.795;
e[68].meltp=1802;            e[68].boilp=3141;            e[68].density=9.066;
e[69].meltp=1818;            e[69].boilp=2223;            e[69].density=9.321;
e[70].meltp=1097;            e[70].boilp=1469;            e[70].density=6.965;
e[71].meltp=1925;            e[71].boilp=3675;            e[71].density=9.84;
e[72].meltp=2506;            e[72].boilp=4876;            e[72].density=13.31;
e[73].meltp=3290;            e[73].boilp=5731;            e[73].density=16.654;
e[74].meltp=3695;            e[74].boilp=5828;            e[74].density=19.25;
e[75].meltp=3459;            e[75].boilp=5869;            e[75].density=21.02;
e[76].meltp=3306;            e[76].boilp=5285;            e[76].density=22.61;
e[77].meltp=2719;            e[77].boilp=4701;            e[77].density=22.56;
e[78].meltp=2041.4;          e[78].boilp=4098;            e[78].density=21.46;
e[79].meltp=1337.33;         e[79].boilp=3129;            e[79].density=19.282;
e[80].meltp=234.43;          e[80].boilp=629.88;          e[80].density=13.5336;
e[81].meltp=577;             e[81].boilp=1746;            e[81].density=11.85;
e[82].meltp=600.61;          e[82].boilp=2022;            e[82].density=11.342;
e[83].meltp=544.7;           e[83].boilp=1837;            e[83].density=9.807;
e[84].meltp=527;             e[84].boilp=1235;            e[84].density=9.32;
e[85].meltp=575;             e[85].boilp=610;             e[85].density=7;
e[86].meltp=202;             e[86].boilp=211.3;           e[86].density=0.00973;
e[87].meltp=300;             e[87].boilp=950;             e[87].density=1.87;
e[88].meltp=973;             e[88].boilp=2010;            e[88].density=5.5;
e[89].meltp=1323;            e[89].boilp=3471;            e[89].density=10.07;
e[90].meltp=2115;            e[90].boilp=5061;            e[90].density=11.72;
e[91].meltp=1841;            e[91].boilp=4300;            e[91].density=15.37;
e[92].meltp=1405.3;          e[92].boilp=4404;            e[92].density=18.95;
e[93].meltp=917;             e[93].boilp=4273;            e[93].density=20.45;
e[94].meltp=912.5;           e[94].boilp=3501;            e[94].density=19.84;
e[95].meltp=1449;            e[95].boilp=2880;            e[95].density=13.69;
e[96].meltp=1613;            e[96].boilp=3383;            e[96].density=13.51;
e[97].meltp=1259;            e[97].boilp=2900;            e[97].density=14.79;
e[98].meltp=1173;            e[98].boilp=1743;            e[98].density=15.1;
e[99].meltp=1133;            e[99].boilp=1269;            e[99].density=8.84;
e[100].meltp=1125;           e[100].boilp=0;              e[100].density=0;
e[101].meltp=1100;           e[101].boilp=0;              e[101].density=0;
e[102].meltp=1100;           e[102].boilp=0;              e[102].density=0;
e[103].meltp=1900;           e[103].boilp=0;              e[103].density=0;
e[104].meltp=2400;           e[104].boilp=5800;           e[104].density=23.2;
e[105].meltp=0;              e[105].boilp=0;              e[105].density=29.3;
e[106].meltp=0;              e[106].boilp=0;              e[106].density=35.0;
e[107].meltp=0;              e[107].boilp=0;              e[107].density=37.1;
e[108].meltp=0;              e[108].boilp=0;              e[108].density=40.7;
e[109].meltp=0;              e[109].boilp=0;              e[109].density=37.4;
e[110].meltp=0;              e[110].boilp=0;              e[110].density=34.8;
e[111].meltp=0;              e[111].boilp=0;              e[111].density=28.7;
e[112].meltp=0;              e[112].boilp=357 ;           e[112].density=23.7;
e[113].meltp=700;            e[113].boilp=1400;           e[113].density=16;
e[114].meltp=340;            e[114].boilp=420;            e[114].density=14;
}
{
for(i=1;i<=114;++i)
{
if(i==1 || i==3 || i==11 || i==19 || i==37 || i==55 || i==87)
{
e[i].group=1;
e[i].block='s';
}
else if(i==4 || i==12 || i==20 || i==38 || i==56 || i==88)
{
e[i].group=2;
e[i].block='s';
}
else if(i==21 || i==39 || i==57 || i==89)
{
e[i].group=3;
e[i].block='d';
}
else if(i==22 || i==40 || i==72 || i==104)
{
e[i].group=4;
e[i].block='d';
}
else if(i==23 || i==41 || i==73 || i==105)
{
e[i].group=5;
e[i].block='d';
}
else if(i==24 || i==42 || i==74 || i==106)
{
e[i].group=6;
e[i].block='d';
}
else if(i==25 || i==43 || i==75 || i==107)
{
e[i].group=7;
e[i].block='d';
}
else if(i==26 || i==44 || i==76 || i==108)
{
e[i].group=8;
e[i].block='d';
}
else if(i==27 || i==45 || i==77 || i==109)
{
e[i].group=9;
e[i].block='d';
}
else if(i==28 || i==46 || i==78 || i==110)
{
e[i].group=10;
e[i].block='d';
}
else if(i==29 || i==47 || i==79 || i==111)
{
e[i].group=11;
e[i].block='d';
}
else if(i==30 || i==48 || i==80 || i==112)
{
e[i].group=12;
e[i].block='d';
}
else if(i==5 || i==13 || i==31 || i==49 || i==81 || i==113)
{e[i].group=13;e[i].block='p';}
else if(i==6 || i==14 || i==32 || i==50 || i==82 || i==114)
{e[i].group=14;e[i].block='p';}
else if(i==7 || i==15 || i==33 || i==51 || i==83 || i==115)
{e[i].group=15;
e[i].block='p';}
 else if(i==8 || i==16 || i==34 || i==52 || i==84 || i==116)
 {
e[i].group=16;
e[i].block='p';
}
else if(i==9 || i==17 || i==35 || i==53 || i==85 || i==117)
{
e[i].group=17;
e[i].block='p';
}
else if(i==2 || i==10 || i==18 || i==36 || i==54 || i==86 || i==118)
{
e[i].group=18;
e[i].block='p';
}

}
                   for(i=57;i<=71;++i)
                   {
                                      e[i].block='f';
                   }
                   for(i=89;i<=103;++i)
                   {
                                       e[i].block='f';
                   }
}
     {
                   for(i=1;i<=2;++i)
                   {
                                    e[i].period=1;
                   }
                   for(i=3;i<=10;++i)
                   {
                                    e[i].period=2;
                   }
                   for(i=11;i<=18;++i)
                   {
                                    e[i].period=3;
                   }
                   for(i=19;i<=36;++i)
                   {
                                    e[i].period=4;
                   }
                   for(i=37;i<=54;++i)
                   {
                                    e[i].period=5;
                   }
                   for(i=55;i<=86;++i)
                   {
                                    e[i].period=6;
                   }
                   for(i=87;i<=114;++i)
                   {
                                    e[i].period=7;
                   }
    }

      do
    {
   first:
    cout<<"\n\n\n\n\n\n\n\t\t\t\t**--**What would you like to do?**--**"<<"\n\n\n";

    cout<<"\t1. Search for an element\t";

    cout<<"2. View the Modern Periodic Table"<<"\t";
    cout<<"3. Whole information as a Text file."<<endl;

    cout<<"\n\n\t\tEnter your option: ";
    cin>>t;
    system("cls");
    system("COLOR 03");
    if(t==1)
    {
    start:
    cout<<"\n\n\n\n\n\n\n\t\tHow would you like to search for your element? "<<"\n\n\n";

    cout<<"\t1. Entering the atomic number\t";

    cout<<"2. Entering the element name"<<"\n\n\n";

    cout<<"\t\t\tEnter your option: ";
    cin>>n;
    system("cls");
    system("COLOR 02");
    switch(n)
    {
    case 1: cout<<"\n\n\n\n\n\t\tEnter the atomic number of the element: ";
    one:
    cin>>a;
    for(i=1;i<=114;++i)
    {
    if(a==i)
    {
    cout<<"\n\a";
    cout<<"\t\t Name                         ";puts(e[i].name);cout<<"\n";
    cout<<"\t\t Atomic Number                "<<e[i].atomicno<<"\n";
    cout<<"\t\t Electronic Configuration     ";puts(e[i].ec);
    cout<<"\t\t Group                        "<<e[i].group<<"\n";
    cout<<"\t\t Period                       "<<e[i].period<<"\n";
    cout<<"\t\t Block                        "<<e[i].block<<"\n";
    cout<<"\t\t Atomic Weight                "<<e[i].atomicw<<"\n";
    if(e[i].atomicr==0)
    {cout<<"\t\tAtomic Radius                "<<"Not Available"<<"\n";}
    else
    {cout<<"\t\tAtomic Radius                "<<e[i].atomicr<<" pm"<<"\n";}
    if(e[i].en==0)
    {cout<<"\t\tElectronegativity            "<<"Not Available"<<"\n";}
    else
    {cout<<"\t\tElectronegativity            "<<e[i].en<<" (Pauling Scale)"<<"\n";}
    if(e[i].meltp==0)
    {cout<<"\t\tMelting Point                "<<"Not Available"<<"\n";}
    else
    {cout<<"\t\tMelting Point                "<<e[i].meltp<<" K"<<"\n";}
    if(e[i].boilp==0)
    {cout<<"\t\tBoiling Point                "<<"Not Available"<<"\n";}
    else
    {cout<<"\t\tBoiling Point                "<<e[i].boilp<<" K"<<"\n";}
    if(e[i].density==0)
    {cout<<"\t\tDensity                      "<<"Not Available"<<"\n";}
    else
    {cout<<"\t\tDensity                      "<<e[i].density<<" g/cm3"<<"\n";}
ofstream atomicno;
atomicno.open ("atomicno.txt");
atomicno<<"\n\a";
atomicno<<"\t\t Name                         "<<e[i].name<<"\n";
atomicno<<"\t\t Atomic Number                "<<e[i].atomicno<<"\n";
atomicno<<"\t\t Electronic Configuration     "<<e[i].ec<<"\n";
atomicno<<"\t\t Group                        "<<e[i].group<<"\n";
atomicno<<"\t\t Period                       "<<e[i].period<<"\n";
atomicno<<"\t\t Block                        "<<e[i].block<<"\n";
atomicno<<"\t\t Atomic Weight                "<<e[i].atomicw<<"\n";
if(e[i].atomicr==0)
{atomicno<<"\t\tAtomic Radius                "<<"Not Available"<<"\n";}
else
{atomicno<<"\t\tAtomic Radius                "<<e[i].atomicr<<" pm"<<"\n";}
if(e[i].en==0)
{atomicno<<"\t\tElectronegativity            "<<"Not Available"<<"\n";}
else
{atomicno<<"\t\tElectronegativity            "<<e[i].en<<" (Pauling Scale)"<<"\n";}
if(e[i].meltp==0)
{atomicno<<"\t\tMelting Point                "<<"Not Available"<<"\n";}
else
{atomicno<<"\t\tMelting Point                "<<e[i].meltp<<" K"<<"\n";}
if(e[i].boilp==0)
{atomicno<<"\t\tBoiling Point                "<<"Not Available"<<"\n";}
else
{atomicno<<"\t\tBoiling Point                "<<e[i].boilp<<" K"<<"\n";}
if(e[i].density==0)
{atomicno<<"\t\tDensity                      "<<"Not Available"<<"\n";}
else
{atomicno<<"\t\tDensity                      "<<e[i].density<<" g/cm3"<<"\n";}
atomicno.close();
cout<<"\n\n\t\t**-**Check Atomicno.txt file**-**";
goto end;
}
}
cout<<"\n\t\t\t   Please try again";
system("cls");
cout<<"\n\n\n\n\n\t\tEnter the atomic number of the element: ";
goto one;
break;
case 2: cout<<"\t\t\t\t\t\t####List####"<<"\n";cout<<"\t\t\t\t\t\t------------"<<"\n";

        for(i=1;i<=114;++i)
        {
           cout<<setw(3)<<i<<"="<<setw(18)<<e[i].name<<"\t";
           if (i%5==0)
           {
               cout<<"\n";
           }

        }
        cout<<"\n\n\t\t   Enter the element name given by the following format: "<<"\n";
        cout<<"\n\t\t\t\t--##\element Name\- \element Symbol\##--"<<"\n";
        cout<<"\t\t";
        cin.getline(name,50);
        two:
        cin.getline(name,50);
        for(i=1;i<=114;++i)
        {
        if(strcmp(name,e[i].name)==0)
        {
        cout<<"\n\a";
        cout<<"\t\t Name                        ";puts(e[i].name);cout<<"\n";
        cout<<"\t\t Atomic Number               "<<e[i].atomicno<<"\n";
        cout<<"\t\t Electronic Configuration    ";puts(e[i].ec);
        cout<<"\t\t Group                       "<<e[i].group<<"\n";
        cout<<"\t\t Period                      "<<e[i].period<<"\n";
        cout<<"\t\t Block                       "<<e[i].block<<"\n";
        cout<<"\t\t Atomic Weight               "<<e[i].atomicw<<"\n";
        if(e[i].atomicr==0)
        {cout<<"\t\tAtomic Radius               "<<"Not Available"<<"\n";}
        else
        {cout<<"\t\tAtomic Radius               "<<e[i].atomicr<<" pm"<<"\n";}
        if(e[i].en==0)
        {cout<<"\t\tElectronegativity           "<<"Not Available"<<"\n";}
        else
        {cout<<"\t\tElectronegativity           "<<e[i].en<<" (Pauling Scale)"<<"\n";}
        if(e[i].meltp==0)
        {cout<<"\t\tMelting Point               "<<"Not Available"<<"\n";}
        else
        {cout<<"\t\tMelting Point               "<<e[i].meltp<<" K"<<"\n";}
        if(e[i].boilp==0)
        {cout<<"\t\tBoiling Point               "<<"Not Available"<<"\n";}
        else
        {cout<<"\t\tBoiling Point               "<<e[i].boilp<<" K"<<"\n";}
        if(e[i].density==0)
        {cout<<"\t\tDensity                     "<<"Not Available"<<"\n";}
        else
        {cout<<"\t\tDensity                     "<<e[i].density<<" g/cm3"<<"\n";}
        ofstream atomicName;
atomicName.open ("atomicName.txt");
atomicName<<"\n\a";
atomicName<<"\t\t Name                         "<<e[i].name<<"\n";
atomicName<<"\t\t Atomic Number                "<<e[i].atomicno<<"\n";
atomicName<<"\t\t Electronic Configuration     "<<e[i].ec<<"\n";
atomicName<<"\t\t Group                        "<<e[i].group<<"\n";
atomicName<<"\t\t Period                       "<<e[i].period<<"\n";
atomicName<<"\t\t Block                        "<<e[i].block<<"\n";
atomicName<<"\t\t Atomic Weight                "<<e[i].atomicw<<"\n";
if(e[i].atomicr==0)
{atomicName<<"\t\tAtomic Radius                "<<"Not Available"<<"\n";}
else
{atomicName<<"\t\tAtomic Radius                "<<e[i].atomicr<<" pm"<<"\n";}
if(e[i].en==0)
{atomicName<<"\t\tElectronegativity            "<<"Not Available"<<"\n";}
else
{atomicName<<"\t\tElectronegativity            "<<e[i].en<<" (Pauling Scale)"<<"\n";}
if(e[i].meltp==0)
{atomicName<<"\t\tMelting Point                "<<"Not Available"<<"\n";}
else
{atomicName<<"\t\tMelting Point                "<<e[i].meltp<<" K"<<"\n";}
if(e[i].boilp==0)
{atomicName<<"\t\tBoiling Point                "<<"Not Available"<<"\n";}
else
{atomicName<<"\t\tBoiling Point                "<<e[i].boilp<<" K"<<"\n";}
if(e[i].density==0)
{atomicName<<"\t\tDensity                      "<<"Not Available"<<"\n";}
else
{atomicName<<"\t\tDensity                      "<<e[i].density<<" g/cm3"<<"\n";}
atomicName.close();
cout<<"\n\n\t\t**-**Check atomicName.txt file**-**";

        goto end;
                         }
                      }
                      cout<<"\t\t\t   Please try again";
                      system("cls");
                      system("COLOR 01");
                      cout<<"\t   Enter the element name given by the following format: "<<"\n\n";
                      cout<<"\t\t   \"element Name\"- \"element Symbol\""<<"\n\n";
                      cout<<"\t\t   ";
                      goto two;
                      break;
             default: cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tWrong Option!";
                      system("cls");
                      system("COLOR 06");
                      goto start;
                      break;
    }
    }


    else if(t==2)
    {
         string line;
         ifstream myfile ("DoNotDelete.txt");
         if (myfile.is_open())
         {
        while ( getline (myfile,line) )
        {
         cout << line << '\n';
       }
       myfile.close();
      }
      else cout << "Unable to open file";
         goto end;
    }
    else if (t==3)
    {
   ofstream allinformation;
  allinformation.open ("Allinformation.txt");
  allinformation<<"\t Name"<<"\t"<<"   Atomic Number"<<"  Electronic Configuration"<<"\tGroup"<<"\tPeriod"<<"\tBlock"<<"\tAtomic Weight"<<"\n";
  for(i=1;i<=114;++i)
  {
      allinformation<<setw(17)<<e[i].name<<setw(8)<<e[i].atomicno<<setw(25)<<e[i].ec<<setw(10)<<e[i].group<<setw(10)<<e[i].period<<setw(10)<<e[i].block<<setw(12)<<e[i].atomicw<<"\n";
  }
  allinformation.close();
  cout<<"\t\t\t\n\n**-**Check ALLinformation.txt file**-**";
     goto end;
    }
    else
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tWrong Option!";

        system("cls");
        goto first;
    }

    end:
    cout<<"\n\n";
    system("PAUSE");
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\tWould you like to continue?(Y/N) ";
    cin>>c;
    if(c=='n' || c=='N')
    {
              exit(0);
    }
    system("cls");
    }while(c=='y' || c=='Y');

    getch();
    return 0;
}


