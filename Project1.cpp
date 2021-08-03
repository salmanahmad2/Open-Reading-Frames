#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
string k;
int j;
int length;
char array[100],rearray[100];
cout<<"please enter your length:";
cin>>length;
int l=length;
j=length-1;
for(int i=0;i<length;i++)
{
cout<<"please enter "<<i+1<<" sequence of DNA:";
cin>>array[i];
rearray[j]=array[i];
if(array[i]!='A' && array[i]!='C' && array[i]!='T' && array[i]!='G')
{
i=i-1;
j=j+1;
cout<<"Please enter valid input\n";
}
j-=1;}
j=0;
int i;
int length2=length-1;
int length3=length-2;
if(length%3!=0)
{
if((length-1)%3==0)
length-=1;
else if((length-2)%3==0)
length-=2;
}
for(int i=0;i<length;i++)
{
if(i==0)
cout<<"Frame 1"<<endl;
cout<<array[i];
k=k+array[i];
j+=1;
if(j==3)
{
if(k=="TTT")
cout<<"\t Representation is F";
			else if(k=="TTC")
			{
				cout<<" "<<"Representation is F";
			}
			else if(k=="TTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TCT")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCG")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TAT")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAC")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAA")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TAG")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TGT")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGC")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGA")
			{
				cout<<" "<<"Representation is X";
			}
			else if (k=="TGG")
			{
				cout<<" "<<"Abbreviation is W";
			}
			else if(k=="CTT")
			{
				cout<<" "<<"Representation is W";
			}
			else if(k=="CTC")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CCT")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCC")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCA")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCG")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAT")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAC")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGT")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGC")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGA")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATC")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATA")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATG")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ACT")
			{
				cout<<" "<<"Representation is M";
			}
		
			else if(k=="ACC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACA")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACG")
			cout<<" "<<"Representation is T";
			else if(k=="AAT")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAA")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAG")
			{
				cout<<" "<<"Representation is K";
			}else if(k=="AGT")
			{
				cout<<" "<<"Representation is K";
			}
			else if(k=="AGC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTC")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTA")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTG")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GCT")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCC")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCA")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCG")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GAT")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAC")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAA")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GAG")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GGT")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGC")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGA")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGG")
			{
				cout<<" "<<"Representation is G";
			}
        
cout<<endl;
k="";
j=0;
}
}
k="";
if((length2)%3!=0)
{
if((length2-1)%3==0)
length2-=1;
else if((length2-2)%3==0)
length2-=2;
}
for(int i=1;i<=length2;i++)
{
if(i==1)
cout<<"Frame 2"<<endl;
cout<<array[i];
k=k+array[i];
j+=1;
if(j==3)
{
	if(k=="TTT")
			{
				cout<<" "<<"Representation is F";
			}
			else if(k=="TTC")
			{
				cout<<" "<<"Representation is F";
			}
			else if(k=="TTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TCT")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCG")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TAT")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAC")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAA")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TAG")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TGT")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGC")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGA")
			{
				cout<<" "<<"Representation is X";
			}
			else if (k=="TGG")
			{
				cout<<" "<<"Abbreviation is W";
			}
			else if(k=="CTT")
			{
				cout<<" "<<"Representation is W";
			}
			else if(k=="CTC")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CCT")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCC")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCA")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCG")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAT")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAC")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGT")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGC")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGA")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATC")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATA")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATG")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ACT")
			{
				cout<<" "<<"Representation is M";
			}
			else if(k=="ACC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACA")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACG")
			cout<<" "<<"Representation is T";
			else if(k=="AAT")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAA")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAG")
			{
				cout<<" "<<"Representation is K";
			}else if(k=="AGT")
			{
				cout<<" "<<"Representation is K";
			}
			else if(k=="AGC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTC")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTA")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTG")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GCT")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCC")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCA")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCG")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GAT")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAC")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAA")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GAG")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GGT")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGC")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGA")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGG")
			{
				cout<<" "<<"Representation is G";
			}
    
cout<<endl;
k="";
j=0;
}
}
if((length3)%3!=0)
{
if((length3-1)%3==0)
length3-=1;
else if((length3-2)%3==0)
length3-=2;
}
for(int i=2;i<=length3+1;i++)
{
if(i==2)
cout<<"Frame 3"<<endl;
cout<<array[i];
k=k+array[i];
j+=1;
if(j==3)
{
if(k=="TTT")
			{
				cout<<" "<<"Representation is F";
			}
			else if(k=="TTC")
			{
				cout<<" "<<"Representation is F";
			}
			else if(k=="TTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TCT")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCG")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TAT")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAC")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAA")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TAG")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TGT")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGC")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGA")
			{
				cout<<" "<<"Representation is X";
			}
			else if (k=="TGG")
			{
				cout<<" "<<"Abbreviation is W";
			}
			else if(k=="CTT")
			{
				cout<<" "<<"Representation is W";
			}
			else if(k=="CTC")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CCT")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCC")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCA")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCG")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAT")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAC")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGT")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGC")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGA")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATC")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATA")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATG")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ACT")
			{
				cout<<" "<<"Representation is M";
			}
			else if(k=="ACC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACA")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACG")
			cout<<" "<<"Representation is T";
			else if(k=="AAT")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAA")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAG")
			{
				cout<<" "<<"Representation is K";
			}else if(k=="AGT")
			{
				cout<<" "<<"Representation is K";
			}
			else if(k=="AGC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTC")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTA")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTG")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GCT")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCC")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCA")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCG")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GAT")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAC")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAA")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GAG")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GGT")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGC")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGA")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGG")
			{
				cout<<" "<<"Representation is G";
			}
        
k="";
cout<<endl;
j=0;
}
}
j=0;
length=l;
length2=length-1;
length3=length-2;
if(length%3!=0)
{
if((length-1)%3==0)
length-=1;
else if((length-2)%3==0)
length-=2;
}
for(int i=0;i<length;i++)
{
if(i==0)
cout<<"Frame -1"<<endl;
cout<<rearray[i];
k=k+rearray[i];
j+=1;
if(j==3)
{
if(k=="TTT")
cout<<"\t Representation is F";
			else if(k=="TTC")
			{
				cout<<" "<<"Representation is F";
			}
			else if(k=="TTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TCT")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCG")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TAT")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAC")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAA")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TAG")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TGT")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGC")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGA")
			{
				cout<<" "<<"Representation is X";
			}
			else if (k=="TGG")
			{
				cout<<" "<<"Abbreviation is W";
			}
			else if(k=="CTT")
			{
				cout<<" "<<"Representation is W";
			}
			else if(k=="CTC")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CCT")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCC")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCA")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCG")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAT")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAC")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGT")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGC")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGA")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATC")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATA")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATG")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ACT")
			{
				cout<<" "<<"Representation is M";
			}
			else if(k=="ACC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACA")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACG")
			cout<<" "<<"Representation is T";
			else if(k=="AAT")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAA")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAG")
			{
				cout<<" "<<"Representation is K";
			}else if(k=="AGT")
			{
				cout<<" "<<"Representation is K";
			}
			else if(k=="AGC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTC")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTA")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTG")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GCT")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCC")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCA")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCG")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GAT")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAC")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAA")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GAG")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GGT")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGC")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGA")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGG")
			{
				cout<<" "<<"Representation is G";
			}
        
cout<<endl;
k="";
j=0;
}
}
k="";
j=0;
if((length2)%3!=0)
{
if((length2-1)%3==0)
length2-=1;
else if((length2-2)%3==0)
length2-=2;
}
for(int i=1;i<=length2;i++)
{
if(i==1)
cout<<"Frame -2"<<endl;
cout<<rearray[i];
k=k+rearray[i];
j+=1;
if(j==3)
{
	if(k=="TTT")
			{
				cout<<" "<<"Representation is F";
			}
			else if(k=="TTC")
			{
				cout<<" "<<"Representation is F";
			}
			else if(k=="TTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TCT")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCG")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TAT")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAC")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAA")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TAG")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TGT")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGC")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGA")
			{
				cout<<" "<<"Representation is X";
			}
			else if (k=="TGG")
			{
				cout<<" "<<"Abbreviation is W";
			}
			else if(k=="CTT")
			{
				cout<<" "<<"Representation is W";
			}
			else if(k=="CTC")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CCT")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCC")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCA")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCG")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAT")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAC")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGT")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGC")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGA")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATC")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATA")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATG")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ACT")
			{
				cout<<" "<<"Representation is M";
			}
			else if(k=="ACC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACA")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACG")
			cout<<" "<<"Representation is T";
			else if(k=="AAT")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAA")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAG")
			{
				cout<<" "<<"Representation is K";
			}else if(k=="AGT")
			{
				cout<<" "<<"Representation is K";
			}
			else if(k=="AGC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTC")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTA")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTG")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GCT")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCC")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCA")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCG")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GAT")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAC")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAA")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GAG")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GGT")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGC")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGA")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGG")
			{
				cout<<" "<<"Representation is G";
			}
    
cout<<endl;
k="";
j=0;
}
}
if((length3)%3!=0)
{
if((length3-1)%3==0)
length3-=1;
else if((length3-2)%3==0)
length3-=2;
}
for(int i=2;i<=length3+1;i++)
{
if(i==2)
cout<<"Frame -3"<<endl;
cout<<rearray[i];
k=k+rearray[i];
j+=1;
if(j==3)
{
if(k=="TTT")
			{
				cout<<" "<<"Representation is F";
			}
			else if(k=="TTC")
			{
				cout<<" "<<"Representation is F";
			}
			else if(k=="TTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="TCT")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TCG")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="TAT")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAC")
			{
				cout<<" "<<"Representation is Y";
			}
			else if(k=="TAA")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TAG")
			{
				cout<<" "<<"Representation is X";
			}
			else if(k=="TGT")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGC")
			{
				cout<<" "<<"Representation is C";
			}
			else if(k=="TGA")
			{
				cout<<" "<<"Representation is X";
			}
			else if (k=="TGG")
			{
				cout<<" "<<"Abbreviation is W";
			}
			else if(k=="CTT")
			{
				cout<<" "<<"Representation is W";
			}
			else if(k=="CTC")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTA")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CTG")
			{
				cout<<" "<<"Representation is L";
			}
			else if(k=="CCT")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCC")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCA")
			{
				cout<<" "<<"Representation is P";
			}else if(k=="CCG")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAT")
			{
				cout<<" "<<"Representation is P";
			}
			else if(k=="CAC")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is H";
			}
			else if(k=="CAA")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGT")
			{
				cout<<" "<<"Representation is Q";
			}
			else if(k=="CGC")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGA")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="CGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="ATC")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATA")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ATG")
			{
				cout<<" "<<"Representation is I";
			}
			else if(k=="ACT")
			{
				cout<<" "<<"Representation is M";
			}
			else if(k=="ACC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACA")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="ACG")
			cout<<" "<<"Representation is T";
			else if(k=="AAT")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is T";
			}
			else if(k=="AAC")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAA")
			{
				cout<<" "<<"Representation is N";
			}
			else if(k=="AAG")
			{
				cout<<" "<<"Representation is K";
			}else if(k=="AGT")
			{
				cout<<" "<<"Representation is K";
			}
			else if(k=="AGC")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGA")
			{
				cout<<" "<<"Representation is S";
			}
			else if(k=="AGG")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTT")
			{
				cout<<" "<<"Representation is R";
			}
			else if(k=="GTC")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTA")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GTG")
			{
				cout<<" "<<"Representation is V";
			}
			else if(k=="GCT")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCC")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCA")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GCG")
			{
				cout<<" "<<"Representation is A";
			}
			else if(k=="GAT")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAC")
			{
				cout<<" "<<"Representation is D";
			}
			else if(k=="GAA")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GAG")
			{
				cout<<" "<<"Representation is E";
			}
			else if(k=="GGT")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGC")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGA")
			{
				cout<<" "<<"Representation is G";
			}
			else if(k=="GGG")
			{
				cout<<" "<<"Representation is G";
			}
        
k="";
cout<<endl;
j=0;
}
}}

