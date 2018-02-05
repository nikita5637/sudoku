#include <ctime>
#include "field.h"
#include <stdio.h>
#include "getch.h"

bool game(int size)
{
	enum direct {Left = 75 , Right = 77, Up = 72 , Down = 80};
	field field(size);
	char command = '0';
	field.set_difficulty();
	field.generate_field();
	while (!field.check())
	{
		try
		{
			system("clear"); 
			field.print_field(false);
			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0B);
			printf("%s\n%s\n", "Press 'w', 'a', 's', 'd' for move and press keys '1..9' for enter number.", "Press 'q' for exit / 'r' for restart.");
			command = getch();
			switch (command)
			{
				//case Down:
				case 's':
					{
						field.movedown();
						break;
					}
				//case Up:
				case 'w':
					{
						field.moveup();
						break;
					}
				//case Right:
				case 'd':
					{
						field.moveright();
						break;
					}
				//case Left:
				case 'a':
					{
						field.moveleft();
						break;
					}
				case 'h':
					{
						system("clear");
						field.print_field(true);
						system("pause");
						cin.get();
						break;
					}
				case ' ':
					{
						unsigned short i;
						if (field.taken())
						{
							printf("%s%d\n", "Enter number 1..", size);
							cin>>i;
							if (cin.fail() || (i > size) || (i < 0))
							{
								throw "Enter correct number!";
							}
							field.set_number(i);
						}
						break;
					}
				case 'q':
					{
						printf("%s\n", "You really want to quit?(y for quit/other for continue)");
						char command;
						cin>>command;
						if (command == 'y')
						{
							return false;
						}
						cin.sync();
						cin.clear();
						break;
					}
				case 'r':
					{
						printf("%s\n", "You really want to restart?(y for quit/other for continue)");
						char command;
						cin>>command;
						if (command == 'y')
						{
							system("clear");
							return true;
						}
						cin.sync();
						cin.clear();
						break;
					}
				case '0':
				{
					field.set_number(0);
					break;
				}
			}
		}
		catch (const char * error)			
		{
			printf("%s\n", error);
			system("pause");
			cin.get();
			cin.sync();
			cin.clear();
		}
	}
	system("pause");
	cin.get();
	system("clear");
	return true;
}

int main()
{	
	srand(time(0));
	unsigned short size = 0;
	while (1 == 1)
	{
		try
		{
			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0F);
			printf("%s\n", "Select size: 4 or 9 or 16");
			cin>>size;
			if (cin.fail() || (!(size == 9) && !(size == 16) && !(size == 4)))
			{
				throw "Enter correct size";
			}
			if (!game(size))
			{
				printf("%s\n", "Bye bye!");
				system("pause");
				cin.get();
				return 0;
			}
		}
		catch (const char * error)
		{
			printf("%s\n", error);
			system("pause");
			cin.get();
			cin.sync();
			cin.clear();
			system("clear");
		}	
	}
}
