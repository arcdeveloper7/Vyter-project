#include <iostream>
#include <windows.h>

using namespace std;
int main(){
	system("color 0a");
	cout << "[1] Low\n";
	cout << "[2] Medium\n";
	cout << "[3] High\n";
	string treshold;
	cout << "\ATK\>>";
	getline(cin ,treshold);
	
	if (treshold == "1"){
		cout << "Using 4 threads";
		  Beep(1200,500);
		  Beep(1200,500);
	system("start %CD%\\sys\\ATK_L.bat");
}
	if (treshold == "2"){
		cout << "Using 14 threads";
		  Beep(1200,500);
		  Beep(1200,500);
	system("start %CD%\\sys\\ATK_M.bat");
}
	if (treshold == "3"){
		cout << "Using 32 threads";
		  Beep(1200,500);
		  Beep(1200,500);
	system("start %CD%\\sys\\ATK_L.bat");
   }		
}
