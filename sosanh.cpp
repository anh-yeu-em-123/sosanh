#include <iostream>
using namespace std;

int main() {
	int a;
	cout << " so sanh do dep trai giua an va thanh:" << endl;
	cout << "neu thay an dep trai hon, bam phim 1" << endl;
	cout << " neu thay thanh dep trai hon, bam phim 2" << endl;
	while (true) {
		cin >> a;
		if (a == 1) {
			cout << "mat nhin ng rat chuan day ban";
			break;
		}
		else if (a == 2) {
			cout << "mat m mu a????" << endl << "cho m chon lai";
		}
		else {
			cout << "chon 1 hoac 2 ho bo m cai!!";
		}
	}
	return 0;
}
