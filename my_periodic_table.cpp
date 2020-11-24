#include<iostream>
using namespace std;

int main () {
    int a;
    int x;
cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"*************************************************Modern Periodic Table**********************************************************"<<endl;
cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Enter Your choice"<<endl;
cout<<"1: Modern Perodic Table"<<endl;
cout<<"2: Modern Periodic Law"<<endl;
cout<<"3: Information about Periodic Table"<<endl;
cout<<"4: Exit"<<endl;

// cout<<"3: Information about Periodic Law"<<endl;
cin>>a;
if(a == 1)
{
    cout<<"______________________________________________________________________________________________________________________________"<<endl;
    cout<<"|  H  |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |  He  |"<<endl;
    cout<<"|_____|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|"<<endl;
    cout<<"|  Li |  Be  |      |      |      |      |      |      |      |      |      |      |  B   |  C   |  N   |  O   |  F   |  Ne  |"<<endl;
    cout<<"|_____|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|"<<endl;
    cout<<"|  Na |  Mg  |      |      |      |      |      |      |      |      |      |      |  Al  |  Si  |  P   |  S   |  Cl  |  Ar  |"<<endl;
    cout<<"|_____|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|"<<endl;
    cout<<"|  K  |  Ca  |  SC  |  Ti  |  V   |  Cr  |  Mn  |  Fe  |  Co  |  Ni  |  Cu  |  Zn  |  Ga  |  Ge  |  As  |  Se  |  Br  |  Kr  |"<<endl;
    cout<<"|_____|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|"<<endl;
    cout<<"|  Rb |  Sr  |  Y   |  Zr  |  Nb  |  Mo  |  Tc  |  Ru  |  Rh  |  Pd  |  Ag  |  Cd  |  In  |  Sn  |  Sb  |  Te  |  I   |  Xe  |"<<endl;
    cout<<"|_____|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|"<<endl;
    cout<<"|  Cs |  Ba  |  La  |  Hf  |  Ta  |  W   |  Re  |  Os  |  Ir  |  Pt  |  Au  |  Hg  |  Tl  |  Pb  |  Bi  |  Po  |  At  |  Rd  |"<<endl;
    cout<<"|_____|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|"<<endl;
    cout<<"|  Fr |  Ra  |  Ac  |  Rf  |  Db  |  Sg  |  Bh  |  Hs  |  Mt  |  Ds  |  Rh  |  Cn  |  Nh  |  Fl  |  Mc  |  Lv  |  Ts  |  Og  |"<<endl;
    cout<<"|_____|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|"<<endl;
    cout<<""<<endl;
    cout<<"            _______________________________________________________________________________________________________"<<endl;
    cout<<"           | La  |  Ce  |  Pr  |  Nd  |  Pm  |  Sm  |  Eu  |  Gd  |  Tb  |  Dy  |  Ho  |  Er  |  Tm  |  Yb  |  Lu  |"<<endl;
    cout<<"           |_____|______|______|______|______|______|______|______|______|______|______|______|______|______|______|"<<endl;
    cout<<"           | Ac  |  Th  |  Pa  |  U   |  Np  |  Pu  |  Am  |  Cm  |  Bk  |  Cf  |  Es  |  Fm  |  Md  |  No  |  Lr  |"<<endl;
    cout<<"           |_____|______|______|______|______|______|______|______|______|______|______|______|______|______|______|"<<endl;
    cout<<""<<endl;                                                                            
}

 else if(a == 2)
{
    cout<<"Properties of Element are Periodic Function of Their atomic number"<<endl;
}

else if (a == 3)
{
    cout<<"The periodic table, also known as the periodic table of elements, arranges the chemical elements such as hydrogen, silicon, iron, and uranium according to their recurring properties."<<endl<<" The number of each element corresponds to the number of protons in its nucleus (which is the same as the number of electrons orbiting that nucleus)."<<endl<<" The modern periodic table provides a useful framework for analyzing chemical reactions, and is widely used in chemistry, physics and other sciences. "<<endl;
    cout<<"The seven rows of the table, called periods, generally have metals on the left and nonmetals on the right."<<endl<<"The columns, called groups, contain elements with similar chemical behaviours."<<endl<<"Six groups have accepted names as well as assigned numbers: for example, group 17 elements are the halogens; and group 18 are the noble gases."<<endl<<"Also displayed are four simple rectangular areas or blocks associated with the filling of different atomic orbitals."<<endl<<"The organization of the periodic table can be used to derive relationships between the various element properties, and also to predict chemical properties and behaviours of undiscovered or newly synthesized elements. "<<endl;
    cout<<"Russian chemist Dmitri Mendeleev published the first recognizable periodic table in 1869, developed mainly to illustrate periodic trends of the then-known elements."<<endl<<"He also predicted some properties of unidentified elements that were expected to fill gaps within the table."<<endl<<"Most of his forecasts soon proved to be correct, culminating with the discovery of gallium and germanium in 1875 and 1886 respectively, which corroborated his predictions."<<endl<<"[1] Mendeleev's idea has been slowly expanded and refined with the discovery or synthesis of further new elements and the development of new theoretical models to explain chemical behaviour. "<<endl;
    cout<<"The table here shows a widely used layout. Other forms (discussed below) show different structures in detail."<<endl<<"Some discussion remains ongoing regarding the placement and categorisation of specific elements, the future extension and limits of the table, and whether there is an optimal form of the table. "<<endl;
}

else
{
    exit; 
}

 return 0;
}