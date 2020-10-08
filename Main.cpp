#include<iostream>
#include<conio.h>
using namespace std;
//*********GLOBALS********************************************
bool rootguard = false;
struct member
{
	char name[10];
	member* pointertomember[10];//with defult
};
member*temp1;
member*head;
char* countofwords[10];
int countofword;
char name[10];
char secondname[10];
int countofchildren;
//********FUNCTIONS********************
void orderandrecognize();
void root( char []);
void createchild(char[],char[]);
member* search(char[],member*);
//********THE MAIN FUNCTION**************************************************
int main()
{
	cout << "\t\ttwelcome to the genealogy program!" << endl;
	cout << "you should write the orders,put a dot at the end and press enter.to start please write like this:" << endl;
	cout << "create root name." << endl;
	cout << "the system is not sensetive with capital and small words.so be comfortable! :D" << endl;
	orderandrecognize();
	_getch();
}

//**************ORDER AND RECOGNIZE FUNCTION*************
void orderandrecognize()
{
	int temp = 1;
	char order[100];
	char* p;
	char* countofwords[10];
	cout << "write the order:" << endl;
	cin.getline(order, 100, '.');
	cin.ignore(2);
	countofwords[0] = order;
	int count = 0;
	for (p = order; *p != '\0'; p++)
	{
		if (*p == ' ')
		{
			temp = temp + 1;
			*p = '\0'; //end of the word!
			countofwords[++count] = p + 1;//begin next word!


		}
	}
	for (int i = 0; i < temp;i++)
	{
		cout << countofwords[i];
	}
	if (temp<2 || temp>6)
	{
		cout << "the order is not true.try again! IS HERE" << endl;
		orderandrecognize();
	}
	else
	{
		if (temp == 2)
		{
			if (strcmp(countofwords[0], "remove") == 0)
			{
				if (rootguard == true)
					/*remove();*/cout << "remove()";
				else
				{
					cout << "we have no root yet!please create a root!write the order again.1" << endl;
					orderandrecognize();
				}
			}
			else
			{
				cout << "the order is not true.try again2!" << endl;
				cout << countofwords[0];
				orderandrecognize();
			}
		}
		else if (temp == 3)
		{
			if (strcmp(countofwords[0], "create") == 0)
			{
				if (strcmp(countofwords[1], "root") == 0)
				{
					if (rootguard == false)
					{
						rootguard = true;
						strcpy_s(name, countofwords[2]);
						root(name);

					}
					else
					{
						cout << "we have a root!write another order.3" << endl;
						orderandrecognize();
					}
				}
				else
				{
					cout << "the order is not true.try again!4" << endl;
					orderandrecognize();
				}

			}
			else
			{

				cout << "the order is not true.try again!5" << endl;
				orderandrecognize();
			}
		}
		else if (temp == 4)
		{
			if (strcmp(countofwords[0], "who") == 0)
			{
				if (strcmp(countofwords[1], "is") == 0)
				{
					if (strcmp(countofwords[3], "parent") == 0)
					{
						if (rootguard == true)
							/*whoisparent();*/cout << "whoisparent()";
						else
						{
							cout << "we have no root yet!please create a root!write the order again.6" << endl;
							orderandrecognize();

						}
					}
					else if (strcmp(countofwords[3], "grandfather") == 0)
					{
						if (rootguard == true)
							/*whoisgrandfather();*/cout << "whoisgrandfather()";
						else
						{
							cout << "we have no root yet!please create a root!write the order again.7" << endl;
							orderandrecognize();
						}

					}
					else if (strcmp(countofwords[3], "brother") == 0)
					{
						if (rootguard == true)
							/*whoisbrother();*/cout << "whoisbrother()";
						else
						{
							cout << "we have no root yet!please create a root!write the order again.8" << endl;
							orderandrecognize();
						}
					}

					else
					{
						cout << "the order is not true.try again!9" << endl;
						orderandrecognize();
					}
				}
				else
				{
					cout << "the order is not true.try again!10" << endl;
					orderandrecognize();
				}


			}//end of agar who bood badesh bayad else biad vase in k age who nabud!hamun aval radde!
			else
			{
				cout << "the order is not true.try again!11" << endl;
				orderandrecognize();
			}

		}//end of count=4!
		else if (temp == 5)
		{
			if (strcmp(countofwords[0], "create") == 0)
			{
				if (strcmp(countofwords[3], "for") == 0)
				{
					if (strcmp(countofwords[1], "child") == 0)
					{
						if (rootguard == true)
						{
							strcpy_s(name, countofwords[2]);
							strcpy_s(secondname, countofwords[4]);
							createchild(name,secondname);
						}
						else
						{
							cout << "we have no root yet!please create a root!write the order again.12" << endl;
							orderandrecognize();
						}

					}
					else if (strcmp(countofwords[1], "brother") == 0)
					{

						if (rootguard == true)
							/*createbrother();*/cout << "createbrother()";
						else
						{
							cout << "we have no root yet!please create a root!write the order again.13" << endl;
							orderandrecognize();
						}

					}
					else
					{
						cout << "the order is not true.try again!14" << endl;
						orderandrecognize();
					}


				}
				else
				{

					cout << "the order is not true.try again!15" << endl;
					orderandrecognize();
				}
			}
			else
			{
				cout << "the order is not true.try again!16" << endl;
				orderandrecognize();
			}
		}
		else
		{
			if (strcmp(countofwords[0], "change") == 0)
			{
				if (strcmp(countofwords[4], "to") == 0)
				{
					if (strcmp(countofwords[2], "of") == 0)
					{
						if (strcmp(countofwords[1], "name") == 0)
						{
							if (rootguard == true)
								/*changename();*/cout << "changename()";
							else
							{
								cout << "we have no root yet!please create a root!write the order again.17" << endl;
								orderandrecognize();
							}

						}//end of is changename
						else if (strcmp(countofwords[1], "parent") == 0)
						{
							if (rootguard == true)
								/*changeparentname();*/cout << "changeparentname()";
							else
							{
								cout << "we have no root yet!please create a root!write the order again.18" << endl;
								orderandrecognize();
							}
						}//end of is changeparent
						else
						{
							cout << "the order is not true.try again!19" << endl;
							orderandrecognize();
						}

					}//end of all of the word is ok but name and parent
					else//for of
					{
						cout << "the order is not true.try again!20" << endl;
						orderandrecognize();
					}

				}//for to
				else
				{
					cout << "the order is not true.try again!21" << endl;
					orderandrecognize();
				}

			}//if is not change the first word
			else if (strcmp(countofwords[0], "move") == 0)
			{
				if (strcmp(countofwords[1], "child") == 0)
				{
					if (strcmp(countofwords[2], "of") == 0)
					{
						if (strcmp(countofwords[4], "to") == 0)
						{
							if (rootguard == true)
								/*	move();*/cout << "move()";
							else
							{
								cout << "we have no root yet!please create a root!write the order again.22" << endl;
								orderandrecognize();
							}
						}//for to
						else
						{
							cout << "the order is not true.try again23!" << endl;
							orderandrecognize();
						}
					}//for of
					else
					{
						cout << "the order is not true.try again!24" << endl;
						orderandrecognize();

					}
				}//for child
				else
				{
					cout << "the order is not true.try again!25" << endl;
					orderandrecognize();
				}

			}//after this we shoul chek for relative function
			else if (strcmp(countofwords[0], "who") == 0)
			{
				if (strcmp(countofwords[1], "is") == 0)
				{
					if (strcmp(countofwords[3], "relative") == 0)
					{
						if (strcmp(countofwords[4], "to") == 0)
						{
							if (rootguard == true)
								/*relative();*/cout << "relative()";
							else
							{
								cout << "we have no root yet!please create a root!write the order again.26" << endl;
								orderandrecognize();
							}
						}//for to
						else
						{
							cout << "the order is not true.try again!27" << endl;
							orderandrecognize();
						}
					}//for relative
					else
					{
						cout << "the order is not true.try again!28" << endl;
						orderandrecognize();
					}
				}//for is
				else
				{
					cout << "the order is not true.try again!29" << endl;
					orderandrecognize();
				}
			}//for who and if az kalame avval ghalat bood yani akhare else if hast
			else
			{
				cout << "the order is not true.try again!30" << endl;
				orderandrecognize();
			}
		}//end of count=6
	}//end of else that counts of word
}//end of the order and recognize function!
//*********** ROOT FUNCTION ********
void root( char name[10])
{
	cout << name << "is the head of family!"<<endl;
	head = new member;
	strcpy_s(head->name, name);
	//the root has no children yet!
	for (int j = 0; j <5;j++)
	{
	 head->pointertomember[j]=nullptr;
	}
	cout << head->name << "is created!lets countinue";
		orderandrecognize();
}
//*********CREATE CHILD***************
void createchild(char name[10], char secondname[10])
{
	int x = 0;
	//we should search for second name!
	temp1 = search(secondname,head);
	//temp1 point to the father!
	member* pointertback = temp1;
	for (int j = 0; j <= 9;j++)
	{
		if (temp1->pointertomember[j] == nullptr)
		{
			 temp1->pointertomember[j]=temp1;
			break;
		}
		else
		{
			cout << "he has ten children,we cant create any more!";
			orderandrecognize();
		}
	}
	temp1 = new member;
	strcpy_s(temp1->name, name);
	for (size_t i = 0; i <9; i++)
	{
		temp1->pointertomember[i] == nullptr;

	}
	temp1->pointertomember[9] = pointertback;
	cout << "it was created!";
	orderandrecognize();

}
//*******FUNCTION OF SEARCHING**************
//at first we call the function whit the pointer to head!!!
	 member* search(char searchingname[10],member* searchingpointer)//at first is head
	 {
		cout << "FIRST WE SHOULD SEARCH FOR " << searchingname;
		if (strcmp(searchingname,searchingpointer->name)==0)
		{
			cout << "it was founded!";
			return searchingpointer;
		}
		else
		{
			countofchildren = 0;
			for (size_t i = 0; i < 10,searchingpointer->pointertomember[i] != nullptr; i++)
			{
				countofchildren = countofchildren + 1;
				cout << countofchildren;
			}
			for (size_t i = 0; i < countofchildren,countofchildren!=0; i++)
			{
				searchingpointer = searchingpointer->pointertomember[i];
				search(searchingname, searchingpointer);
			}
		}
		
	}//end of function...

