#include <iostream>

#include <string>

using namespace std;
/*
* Ԫ�ص����ڱ���ö�����鵱����������ʹ��
* 
* ������û��ָ��Ԫ�أ���Ĭ��Ϊ0����NULLELEM
* 
* �������ݰ���Ԫ�����ڱ�����
*/
enum elem		//Ԫ�����ڱ� data�ļ�
{
	NULLELEM,

	H=1,He,

	Li,Be,B,C,N,O,F,Ne,

	Na,Mg,Al,Si,P,S,Cl,Ar,

	K,Ca,Sc,Ti,V,Cr,Mn,Fe,Co,Ni,Cu,Zn,Ga,Ge,As,Se,Br,Kr,

	Rb,Sr,Y,Zr,Nb,Mo,Tc,Ru,Rh,Pd,Ag,Cd,In,Sn,Sb,Te,I,Xe,

	Cs,Ba,
	//Lanthanides
	La,Ce,Pe,Nd,Pm,Sm,Eu,Gd,Tb,Dy,Ho,Er,Tm,Yb,

	Lu,Hf,Ta,W,Re,Os,Ir,Pt,Au,Hg,Tl,Pb,Bi,Po,At,Rn,

	Fr,Ra,
	//actinides
	Ac,Th,Pa,U,Np,Pu,Am,Cm,Bk,Cf,Es,Fm,Md,No,

	Lr,Rf,Db,Sg,Bh,Hs,Mt,Ds,Rg,Uub,Uut,Uuq,Uup,Uuh,Uus,Uuo
};
/*��Ϊelem��֧��ֱ�����ö����
* 
* ����ֻ�����жϾ�
*/
void elem_print(int num)
{
	switch (num)
	{
		case 0:
		{
			break;
		}
		case 1:
		{
			cout << "H";

			break;
		}
		case 2:
		{
			cout << "He";

			break;
		}
		case 3:
		{
			cout << "Li";

			break;
		}
		case 4:
		{
			cout << "Be";

			break;
		}
		case 5:
		{
			cout << "B";

			break;
		}
		case 6:
		{
			cout << "C";

			break;
		}
		case 7:
		{
			cout << "N";

			break;
		}
		case 8:
		{
			cout << "O";

			break;
		}
		case 9:
		{
			cout << "F";

			break;
		}
		case 10:
		{
			cout << "Ne";

			break;
		}
		case 11:
		{
			cout << "Na";

			break;
		}
		case 12:
		{
			cout << "Mg";

			break;
		}
		case 13:
		{
			cout << "Al";

			break;
		}
		case 14:
		{
			cout << "Si";

			break;
		}
		case 15:
		{
			cout << "P";

			break;
		}
		case 16:
		{
			cout << "S";

			break;
		}
		case 17:
		{
			cout << "Cl";

			break;
		}
		case 18:
		{
			cout << "Ar";

			break;
		}
		case 19:
		{
			cout << "K";

			break;
		}
		case 20:
		{
			cout << "Ca";

			break;
		}
		case 21:
		{
			cout << "Sc";

			break;
		}
		case 22:
		{
			cout << "Ti";

			break;
		}
		case 23:
		{
			cout << "V";

			break;
		}
		case 24:
		{
			cout << "Cr";

			break;
		}
		case 25:
		{
			cout << "Mn";

			break;
		}
		case 26:
		{
			cout << "Fe";

			break;
		}
		case 27:
		{
			cout << "Co";

			break;
		}
		case 28:
		{
			cout << "Ni";

			break;
		}
		case 29:
		{
			cout << "Cu";

			break;
		}
		case 30:
		{
			cout << "Zn";

			break;
		}
		case 31:
		{
			cout << "Ga";

			break;
		}
		case 32:
		{
			cout << "Ge";

			break;
		}
		case 33:
		{
			cout << "As";

			break;
		}
		case 34:
		{
			cout << "Se";

			break;
		}
		case 35:
		{
			cout << "Br";

			break;
		}
		case 36:
		{
			cout << "Kr";

			break;
		}
		case 37:
		{
			cout << "Rb";

			break;
		}
		case 38:
		{
			cout << "Sr";

			break;
		}
		case 39:
		{
			cout << "Y";

			break;
		}
		case 40:
		{
			cout << "Zr";

			break;
		}
		case 41:
		{
			cout << "Nb";

			break;
		}
		case 42:
		{
			cout << "Mo";

			break;
		}
		case 43:
		{
			cout << "Tc";

			break;
		}
		case 44:
		{
			cout << "Ru";

			break;
		}
		case 45:
		{
			cout << "Rh";

			break;
		}
		case 46:
		{
			cout << "Pd";

			break;
		}
		case 47:
		{
			cout << "Ag";

			break;
		}
		case 48:
		{
			cout << "Cd";

			break;
		}
		case 49:
		{
			cout << "In";

			break;
		}
		case 50:
		{
			cout << "Sn";

			break;
		}
		case 51:
		{
			cout << "Sb";

			break;
		}
		case 52:
		{
			cout << "Te";

			break;
		}
		case 53:
		{
			cout << "I";

			break;
		}
		case 54:
		{
			cout << "Xe";

			break;
		}
		case 55:
		{
			cout << "Cs";

			break;
		}
		case 56:
		{
			cout << "Ba";

			break;
		}
		case 57:
		{
			cout << "La";

			break;
		}
		case 58:
		{
			cout << "Ce";

			break;
		}
		case 59:
		{
			cout << "Pr";

			break;
		}
		case 60:
		{
			cout << "Nd";

			break;
		}
		case 61:
		{
			cout << "Pm";

			break;
		}
		case 62:
		{
			cout << "Sm";

			break;
		}
		case 63:
		{
			cout << "Eu";

			break;
		}
		case 64:
		{
			cout << "Gd";

			break;
		}
		case 65:
		{
			cout << "Tb";

			break;
		}
		case 66:
		{
			cout << "Dy";

			break;
		}
		case 67:
		{
			cout << "Ho";

			break;
		}
		case 68:
		{
			cout << "Er";

			break;
		}
		case 69:
		{
			cout << "Tm";

			break;
		}
		case 70:
		{
			cout << "Yb";

			break;
		}
		case 71:
		{
			cout << "Lu";

			break;
		}
		case 72:
		{
			cout << "Hf";

			break;
		}
		case 73:
		{
			cout << "Ta";

			break;
		}
		case 74:
		{
			cout << "W";

			break;
		}
		case 75:
		{
			cout << "Re";

			break;
		}
		case 76:
		{
			cout << "Os";

			break;
		}
		case 77:
		{
			cout << "Ir";

			break;
		}
		case 78:
		{
			cout << "Pt";

			break;
		}
		case 79:
		{
			cout << "Au";

			break;
		}
		case 80:
		{
			cout << "Hg";

			break;
		}
		case 81:
		{
			cout << "Tl";

			break;
		}
		case 82:
		{
			cout << "Pb";

			break;
		}
		case 83:
		{
			cout << "Bi";

			break;
		}
		case 84:
		{
			cout << "Po";

			break;
		}
		case 85:
		{
			cout << "At";

			break;
		}
		case 86:
		{
			cout << "Rn";

			break;
		}
		case 87:
		{
			cout << "Fr";

			break;
		}
		case 88:
		{
			cout << "Ra";

			break;
		}
		case 89:
		{
			cout << "Ac";

			break;
		}
		case 90:
		{
			cout << "Th";

			break;
		}
		case 91:
		{
			cout << "Pa";

			break;
		}
		case 92:
		{
			cout << "U";

			break;
		}
		case 93:
		{
			cout << "Np";

			break;
		}
		case 94:
		{
			cout << "Pu";

			break;
		}
		case 95:
		{
			cout << "Am";

			break;
		}
		case 96:
		{
			cout << "Cm";

			break;
		}
		case 97:
		{
			cout << "Bk";

			break;
		}
		case 98:
		{
			cout << "Cf";

			break;
		}
		case 99:
		{
			cout << "Es";

			break;
		}
		case 100:
		{
			cout << "Fm";

			break;
		}
		case 101:
		{
			cout << "Md";

			break;
		}
		case 102:
		{
			cout << "No";

			break;
		}
		case 103:
		{
			cout << "Lr";

			break;
		}
		case 104:
		{
			cout << "Rf";

			break;
		}
		case 105:
		{
			cout << "Db";

			break;
		}
		case 106:
		{
			cout << "Sg";

			break;
		}
		case 107:
		{
			cout << "Bh";

			break;
		}
		case 108:
		{
			cout << "Hs";

			break;
		}
		case 109:
		{
			cout << "Mt";

			break;
		}
		case 110:
		{
			cout << "Ds";

			break;
		}
		case 111:
		{
			cout << "Rg";

			break;
		}
		case 112:
		{
			cout << "Uub";

			break;
		}
		case 113:
		{
			cout << "Uut";

			break;
		}
		case 114:
		{
			cout << "Uuq";

			break;
		}
		case 115:
		{
			cout << "Uup";

			break;
		}
		case 116:
		{
			cout << "Uuh";

			break;
		}
		case 117:
		{
			cout << "Uus";

			break;
		}
		case 118:
		{
			cout << "Uuo";

			break;
		}
	}
}
/*
* chem_elem���������浥����Ԫ�ؼ�������
* 
* ���������̼��C O2���򴢴�˻�ѧʽ��Ҫ����Chem_elem
* 
* һ��data=C��num=1   C
* 
* ����data=O��num=2   O2
* 
* �Դ�����
*/
class Chem_elem
{
	elem data;	
	//�������浥����ѧԪ�أ���C2��D3��
	int num;
	//������ѧԪ�ص�����
public:

	Chem_elem()		//Ĭ�Ϲ��캯����data=NULLELEM��num=0
	{
		this->data = NULLELEM;

		this->num = 0;
	}
	Chem_elem(elem in_data, int in_num)		//�������Ĺ��캯��������data��������ֵ��num��������ֵ
	{
		this->data = in_data;

		this->num = in_num;
	}
	int set_data(elem in_data)		//����data����
	{
		this->data = in_data;

		return 0;
	}
	int set_num(int in_num)			//����num����
	{
		this->num = in_num;

		return 0;
	}
	elem get_data()					//��ȡdata����
	{
		return this->data;
	}
	int get_num()					//��ȡnum����
	{
		return this->num;
	}
};
/*chemobject���ö��е���ʽ����һ������ѧʽ
* 
* data��һ��chemelem�࣬������������
* 
* ������һ�����п�ܣ��������ɵ�����ѧ����
* 
* ����һ������������һ����������ѧ����
* 
* ���Զ�̬�ı���������Բ�ͬ���ȵĻ�ѧʽ
* 
* data������������
* 
* next����ָ����һ��chem_obj����֤���ݵ�������
* 
* first�Ǳ�־�Ƿ�Ϊ��һ�����ݣ�Ĭ��Ϊtrue
* 
* end�Ǳ�־�Ƿ�Ϊ���һ�����ݣ�Ĭ����false
* 
* ��endΪtrue 
* 
* ��nextǿ��ָ��NULLPTR��ָ��
*/
class Chem_Obj
{
	Chem_elem data;					//����
	
	Chem_Obj* next;					//��һ��ָ��

	bool first;						//�׸�Ԫ�ر�ʶλ

	bool end;						//ĩβԪ�ر�ʶλ

	/*findone����������ѯ�˿���ڵĵ���Ԫ��
	* 
	* ����Ϊprivate���������ⲿ����
	*/
	int find_oue(elem findinto)
	{
		if (this->data.get_data() == findinto)			//����
		{
			return this->data.get_num();				//����Ԫ������
		}
		else											//���û��
		{
			return 0;									//����0
		}
	}
	/*�����Ĵ�ӡ��Ԫ�ص�����
	*
	* ���ڵݹ����
	*
	* Ϊpriviate
	*/
	void print_one()
	{
		elem_print(this->data.get_data());

		cout << this->data.get_num();
	}
public:
	Chem_Obj()		//Ĭ�Ϲ��캯��
	{
		this->next = nullptr;				//nextָ��nullptr

		first = true;						//Ĭ��Ϊ�׸�Ԫ��

		end = false;						//endΪfalse
	}
	Chem_Obj(elem in_elem,int in_num)		//����data���ݵĹ��캯��
	{
		this->data.set_data(in_elem);		//data���ݸ�ֵԪ��

		this->data.set_num(in_num);			//data���ݸ�ֵ����

		this->next = nullptr;				//nextָ��nullptr

		first = true;						//Ĭ��Ϊ��λ

		end = false;						//endΪfalse
	}
	//���������ݺ�ָ�룬��Ĭ��Ϊ��һλ����ָ����һ��Ԫ�أ����������׸�Ԫ��

	Chem_Obj(elem in_elem, int in_num,Chem_Obj* point)		//�������ݺ�ָ��Ĺ��캯��
	{
		this->data.set_data(in_elem);		//data���ݸ�ֵԪ��

		this->data.set_num(in_num);			//data���ݸ�ֵ����

		this->next = point;					//nextָ�����ָ��

		first = true;						//Ĭ��Ϊ��λ

		end = false;						//endΪfalse
	}
	//���������ݡ�ָ�����λ��ʶ��
	// 
	//����λ��ʶ��Ϊtrue��������λԪ��
	// 
	//����λ��ʶ��Ϊfalse�������м��Ԫ��

	Chem_Obj(elem in_elem, int in_num, Chem_Obj* point,bool first_in)		//���˸������ݡ�ָ�����λ��ʶ���Ĺ��캯��
	{
		this->data.set_data(in_elem);		//data���ݸ�ֵԪ��

		this->data.set_num(in_num);			//data���ݸ�ֵ����

		this->next = point;					//nextָ�����ָ��

		this->first = first_in;				//��λ��ʶ��Ϊ���������

		this->end = false;					//Ĭ�Ϸ����һ��
	}
	/*�������ݺ�boolֵ����endֵ
	* 
	* Ĭ�Ϲ���ĩβԪ��
	*/
	Chem_Obj(elem in_elem, int in_num, bool end_in)
	{
		this->data.set_data(in_elem);		//data���ݸ�ֵԪ��

		this->data.set_num(in_num);			//data���ݸ�ֵ����

		this->first = false;				//��λΪfalse

		this->end = true;

		this->next = nullptr;				//ĩβΪnullptr

		if (end_in)							//���ȷʵ�ǹ���endԪ��
		{
			this->end = true;

			this->next = nullptr;			//ĩβΪnullptr
		}
		else
		{
			this->end = false;

			this->next = nullptr;			//ĩβΪnullptr
		}
	}
	int find(elem findinto)								//һ����ô˺�����ѯ
	{
		if (this->first)								//������׸�Ԫ�أ��������ϼ��ݹ����
		{
			int ret = this->find_oue(findinto);			//����findone����������ֵ������ret��

			if (ret != 0)								//������ֵ��Ϊ0�������ҵ�Ԫ�أ�retΪԪ�ظ���
			{
				return ret;								//����ret
			}
			else										//������ֵΪ0����δ�鵽Ԫ��
			{
				return this->next->find(findinto);		//�ݹ���Ҷ�������һ��������
			}
		}
		else if(this->end != true && this->first != true)   //�������׸�Ԫ�أ�Ҳ����ĩβԪ�أ����������¼��ݹ����
		{
			int ret = this->find_oue(findinto);			//����findone����������ֵ������ret��

			if (ret != 0)								//������ֵ��Ϊ0�������ҵ�Ԫ�أ�retΪԪ�ظ���
			{
				return ret;								//�ݹ鷵��ret
			}
			else										//������ֵΪ0����δ�鵽Ԫ��
			{
				return this->next->find(findinto);		//�ݹ���Ҷ�������һ��������
			}
		}
		else if(this->end == true)						//�ݹ���õ�ĩβԪ�أ������ϼ���ϵ
		{
			int ret = this->find_oue(findinto);			//����findone����������ֵ������ret��

			if (ret != 0)								//������ֵ��Ϊ0�������ҵ�Ԫ�أ�retΪԪ�ظ���
			{
				return ret;								//�ݹ鷵��ret
			}
			else										//������ֵΪ0����δ�鵽Ԫ�أ��˶����в������ҵ�Ԫ��
			{
				return 0;								//�ݹ鷵��0
			}
		}
	}
	/*��ӡ����
	* 
	* ���˵ݹ����
	*/
	void print()
	{
		this->print_one();			//��ӡ��Ԫ��

		if (this->end != true || this->next != nullptr)		//����������һ��Ԫ��
		{
			this->next->print();				//�ݹ������һ��Ԫ�صĴ�ӡ����
		}
	}
};

int main(int ArgC, char* ArgV)
{
	elem e = Co;
}

