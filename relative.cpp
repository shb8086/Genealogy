#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<string>
void CheckRepetition1(Tree* root,string* &tempArray,int &index,int flag)
{
	if(root != 0)
	{
		if(flag == 0)
			tempArray =  new string [Tree::length];
		tempArray[index] = root->name;

		if(root->first != 0)
			CheckRepetition1(root->first,tempArray,++index,1);
		if(root->second != 0)
			CheckRepetition1(root->second,tempArray,++index,1);
		if(root->third != 0)
			CheckRepetition1(root->third,tempArray,++index,1);
		if(root->fourth != 0)
			CheckRepetition1(root->fourth,tempArray,++index,1);
		if(root->fifth != 0)
			CheckRepetition1(root->fifth,tempArray,++index,1);
		if(root->sixth != 0)
			CheckRepetition1(root->sixth,tempArray,++index,1);
		if(root->seventh != 0)
			CheckRepetition1(root->seventh,tempArray,++index,1);
		if(root->eighth != 0)
			CheckRepetition1(root->eighth,tempArray,++index,1);
		if(root->ninth != 0)
			CheckRepetition1(root->ninth,tempArray,++index,1);
		if(root->tenth != 0)
			CheckRepetition1(root->tenth,tempArray,++index,1);
	}
}
int CheckRepetition2(string* &tempArray,string name,Tree* root)
{
	int repetition = 0;
	if(tempArray != 0)
	{
		for(int i = 0; i < Tree::length; ++i)
			if(tempArray[i] == name)
				repetition++;
		delete[] tempArray;
		tempArray = 0;
	}
	if(repetition > 0)
	{
		std::cout <<"Warning!!!\nname : \"" << name <<"\" already exists in our tree,";
		return 1;
	}
	return 0;
}
void preFindBrotherRelative(string name1,string name2,Tree* &root,string* &tempArray)
{
	if(root!=0)
	{
		if(root->name==name1)
			std:: cout<<name1<<" in relation with no one"<<cout::endl;
		else
		{
			int index=0;
			Chekreprition1(root,tempArray,index);
			int flag1=0;
			int flag2=0;
			for(int i=0;i<Tree::length;i++)
				if(tempArray[i]==name1)
					flag1=1;
			for(int i=0;i<Tree::length;i++)
				if(tempArray[i]==name2)
					flag2=1;
			if(flag1==1 & flag2==1)
				findrelative(name1,name2,root);
			else
			if(flag1==0)
				std:: cout<<name1<<" doesn't exist in this tree." << std::endl;
			if(flag2==0)
				std:: cout<<name2<<" doesn't exist in this tree."<< std:: endl;
		
		}
		if(tempArray!=0)
		{
			delete []tempArray;
			tempArray=0;
		}
	}
	if(tempArray!=0)
		{
			delete []tempArray;
			tempArray=0;
		}
}
void findBrotherRelative(string name1,string name2,Tree* &root)
{
	int flag=0;
	if(root!=0)
	{
		if(root->first!=0)
		if(root->first->name==name1)
		{

			if(root->second!=0)
				if(root->second==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std::endl;
			flag=1;
				}
			if(root->third!=0)
				if(root->third->name==name2)
				{
					std::cout<<name1<<" is brother of "<<"name2"<<std:: endl;
					flag=1;
				}
			if(root->fourth!=0)
				if(root->fifth->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fifth!=0)
				if(root->fifth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sisth!=0)
				if(root->sixth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->seventh!=0)
				if(root->seventh->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
		}
		if(root->second!=0)
			if(root->second->name==name1)
			{
				if(root->first!=0)
					if(root->first->name==name2)
					{
						std::cout<<name1<<" is brother of "<<name2<<std::endl;
						flag=1;
					}
					if(root->third!=0)
				if(root->third->name==name2)
				{
					std::cout<<name1<<" is brother of "<<"name2"<<std:: endl;
					flag=1;
				}
			if(root->fourth!=0)
				if(root->fourth->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fifth!=0)
				if(root->fifth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sisth!=0)
				if(root->sixth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->seventh!=0)
				if(root->seventh->name==name2)
				{
					std::cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std::cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std::cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std::cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}

			}
			if(root->third!=0)
				if(root->third->name==name1)
				{
					if(root->first!=0)
						if(root->first->name==name2)
						{
							std::cout<<name1<<" is brother of "<<name2<<std:: endl;
							flag=1;
						}
						if(root->second!=0)
							if(root->second->name==name2)
							{
								std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
								flag=1;
							}
							if(root->fourth!=0)
				if(root->fourth->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fifth!=0)
				if(root->fifth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sisth!=0)
				if(root->sixth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->seventh!=0)
				if(root->seventh->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}

				}
			if(root->fourth!=0)
				if(root->fourth->name==name1)
				{
					if(root->first!=0)
						if(root->first->name==name2)
						{
							std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
							flag=1;
						}
						if(root->second!=0)
							if(root->second->name==name2)
							{
								std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
								flag=1;
							}
							if(root->third!=0)
				if(root->third->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fifth!=0)
				if(root->fifth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sisth!=0)
				if(root->sixth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->seventh!=0)
				if(root->seventh->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}

				}
				if(root->fifth!=0)
				if(root->fifth->name==name1)
				{
					if(root->first!=0)
						if(root->first->name==name2)
						{
							std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
							flag=1;
						}
						if(root->second!=0)
							if(root->second->name==name2)
							{
								std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
								flag=1;
							}
							if(root->third!=0)
				if(root->third->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fourth!=0)
				if(root->fourth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sisth!=0)
				if(root->sixth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->seventh!=0)
				if(root->seventh->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}

				}
				if(root->fifth!=0)
				if(root->fifth->name==name1)
				{
					if(root->first!=0)
						if(root->first->name==name2)
						{
							std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
							flag=1;
						}
						if(root->second!=0)
							if(root->second->name==name2)
							{
								std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
								flag=1;
							}
							if(root->third!=0)
				if(root->third->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fourth!=0)
				if(root->fourth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sisth!=0)
				if(root->sixth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->seventh!=0)
				if(root->seventh->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
				}
				if(root->seventh!=0)
				if(root->seventh->name==name1)
				{
					if(root->first!=0)
						if(root->first->name==name2)
						{
							std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
							flag=1;
						}
						if(root->second!=0)
							if(root->second->name==name2)
							{
								std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
								flag=1;
							}
							if(root->third!=0)
								if(root->third->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fourth!=0)
				if(root->fourth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fifth!=0)
				if(root->fifth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sixth!=0)
				if(root->sixth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
				}
				if(root->sixth!=0)
				if(root->sixth->name==name1)
				{
					if(root->first!=0)
						if(root->first->name==name2)
						{
							std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
							flag=1;
						}
						if(root->second!=0)
							if(root->second->name==name2)
							{
								std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
								flag=1;
							}
							if(root->third!=0)
				if(root->third->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fourth!=0)
				if(root->fourth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fifth!=0)
				if(root->fifth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->seventh!=0)
				if(root->seventh->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
				}
				if(root->seventh!=0)
				if(root->seventh->name==name1)
				{
					if(root->first!=0)
						if(root->first->name==name2)
						{
							std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
							flag=1;
						}
						if(root->second!=0)
							if(root->second->name==name2)
							{
								std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
								flag=1;
							}
							if(root->third!=0)
				if(root->third->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fourth!=0)
				if(root->fourth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fifth!=0)
				if(root->fifth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sixth!=0)
				if(root->sixth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
				}
				if(root->eighth!=0)
				if(root->eighth->name==name1)
				{
					if(root->first!=0)
						if(root->first->name==name2)
						{
							std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
							flag=1;
						}
						if(root->second!=0)
							if(root->second->name==name2)
							{
								std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
								flag=1;
							}
							if(root->third!=0)
				if(root->third->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fourth!=0)
				if(root->fourth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fifth!=0)
				if(root->fifth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sixth!=0)
				if(root->sixth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->seventh!=0)
				if(root->seventh->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
				}
                 if(root->ninth!=0)
				if(root->ninth->name==name1)
				{
					if(root->first!=0)
						if(root->first->name==name2)
						{
							std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
							flag=1;
						}
						if(root->second!=0)
							if(root->second->name==name2)
							{
								std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
								flag=1;
							}
							if(root->third!=0)
				if(root->third->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fourth!=0)
				if(root->fourth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fifth!=0)
				if(root->fifth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sixth!=0)
				if(root->sixth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->seventh!=0)
				if(root->seventh->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->tenth!=0)
				if(root->tenth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
				}
				if(root->tenth!=0)
				if(root->tenth->name==name1)
				{
					if(root->first!=0)
						if(root->first->name==name2)
						{
							std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
							flag=1;
						}
						if(root->second!=0)
							if(root->second->name==name2)
							{
								std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
								flag=1;
							}
							if(root->third!=0)
				if(root->third->name==name2)
				{
				    std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fourth!=0)
				if(root->fourth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->fifth!=0)
				if(root->fifth->name=name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->sixth!=0)
				if(root->sixth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->seventh!=0)
				if(root->seventh->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->eighth!=0)
				if(root->eighth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
			if(root->ninth!=0)
				if(root->ninth->name==name2)
				{
					std:: cout<<name1<<" is brother of "<<name2<<std:: endl;
					flag=1;
				}
				if(flag==0)
					std::cout<<name1<<" doesn't have any brother"<<std::endl;
				}
				
				}
				if(root->first!=0 && flag==0)
					findBrotherRelative(name1,name2,root->first);
				if(root->second!=0 && flag==0)
					findBrotherRelative(name1,name2,root->second);
				if(root->third!=0 && flag==0)
					findBrotherRelative(name1,name2,root->rhird);
				if(root->fourth!=0 && flag==0)
					findBrotherRelative(name1,name2,root->fourth);
				if(root->fifith!=0 && flag==0)
					findBrotherRelative(name1,name2,root->fifth);
				if(root->sixth!=0 && flag==0)
					findBrotherRelative(name1,name2,root->sixth);
				if(root->seventh!=0 && flag==0)
					findBrotherRelative(name1,name2,root->seventh);
				if(root->eighth!=0 && flag==0)
					findBrotherRelative(name1,name2,root->eighth);
				if(root->ninth!=0 && flag==0)
					findBrotherRelative(name1,name2,root->ninth);
				if(root->tenth!=0 && flag==0)
					findBrotherRelative(name1,name2,root->tenth);

				}
void preFindGrandsonRelative(string name1,string name2,Tree* &root,string *& tempArray)
{
	if(root!=0)
	{
		int index=0;
		ChekRepetition1(root,tempArray,index);
		int flag1=0;
		int flag2=0;
		for(int i=0;i<Tree::length;i++)
			if(tempArray[i]==name1)
				flag1=1;
		for(int i=0;i<Tree::length;i++)
			if(tempArray[i]==name2)
				flag2=1;
		if(flag1==0)
			std:: cout<<name1<<" doesn't exist in Tree"<<std::endl;
		if(flag2==0)
			std:: cout<<name2<<" doesn't exist in Tree"<<std::endl;
		if(flag1==1 && flag2==1)
			findGrandsonRelative(name1,name2,root);
	}
	else
		std:: cout<<"Tree is empty"<<std::endl;
}
void findGrandsonRelative(string name1,string name2,Tree* &root)
{
	int flag=0;
	if(root!=0)
	{
		if(root->name==name1)
		{
			if(root->first!=0)
			{
			if(root->first->first!=0)
			if(root->first->first->name==name2)
			{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
			}
			if(root->first->second!=0)
			if(root->first->second->name==name2)
			{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
			}
			if(root->first->third!=0)
				if(root->first->third->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->first->fourth!=0)
				if(root->first->fourth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->first->fifth!=0)
				if(root->first->fifth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->first->sixth!=0)
				if(root->first->sixth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->first->seventh!=0)
				if(root->first->seventh->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->first->eighth!=0)
				if(root->first->eighth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->first->ninth!=0)
				if(root->first->ninth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->first->tenth!=0)
				if(root->first->tenth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			}
			if(root->second!=0)
			{
			if(root->second->first!=0)
				if(root->second->first->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->second->second!=0)
				if(root->second->second->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->second->third!=0)
				if(root->second->third->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}

			if(root->second->fourth!=0)
				if(root->seconth->fourth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->second->fifith!=0)
				if(root->second->fifth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->second->sixth!=0)
				if(root->second->sixth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->second->seventh!=0)
				if(root->second->seventh->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->second->eighth!=0)
				if(root->second->eighth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->second->ninth!=0)
				if(root->second->ninth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			if(root->seconth->tenth!=0)
				if(root->second->tenth->name==name2)
				{
				std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
				flag=1;
				}
			}
			//////
			if(root->third!=0)
			{
				if(root->third->first!=0)
					if(root->third->first->name==name2)
					{
						std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
				if(root->third->second!=0)
					if(root->third->second->name==name2)
					{
						std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
				if(root->third->third!=0)
					if(root->third->third->name==name2)
					{
						std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
				if(root->third->fourth!=0)
					if(root->third->fourth->name==name2)
					{
						std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
				if(root->third->fifth!=0)
					if(root->third->fifth->name==name2)
					{
						std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
				if(root->third->sixth!=0)
					if(root->third->sixth->name==name2)
					{
						std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
				if(root->third->seventh!=0)
					if(root->third->seenth->name==name2)
					{
						std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
				if(root->third->eighth!=0)
					if(root->third->eighth->name==name2)
					{
						std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
				if(root->third->ninth!=0)
					if(root->third->ninth->name==name2)
					{
						std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
				if(root->third->tenth!=0)
					if(root->third->tenth->name==name2)
					{
						std:: cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
			}
			if(root->fourth!=0)
			{
				if(root->fourth->first!=0)
					if(root->fourth->first->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fourth->seconth!=0)
					if(root->fourth->second->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fourth->third!=0)
					if(root->fourth->third->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fourth->fourth!=0)
					if(root->fourth->fourth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fourth->fifth!=0)
					if(root->fourth->fifth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fourth->six!=0)
					if(root->fourth->six->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fourth->seventh!=0)
					if(root->fourth->seventh->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fourth->eighth!=0)
					if(root->fourth->eighth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fourth->ninth!=0)
					if(root->fourth->ninth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fourth->tenth!=0)
					if(root->fourth->tenth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
			}
			if(root->fifth!=0)
			{
				if(root->fifth->first!=0)
					if(root->fifth->first->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fifth->second!=0)
					if(root->fifth->second->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fifth->third!=0)
					if(root->fifth->third->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fifth->fourth!=0)
					if(root->fifth->fourth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fifth->fifth!=0)
					if(root->fifth->fifth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fifth->sixth!=0)
					if(root->fifth->sixth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fifth->seventh!=0)
					if(root->fifth->seventh->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fifth->eighth!=0)
					if(root->fifth->eighth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->fifth->ninth!=0)
					if(root->fifth->ninth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=0;
					}
				if(root->fifth->tenth!=0)
					if(root->fifth->tenth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}

			}
			if(root->sixth!=0)
			{
				if(root->sixth->first!=0)
					if(root->sixth->first->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->sixth->second!=0)
					if(root->sixth->second->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->sixth->third!=0)
					if(root->sixth->third->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->sixth->fourth!=0)
					if(root->sixth->fourth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->sixth->fifth!=0)
					if(root->sixth->fifth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->sixth->sixth!=0)
					if(root->sixth->sixth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->sixth->seventh!=0)
					if(root->sixth->seventh->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->sixth->eighth!=0)
					if(root->sixth->eighth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->sixth->ninth!=0)
					if(root->sixth->ninth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->sixth->tenth!=0)
					if(root->sixth->tenth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
			}

			
		if(root->seventh!=0)
			{
				if(root->seventh->first!=0)
					if(root->seventh->first->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->seventh->second!=0)
					if(root->seventh->second->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->seventh->third!=0)
					if(root->seventh->third->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->seventh->fourth!=0)
					if(root->seventh->fourth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std::endl;
						flag=1;
					}
				if(root->seventh->fifth!=0)
					if(root->seventh->fifth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->seventh->sixth!=0)
					if(root->seventh->sixth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->seventh->seventh!=0)
					if(root->seventh->seventh->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->seventh->eighth!=0)
					if(root->seventh->eighth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->seventh->ninth!=0)
					if(root->seventh->ninth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->seventh->tenth!=0)
					if(root->seventh->tenth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
			}

		if(root->eighth!=0)
			{
				if(root->eighth->first!=0)
					if(root->eighth->first->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->eighth->second!=0)
					if(root->eighth->second->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->eighth->third!=0)
					if(root->eighth->third->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->eighth->fourth!=0)
					if(root->eighth->fourth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->eighth->fifth!=0)
					if(root->eighth->fifth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->eighth->sixth!=0)
					if(root->eighth->sixth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->eighth->seventh!=0)
					if(root->eighth->seventh->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->eighth->eighth!=0)
					if(root->eighth->eighth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->eighth->ninth!=0)
					if(root->eighth->ninth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->eighth->tenth!=0)
					if(root->eighth->tenth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
			}

		if(root->ninth!=0)
			{
				if(root->ninth->first!=0)
					if(root->ninth->first->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->ninth->second!=0)
					if(root->ninth->second->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->ninth->third!=0)
					if(root->ninth->third->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->ninth->fourth!=0)
					if(root->ninth->fourth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->ninth->fifth!=0)
					if(root->ninth->fifth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->ninth->sixth!=0)
					if(root->ninth->sixth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->ninth->seventh!=0)
					if(root->eninth->seventh->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->ninth->eighth!=0)
					if(root->ninth->eighth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->ninth->ninth!=0)
					if(root->ninth->ninth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->ninth->tenth!=0)
					if(root->ninth->tenth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
			}
		if(root->tenth!=0)
			{
				if(root->tenth->first!=0)
					if(root->tenth->first->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->tenth->second!=0)
					if(root->tenth->second->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->tenth->third!=0)
					if(root->tenth->third->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->tenth->fourth!=0)
					if(root->tenth->fourth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->tenth->fifth!=0)
					if(root->tenth->fifth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->tenth->sixth!=0)
					if(root->tenth->sixth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->tenth->seventh!=0)
					if(root->tenth->seventh->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->tenth->eighth!=0)
					if(root->tenth->eighth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->tenth->ninth!=0)
					if(root->tenth->ninth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
				if(root->tenth->tenth!=0)
					if(root->tenth->tenth->name==name2)
					{
						std::cout<<name2<<" is grandson of "<<name1<<std:: endl;
						flag=1;
					}
		}
	
	}
	if(flag==0 && root->first!=0)
		findGrandsonRelative(name1,name2,root->first);
	if(flag==0 && root->second!=0)
		findGrandsonRelative(name1,name2,root->second);
	if(flag=0 && root->third!=0)
		findGrandsonRelative(name1,name2,root->third);
	if(flag==0 && root->fourth!=0)
		findGrandsonRelative(name1,name2,root->fourth);
	if(flag==0 && root->fifth!=0)
		findGrandsonRelative(name1,name2,root->fifth);
	if(flag==0 && root->sixth!=0)
		findGrandsonRelative(name1,name2,root->sixth);
	if(flag==0 && root->seventh!=0)
		findGrandsonRelative(name1,name2,root->seventh);
	if(flag==0 && root->eighth!=0)
		findGrandsonRelative(name1,name2,root->eighth);
	if(flag==0 && root->ninth!=0)
		findGrandsonRelative(name1,name2,root->ninth);
	if(flag==0 && root->tenth!=0)
		findGrandsonRelative(name1,name2,root->tenth);

	
	}
	}
void preFindGrandfatherRelative(string name1,string name2,Tree*& root,string*& tempArray)
{
	int flag1=0;
	int flag2=0;
	if(root!=0)
	{
		int index=0;
		ChekRepetition1(root,tempArray,index);
		for(int i=0;i<Tree::length;i++)
			if(tempArray[i]==name1)
				flag1=1;
		for(int i=0;i<Tree::length;i++)
			if(tempArray[i]==name2)
				flag2=1;
		if(flag1==0)
			std::cout<<name1<<" doesn't exist in Tree"<<std::endl;
		if(flag2==0)
			std:: cout<<name2<<" doesn't exist in Tree"<<std:: endl;
		if(flag1==1 && flag2==1)
			findGrandfather(name1,name2,root);
	}
	else
		cout<<"Tree is empty"<<std::endl;

}
void findGrandfather(string name1,string name2,Tree* &root)
{
	int flag=0;
	if(root!=0)
	{
		if(root->name==name1)
		{
			if(root->first!=0)
			{
			if(root->first->first!=0)
			if(root->first->first->name==name2)
			{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
			}
			if(root->first->second!=0)
			if(root->first->second->name==name2)
			{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
			}
			if(root->first->third!=0)
				if(root->first->third->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->first->fourth!=0)
				if(root->first->fourth->name==name2)
				{
				std:: cout<<name1<<" is grandfahther of "<<name2<<std::endl;
				flag=1;
				}
			if(root->first->fifth!=0)
				if(root->first->fifth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->first->sixth!=0)
				if(root->first->sixth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->first->seventh!=0)
				if(root->first->seventh->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->first->eighth!=0)
				if(root->first->eighth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->first->ninth!=0)
				if(root->first->ninth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->first->tenth!=0)
				if(root->first->tenth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			}
			if(root->second!=0)
			{
			if(root->second->first!=0)
				if(root->second->first->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->second->second!=0)
				if(root->second->second->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->second->third!=0)
				if(root->second->third->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}

			if(root->second->fourth!=0)
				if(root->seconth->fourth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->second->fifith!=0)
				if(root->second->fifth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->second->sixth!=0)
				if(root->second->sixth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->second->seventh!=0)
				if(root->second->seventh->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->second->eighth!=0)
				if(root->second->eighth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->second->ninth!=0)
				if(root->second->ninth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			if(root->seconth->tenth!=0)
				if(root->second->tenth->name==name2)
				{
				std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
				flag=1;
				}
			}
			//////
			if(root->third!=0)
			{
				if(root->third->first!=0)
					if(root->third->first->name==name2)
					{
						std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
				if(root->third->second!=0)
					if(root->third->second->name==name2)
					{
						std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
				if(root->third->third!=0)
					if(root->third->third->name==name2)
					{
						std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
				if(root->third->fourth!=0)
					if(root->third->fourth->name==name2)
					{
						std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
				if(root->third->fifth!=0)
					if(root->third->fifth->name==name2)
					{
						std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
				if(root->third->sixth!=0)
					if(root->third->sixth->name==name2)
					{
						std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
				if(root->third->seventh!=0)
					if(root->third->seenth->name==name2)
					{
						std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
				if(root->third->eighth!=0)
					if(root->third->eighth->name==name2)
					{
						std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
				if(root->third->ninth!=0)
					if(root->third->ninth->name==name2)
					{
						std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
				if(root->third->tenth!=0)
					if(root->third->tenth->name==name2)
					{
						std:: cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
			}
			if(root->fourth!=0)
			{
				if(root->fourth->first!=0)
					if(root->fourth->first->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fourth->seconth!=0)
					if(root->fourth->second->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fourth->third!=0)
					if(root->fourth->third->name==name2)
					{
						std::cout<<name1<<" is grandfhather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fourth->fourth!=0)
					if(root->fourth->fourth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fourth->fifth!=0)
					if(root->fourth->fifth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fourth->six!=0)
					if(root->fourth->six->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fourth->seventh!=0)
					if(root->fourth->seventh->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fourth->eighth!=0)
					if(root->fourth->eighth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fourth->ninth!=0)
					if(root->fourth->ninth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fourth->tenth!=0)
					if(root->fourth->tenth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
			}
			if(root->fifth!=0)
			{
				if(root->fifth->first!=0)
					if(root->fifth->first->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fifth->second!=0)
					if(root->fifth->second->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fifth->third!=0)
					if(root->fifth->third->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fifth->fourth!=0)
					if(root->fifth->fourth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fifth->fifth!=0)
					if(root->fifth->fifth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fifth->sixth!=0)
					if(root->fifth->sixth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fifth->seventh!=0)
					if(root->fifth->seventh->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fifth->eighth!=0)
					if(root->fifth->eighth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->fifth->ninth!=0)
					if(root->fifth->ninth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=0;
					}
				if(root->fifth->tenth!=0)
					if(root->fifth->tenth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}

			}
			if(root->sixth!=0)
			{
				if(root->sixth->first!=0)
					if(root->sixth->first->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->sixth->second!=0)
					if(root->sixth->second->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->sixth->third!=0)
					if(root->sixth->third->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->sixth->fourth!=0)
					if(root->sixth->fourth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->sixth->fifth!=0)
					if(root->sixth->fifth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->sixth->sixth!=0)
					if(root->sixth->sixth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->sixth->seventh!=0)
					if(root->sixth->seventh->name==name2)
					{
						std::cout<<name2<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->sixth->eighth!=0)
					if(root->sixth->eighth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->sixth->ninth!=0)
					if(root->sixth->ninth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->sixth->tenth!=0)
					if(root->sixth->tenth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
			}

			
		if(root->seventh!=0)
			{
				if(root->seventh->first!=0)
					if(root->seventh->first->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->seventh->second!=0)
					if(root->seventh->second->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->seventh->third!=0)
					if(root->seventh->third->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->seventh->fourth!=0)
					if(root->seventh->fourth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std::endl;
						flag=1;
					}
				if(root->seventh->fifth!=0)
					if(root->seventh->fifth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->seventh->sixth!=0)
					if(root->seventh->sixth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->seventh->seventh!=0)
					if(root->seventh->seventh->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->seventh->eighth!=0)
					if(root->seventh->eighth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->seventh->ninth!=0)
					if(root->seventh->ninth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->seventh->tenth!=0)
					if(root->seventh->tenth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
			}

		if(root->eighth!=0)
			{
				if(root->eighth->first!=0)
					if(root->eighth->first->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->eighth->second!=0)
					if(root->eighth->second->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->eighth->third!=0)
					if(root->eighth->third->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->eighth->fourth!=0)
					if(root->eighth->fourth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->eighth->fifth!=0)
					if(root->eighth->fifth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->eighth->sixth!=0)
					if(root->eighth->sixth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->eighth->seventh!=0)
					if(root->eighth->seventh->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->eighth->eighth!=0)
					if(root->eighth->eighth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->eighth->ninth!=0)
					if(root->eighth->ninth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->eighth->tenth!=0)
					if(root->eighth->tenth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
			}

		if(root->ninth!=0)
			{
				if(root->ninth->first!=0)
					if(root->ninth->first->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->ninth->second!=0)
					if(root->ninth->second->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->ninth->third!=0)
					if(root->ninth->third->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->ninth->fourth!=0)
					if(root->ninth->fourth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->ninth->fifth!=0)
					if(root->ninth->fifth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->ninth->sixth!=0)
					if(root->ninth->sixth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->ninth->seventh!=0)
					if(root->eninth->seventh->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->ninth->eighth!=0)
					if(root->ninth->eighth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->ninth->ninth!=0)
					if(root->ninth->ninth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->ninth->tenth!=0)
					if(root->ninth->tenth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
			}
		if(root->tenth!=0)
			{
				if(root->tenth->first!=0)
					if(root->tenth->first->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->tenth->second!=0)
					if(root->tenth->second->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->tenth->third!=0)
					if(root->tenth->third->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->tenth->fourth!=0)
					if(root->tenth->fourth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->tenth->fifth!=0)
					if(root->tenth->fifth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->tenth->sixth!=0)
					if(root->tenth->sixth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->tenth->seventh!=0)
					if(root->tenth->seventh->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->tenth->eighth!=0)
					if(root->tenth->eighth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->tenth->ninth!=0)
					if(root->tenth->ninth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
				if(root->tenth->tenth!=0)
					if(root->tenth->tenth->name==name2)
					{
						std::cout<<name1<<" is grandfather of "<<name2<<std:: endl;
						flag=1;
					}
		}
	
	}
	if(flag==0 && root->first!=0)
		findGrandfatherRelative(name1,name2,root->first);
	if(flag==0 && root->second!=0)
		findGrandfatherRelative(name1,name2,root->second);
	if(flag=0 && root->third!=0)
		findGrandfatherRelative(name1,name2,root->third);
	if(flag==0 && root->fourth!=0)
		findGrandfatherRelative(name1,name2,root->fourth);
	if(flag==0 && root->fifth!=0)
		findGrandfatherRelative(name1,name2,root->fifth);
	if(flag==0 && root->sixth!=0)
		findGrandfatherRelative(name1,name2,root->sixth);
	if(flag==0 && root->seventh!=0)
		findGrandfatherRelative(name1,name2,root->seventh);
	if(flag==0 && root->eighth!=0)
		findGrandfatherRelative(name1,name2,root->eighth);
	if(flag==0 && root->ninth!=0)
		findGrandfatherRelative(name1,name2,root->ninth);
	if(flag==0 && root->tenth!=0)
		findGrandfatherRelative(name1,name2,root->tenth);

	
	}

}
void prefindCousinRelative(string name1,string name2,Tree*& root,string *&tempArray)
{
	int flag=0;
	int flag1=0;
	if(root!=0)
	{
		int index=0;
		ChekRepetition1(root,tempArray,index);
		for(int i=0;i<Tree::length;i++)
			if(tempArray[i]==name1)
				flag=1;
		for(int i=0;i<Tree::length;i++)
			if(tempArray[i]==name2)
				flag1=1;
		if(flag1==0)
			std::cout<<name1<<" doesn't exist in Tree"<<std::endl;
		if(flag2==0)
			std:: cout<<name2<<" doesn't exist in Tree"<<std:: endl;
		if(flag1==1 && flag2==1)
			findCousinRelative(name1,name2,root);
	}
	else
		cout<<"Tree is empty"<<std::endl;



}
void findCousinRelative(string name1,string name2,Tree *& root)
{
	int flag=0;
	if(root!=0)
	{
		if(root->first!=0)
			if(root->first->first!=0)
				if(root->first->first->name==name1)
				{
					if(root->second!=0)
					{
						if(root->second->first!=0)
						if(root->second->first->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}

				if(root->second->second!=0)
				if(root->second->second->name==name2)
				{
					std::cout<<name1<<" is cousin of "<<name2<<std::endl;
					flag=1;
				}
					
				if(root->second->third!=0)
					if(root->second->third->name==name2)
					{
						std::cout<<name1<<" is cousin of "<<name2<<std::endl;
						flag=1;
					}
					if(root->second->fourth!=0)
						if(root->second->fourth->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}
						if(root->second->fifth!=0)
							if(root->second->fifth->name==name2)
							{
								std::cout<<name1<<" is cousin of "<<name2<<std::endl;
								flag=1;
							}
							if(root->second->sixth!=0)
								if(root->second->sixth->name==name2)
								{
									std::cout<<name1<<" is cousin of "<<name2<<std::endl;
									flag=1;
								}
								if(root->second->seventh!=0)
									if(root->second->seventh->name==name1)
									{
										std::cout<<name1<<" is cousin of "<<name2<<std::endl;
										flag=1;
									}
									if(root->second->eighth!=0)
										if(root->second->eighth->name==name2)
										{
											std::cout<<name1<<" is cousin of "<<name2<<std::endl;
											flag=1;
										}
										if(root->second->ninth!=0)
											if(root->second->ninth->name==name2)
											{
												std::cout<<" is cousin of "<<name2<<std::endl;
												flag=1;
											}
											if(root->second->tenth!=0)
												if(root->second->tenth->name==name2)
												{
													std::cout<<name1<<" is cousin of "<<name2<<std::endl;
													flag=1;
												}
					}
					if(root->third!=0)
					{
						if(root->third->firs!=0)
						if(root->third->first->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}

				if(root->third->second!=0)
				if(root->third->second->name==name2)
				{
					std::cout<<name1<<" is cousin of "<<name2<<std::endl;
					flag=1;
						}
				if(root->third->third!=0)
					if(root->third->third->name==name2)
					{
						std::cout<<name1<<" is cousin of "<<name2<<std::endl;
						flag=1;
					}
					if(root->third->fourth!=0)
						if(root->third->fourth->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}
						if(root->third->fifth!=0)
							if(root->third->fifth->name==name2)
							{
								std::cout<<name1<<" is cousin of "<<name2<<std::endl;
								flag=1;
							}
							if(root->third->sixth!=0)
								if(root->third->sixth->name==name2)
								{
									std::cout<<name1<<" is cousin of "<<name2<<std::endl;
									flag=1;
								}
								if(root->third->seventh!=0)
									if(root->third->seventh->name==name1)
									{
										std::cout<<name1<<" is cousin of "<<name2<<std::endl;
										flag=1;
									}
									if(root->third->eighth!=0)
										if(root->third->eighth->name==name2)
										{
											std::cout<<name1<<" is cousin of "<<name2<<std::endl;
											flag=1;
										}
										if(root->third->ninth!=0)
											if(root->third->ninth->name==name2)
											{
												std::cout<<" is cousin of "<<name2<<std::endl;
												flag=1;
											}
											if(root->third->tenth!=0)
												if(root->third->tenth->name==name2)
												{
													std::cout<<name1<<" is cousin of "<<name2<<std::endl;
													falg=1;
												}
					}
					if(root->fourth!=0)
					{
						if(root->fourth->firs!=0)
						if(root->fourth->first->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}

				if(root->fourth->second!=0)
				if(root->fourth->second->name==name2)
				{
					std::cout<<name1<<" is cousin of "<<name2<<std::endl;
					flag=1;
						}
				if(root->fourth->third!=0)
					if(root->fourth->third->name==name2)
					{
						std::cout<<name1<<" is cousin of "<<name2<<std::endl;
						flag=1;
					}
					if(root->fourth->fourth!=0)
						if(root->fourth->fourth->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}
						if(root->fourth->fifth!=0)
							if(root->fourth->fifth->name==name2)
							{
								std::cout<<name1<<" is cousin of "<<name2<<std::endl;
								flag=1;
							}
							if(root->fourth->sixth!=0)
								if(root->fourth->sixth->name==name2)
								{
									std::cout<<name1<<" is cousin of "<<name2<<std::endl;
									flag=1;
								}
								if(root->fourth->seventh!=0)
									if(root->fourth->seventh->name==name1)
									{
										std::cout<<name1<<" is cousin of "<<name2<<std::endl;
										flag=1;
									}
									if(root->fourth->eighth!=0)
										if(root->fourth->eighth->name==name2)
										{
											std::cout<<name1<<" is cousin of "<<name2<<std::endl;
											flag=1;
										}
										if(root->fourth->ninth!=0)
											if(root->fourth->ninth->name==name2)
											{
												std::cout<<" is cousin of "<<name2<<std::endl;
												flag=1;
											}
											if(root->fourth->tenth!=0)
												if(root->fourth->tenth->name==name2)
												{
													std::cout<<name1<<" is cousin of "<<name2<<std::endl;
													flag=1;
												}
					}
					if(root->fifth!=0)
					{
						if(root->fifth->first!=0)
						if(root->fifth->first->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}

				if(root->fifth->second!=0)
				if(root->fifth->second->name==name2)
				{
					std::cout<<name1<<" is cousin of "<<name2<<std::endl;
					flag=1;
						}
				if(root->fifth->third!=0)
					if(root->fifth->third->name==name2)
					{
						std::cout<<name1<<" is cousin of "<<name2<<std::endl;
						flag=1;
					}
					if(root->fifth->fourth!=0)
						if(root->fifth->fourth->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}
						if(root->fifth->fifth!=0)
							if(root->fifth->fifth->name==name2)
							{
								std::cout<<name1<<" is cousin of "<<name2<<std::endl;
								flag=1;
							}
							if(root->fifth->sixth!=0)
								if(root->fifth->sixth->name==name2)
								{
									std::cout<<name1<<" is cousin of "<<name2<<std::endl;
									flag=1;
								}
								if(root->fifth->seventh!=0)
									if(root->fifth->seventh->name==name1)
									{
										std::cout<<name1<<" is cousin of "<<name2<<std::endl;
										flag=1;
									}
									if(root->fifth->eighth!=0)
										if(root->fifth->eighth->name==name2)
										{
											std::cout<<name1<<" is cousin of "<<name2<<std::endl;
											flag=1;
										}
										if(root->fifth->ninth!=0)
											if(root->fifth->ninth->name==name2)
											{
												std::cout<<" is cousin of "<<name2<<std::endl;
												flag=1;
											}
											if(root->fifth->tenth!=0)
												if(root->fifth->tenth->name==name2)
												{
													std::cout<<name1<<" is cousin of "<<name2<<std::endl;
													flag=1;
												}
					}
					if(root->sixth!=0)
					{
						if(root->sixth->first!=0)
						if(root->sixth->first->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}

				if(root->sixth->second!=0)
				if(root->sixth->second->name==name2)
				{
					std::cout<<name1<<" is cousin of "<<name2<<std::endl;
					flag=1;
						}
				if(root->sixth->third!=0)
					if(root->sixth->third->name==name2)
					{
						std::cout<<name1<<" is cousin of "<<name2<<std::endl;
						flag=1;
					}
					if(root->sixth->fourth!=0)
						if(root->sixth->fourth->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}
						if(root->sixth->fifth!=0)
							if(root->sixth->fifth->name==name2)
							{
								std::cout<<name1<<" is cousin of "<<name2<<std::endl;
								flag=1;
							}
							if(root->sixth->sixth!=0)
								if(root->sixth->sixth->name==name2)
								{
									std::cout<<name1<<" is cousin of "<<name2<<std::endl;
									flag=1;
								}
								if(root->sixth->seventh!=0)
									if(root->sixth->seventh->name==name1)
									{
										std::cout<<name1<<" is cousin of "<<name2<<std::endl;
										flag=1;
									}
									if(root->sixth->eighth!=0)
										if(root->sixth->eighth->name==name2)
										{
											std::cout<<name1<<" is cousin of "<<name2<<std::endl;
											flag=1;
										}
										if(root->sixth->ninth!=0)
											if(root->sixth->ninth->name==name2)
											{
												std::cout<<" is cousin of "<<name2<<std::endl;
												flag=1;
											}
											if(root->sixth->tenth!=0)
												if(root->sixth->tenth->name==name2)
												{
													std::cout<<name1<<" is cousin of "<<name2<<std::endl;
													flag=1;
												}
					}
					if(root->seventh!=0)
					{
						if(root->seventh->first!=0)
						if(root->seventh->first->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}

				if(root->seventh->second!=0)
				if(root->seventh->second->name==name2)
				{
					std::cout<<name1<<" is cousin of "<<name2<<std::endl;
					flag=1;
						}
				if(root->seventh->third!=0)
					if(root->seventh->third->name==name2)
					{
						std::cout<<name1<<" is cousin of "<<name2<<std::endl;
						flag=1;
					}
					if(root->seventh->fourth!=0)
						if(root->seventh->fourth->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}
						if(root->seventh->fifth!=0)
							if(root->seventh->fifth->name==name2)
							{
								std::cout<<name1<<" is cousin of "<<name2<<std::endl;
								flag=1;
							}
							if(root->seventh->sixth!=0)
								if(root->seventh->sixth->name==name2)
								{
									std::cout<<name1<<" is cousin of "<<name2<<std::endl;
									flag=1;
								}
								if(root->seventh->seventh!=0)
									if(root->seventh->seventh->name==name1)
									{
										std::cout<<name1<<" is cousin of "<<name2<<std::endl;
										flag=1;
									}
									if(root->seventh->eighth!=0)
										if(root->seventh->eighth->name==name2)
										{
											std::cout<<name1<<" is cousin of "<<name2<<std::endl;
											flag=1;
										}
										if(root->seventh->ninth!=0)
											if(root->seventh->ninth->name==name2)
											{
												std::cout<<" is cousin of "<<name2<<std::endl;
												flag=1;
											}
											if(root->seventh->tenth!=0)
												if(root->seventh->tenth->name==name2)
												{
													std::cout<<name1<<" is cousin of "<<name2<<std::endl;
													flag=1;
												}
					}

					
					if(root->eighth!=0)
					{
						if(root->eighth->first!=0)
						if(root->eighth->first->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}

				if(root->eighth->second!=0)
				if(root->eighth->second->name==name2)
				{
					std::cout<<name1<<" is cousin of "<<name2<<std::endl;
					flag=1;
						}
				if(root->eighth->third!=0)
					if(root->eighth->third->name==name2)
					{
						std::cout<<name1<<" is cousin of "<<name2<<std::endl;
						flag=1;
					}
					if(root->eighth->fourth!=0)
						if(root->eighth->fourth->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}
						if(root->eighth->fifth!=0)
							if(root->eighth->fifth->name==name2)
							{
								std::cout<<name1<<" is cousin of "<<name2<<std::endl;
								flag=1;
							}
							if(root->eighth->sixth!=0)
								if(root->eighth->sixth->name==name2)
								{
									std::cout<<name1<<" is cousin of "<<name2<<std::endl;
									flag=1;
								}
								if(root->eighth->seventh!=0)
									if(root->eighth->seventh->name==name1)
									{
										std::cout<<name1<<" is cousin of "<<name2<<std::endl;
										flag=1;
									}
									if(root->eighth->eighth!=0)
										if(root->eighth->eighth->name==name2)
										{
											std::cout<<name1<<" is cousin of "<<name2<<std::endl;
											flag=1;
										}
										if(root->eighth->ninth!=0)
											if(root->eighth->ninth->name==name2)
											{
												std::cout<<" is cousin of "<<name2<<std::endl;
												flag=1;
											}
											if(root->eighth->tenth!=0)
												if(root->eighth->tenth->name==name2)
												{
													std::cout<<name1<<" is cousin of "<<name2<<std::endl;
													flag=1;
												}
					}
					
					if(root->ninth!=0)
					{
						if(root->ninth->first!=0)
						if(root->ninth->first->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}

				if(root->ninth->second!=0)
				if(root->ninth->second->name==name2)
				{
					std::cout<<name1<<" is cousin of "<<name2<<std::endl;
					flag=1;
						}
				if(root->ninth->third!=0)
					if(root->ninth->third->name==name2)
					{
						std::cout<<name1<<" is cousin of "<<name2<<std::endl;
						flag=1;
					}
					if(root->ninth->fourth!=0)
						if(root->ninth->fourth->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}
						if(root->ninth->fifth!=0)
							if(root->ninth->fifth->name==name2)
							{
								std::cout<<name1<<" is cousin of "<<name2<<std::endl;
								flag=1;
							}
							if(root->ninth->sixth!=0)
								if(root->ninth->sixth->name==name2)
								{
									std::cout<<name1<<" is cousin of "<<name2<<std::endl;
									flag=1;
								}
								if(root->ninth->seventh!=0)
									if(root->ninth->seventh->name==name1)
									{
										std::cout<<name1<<" is cousin of "<<name2<<std::endl;
										flag=1;
									}
									if(root->ninth->eighth!=0)
										if(root->ninth->eighth->name==name2)
										{
											std::cout<<name1<<" is cousin of "<<name2<<std::endl;
											flag=1;
										}
										if(root->ninth->ninth!=0)
											if(root->ninth->ninth->name==name2)
											{
												std::cout<<" is cousin of "<<name2<<std::endl;
												flag=1;
											}
											if(root->ninth->tenth!=0)
												if(root->ninth->tenth->name==name2)
												{
													std::cout<<name1<<" is cousin of "<<name2<<std::endl;
													flag=1;
												}
					}

					if(root->tenth!=0)
					{
						if(root->tenth->first!=0)
						if(root->tenth->first->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}

				if(root->tenth->second!=0)
				if(root->tenth->second->name==name2)
				{
					std::cout<<name1<<" is cousin of "<<name2<<std::endl;
					flag=1;
						}
				if(root->tenth->third!=0)
					if(root->tenth->third->name==name2)
					{
						std::cout<<name1<<" is cousin of "<<name2<<std::endl;
						flag=1;
					}
					if(root->tenth->fourth!=0)
						if(root->tenth->fourth->name==name2)
						{
							std::cout<<name1<<" is cousin of "<<name2<<std::endl;
							flag=1;
						}
						if(root->tenth->fifth!=0)
							if(root->tenth->fifth->name==name2)
							{
								std::cout<<name1<<" is cousin of "<<name2<<std::endl;
								flag=1;
							}
							if(root->tenth->sixth!=0)
								if(root->tenth->sixth->name==name2)
								{
									std::cout<<name1<<" is cousin of "<<name2<<std::endl;
									flag=1;
								}
								if(root->tenth->seventh!=0)
									if(root->tenth->seventh->name==name1)
									{
										std::cout<<name1<<" is cousin of "<<name2<<std::endl;
										flag=1;
									}
									if(root->tenth->eighth!=0)
										if(root->tenth->eighth->name==name2)
										{
											std::cout<<name1<<" is cousin of "<<name2<<std::endl;
											flag=1;
										}
										if(root->tenth->ninth!=0)
											if(root->tenth->ninth->name==name2)
											{
												std::cout<<" is cousin of "<<name2<<std::endl;
												flag=1;
											}
											if(root->tenth->tenth!=0)
												if(root->tenth->tenth->name==name2)
												{
													std::cout<<name1<<" is cousin of "<<name2<<std::endl;
													flag=1;
												}
					}
					}
					
					}
					}