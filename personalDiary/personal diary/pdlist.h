#include <string>
#include <map>
using std::string;

class pdlist
{
public:
	void list(int startDate, int endDate, std::map<int, string> pdDateToContent);
	void list(std::map<int, string> pdDateToContent);
};
