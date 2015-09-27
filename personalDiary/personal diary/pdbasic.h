#include <fstream>
#include <string>
#include <map>
using std::string;

class pdbasic
{
public:
	void fileOpen(std::ifstream& in);
	void fileSave(std::map<int, string> pdDateToContent, std::ofstream& out);
	std::map<int, string> dateToContent;
};
