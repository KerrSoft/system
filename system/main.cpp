#include <iostream>

#include <string>

using namespace std;
/*
* 元素的周期表，用枚举数组当做数据类型使用
* 
* 其中若没有指定元素，则默认为0，即NULLELEM
* 
* 其他数据按照元素周期表排列
*/
enum elem		//元素周期表 data文件
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
/*因为elem不支持直接输出枚举子
* 
* 所以只能用判断句
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
* chem_elem类用来保存单个的元素及其数量
* 
* 比如二氧化碳（C O2）则储存此化学式需要两个Chem_elem
* 
* 一是data=C，num=1   C
* 
* 二是data=O，num=2   O2
* 
* 以此类推
*/
class Chem_elem
{
	elem data;	
	//用来保存单个化学元素，如C2，D3等
	int num;
	//单个化学元素的数量
public:

	Chem_elem()		//默认构造函数，data=NULLELEM，num=0
	{
		this->data = NULLELEM;

		this->num = 0;
	}
	Chem_elem(elem in_data, int in_num)		//带函数的构造函数，其中data等于输入值，num等于输入值
	{
		this->data = in_data;

		this->num = in_num;
	}
	int set_data(elem in_data)		//设置data数据
	{
		this->data = in_data;

		return 0;
	}
	int set_num(int in_num)			//设置num数据
	{
		this->num = in_num;

		return 0;
	}
	elem get_data()					//获取data数据
	{
		return this->data;
	}
	int get_num()					//获取num数据
	{
		return this->num;
	}
};
/*chemobject类用队列的形式储存一整个化学式
* 
* data是一个chemelem类，用来储存数据
* 
* 此类是一个队列框架，用来容纳单个化学分子
* 
* 队列一整个用来穿起一个个单个化学分子
* 
* 可以动态改变容量来面对不同长度的化学式
* 
* data用来保存数据
* 
* next用来指向下一个chem_obj，保证数据的连贯性
* 
* first是标志是否为第一个数据，默认为true
* 
* end是标志是否为最后一个数据，默认是false
* 
* 若end为true 
* 
* 则next强制指向NULLPTR空指针
*/
class Chem_Obj
{
	Chem_elem data;					//数据
	
	Chem_Obj* next;					//下一个指针

	bool first;						//首个元素标识位

	bool end;						//末尾元素标识位

	/*findone函数用来查询此框架内的单个元素
	* 
	* 类型为private，不允许外部调用
	*/
	int find_oue(elem findinto)
	{
		if (this->data.get_data() == findinto)			//若有
		{
			return this->data.get_num();				//返回元素数量
		}
		else											//如果没有
		{
			return 0;									//返回0
		}
	}
	/*单个的打印此元素的数据
	*
	* 用于递归调用
	*
	* 为priviate
	*/
	void print_one()
	{
		elem_print(this->data.get_data());

		cout << this->data.get_num();
	}
public:
	Chem_Obj()		//默认构造函数
	{
		this->next = nullptr;				//next指向nullptr

		first = true;						//默认为首个元素

		end = false;						//end为false
	}
	Chem_Obj(elem in_elem,int in_num)		//给了data数据的构造函数
	{
		this->data.set_data(in_elem);		//data数据赋值元素

		this->data.set_num(in_num);			//data数据赋值个数

		this->next = nullptr;				//next指向nullptr

		first = true;						//默认为首位

		end = false;						//end为false
	}
	//若给了数据和指针，则默认为第一位，且指向下一个元素，用来构造首个元素

	Chem_Obj(elem in_elem, int in_num,Chem_Obj* point)		//给了数据和指针的构造函数
	{
		this->data.set_data(in_elem);		//data数据赋值元素

		this->data.set_num(in_num);			//data数据赋值个数

		this->next = point;					//next指向给的指针

		first = true;						//默认为首位

		end = false;						//end为false
	}
	//若给了数据、指针和首位标识符
	// 
	//若首位标识符为true，则构造首位元素
	// 
	//若首位标识符为false，则构造中间的元素

	Chem_Obj(elem in_elem, int in_num, Chem_Obj* point,bool first_in)		//给了给了数据、指针和首位标识符的构造函数
	{
		this->data.set_data(in_elem);		//data数据赋值元素

		this->data.set_num(in_num);			//data数据赋值个数

		this->next = point;					//next指向给的指针

		this->first = first_in;				//首位标识符为输入的数据

		this->end = false;					//默认非最后一个
	}
	/*给了数据和bool值，即end值
	* 
	* 默认构造末尾元素
	*/
	Chem_Obj(elem in_elem, int in_num, bool end_in)
	{
		this->data.set_data(in_elem);		//data数据赋值元素

		this->data.set_num(in_num);			//data数据赋值个数

		this->first = false;				//首位为false

		this->end = true;

		this->next = nullptr;				//末尾为nullptr

		if (end_in)							//如果确实是构建end元素
		{
			this->end = true;

			this->next = nullptr;			//末尾为nullptr
		}
		else
		{
			this->end = false;

			this->next = nullptr;			//末尾为nullptr
		}
	}
	int find(elem findinto)								//一般调用此函数查询
	{
		if (this->first)								//如果是首个元素，不存在上级递归调用
		{
			int ret = this->find_oue(findinto);			//调用findone函数，返回值储存在ret里

			if (ret != 0)								//若返回值不为0，即查找到元素，ret为元素个数
			{
				return ret;								//返回ret
			}
			else										//若返回值为0，及未查到元素
			{
				return this->next->find(findinto);		//递归查找队列中下一个的数据
			}
		}
		else if(this->end != true && this->first != true)   //若不是首个元素，也不是末尾元素，及存在上下级递归调用
		{
			int ret = this->find_oue(findinto);			//调用findone函数，返回值储存在ret里

			if (ret != 0)								//若返回值不为0，即查找到元素，ret为元素个数
			{
				return ret;								//递归返回ret
			}
			else										//若返回值为0，及未查到元素
			{
				return this->next->find(findinto);		//递归查找队列中下一个的数据
			}
		}
		else if(this->end == true)						//递归调用到末尾元素，存在上级关系
		{
			int ret = this->find_oue(findinto);			//调用findone函数，返回值储存在ret里

			if (ret != 0)								//若返回值不为0，即查找到元素，ret为元素个数
			{
				return ret;								//递归返回ret
			}
			else										//若返回值为0，及未查到元素，此队列中不含查找的元素
			{
				return 0;								//递归返回0
			}
		}
	}
	/*打印函数
	* 
	* 用了递归调用
	*/
	void print()
	{
		this->print_one();			//打印此元素

		if (this->end != true || this->next != nullptr)		//如果不是最后一个元素
		{
			this->next->print();				//递归调用下一个元素的打印函数
		}
	}
};

int main(int ArgC, char* ArgV)
{
	elem e = Co;
}

