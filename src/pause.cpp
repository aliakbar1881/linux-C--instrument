#include <iostream>
#include <string>
using namespace std;

class Instrument
{
protected:
	string filename, outputfile;
	string run_command;
public:
	Instrument()
	{
		cout << "enter your C++ program name . . .\n -> ";
		cin >> filename;
		cout << endl;
		cout << "enter your output binary file . . . \n ->";
		cin >> outputfile;
	}

	string  command_maker();

	void runner()
	{
		run_command = "g++ -o " + outputfile + " " + filename;
		const char *c = run_command.c_str();
		system(c);
	}
	 void pause()
	 {
		cout << "Press any key to continue  . . .";
		cin.ignore().get();
	 }
};

int main(){
	Instrument my_run_time;
	system("clear");
	my_run_time.runner();
	my_run_time.pause();
	return 0;
}

