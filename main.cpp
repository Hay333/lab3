#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	int x;
	string d = "верблюд";
	string da= "верблюда";
	string dov= "верблюдов";
	while(cin >> x) {
		if (x<1||x>100) {
			cout<<"Колличество верблюдов в караване должно не меньше 1 и не больше 100"<<endl;
			continue;
		} else if (x==11||x==12||x==13||x==14) {
			cout<<"В караване было "<<x<<" "<<dov<<endl;
		} else if (x%10==0) {
			cout<<"В караване был "<<x<<" "<<dov<<endl;
		} else if (x%10>=5&&x%10<=9) {
			cout<<"В караване было "<<x<<" "<<dov<<endl;
		} else if (x%10==1) {
			cout<<"В караване было "<<x<<" "<<d<< endl;
		} else if (x%10>=2&&x%10<=4) {
			cout<<"В караване было "<<x<<" "<<da<< endl;
		}
	}
	return 0;
}
