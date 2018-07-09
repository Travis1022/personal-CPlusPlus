#include "Main.h"

using namespace std;

int main(){
    
	CMatch MyCMatch;
	char* pRawSdp="Watch Movies";
	char* folderName = "Movies";
	char* replaceName = "127.0.0.1";
	cout << MyCMatch.ReplaceString(pRawSdp,folderName,replaceName) << endl;
   
    system("pause");
	return 0;
}

