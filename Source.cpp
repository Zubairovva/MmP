#include <iostream> 
#include <cmath> 

using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    
	string text;
    int position = -2;
	cout << "������� ������ �� ����������*:\n";
	cin >> text;
	for(int i=0, limit= text.size(); i < limit; ++i)
	{
		if(text[i] == 'f' || text[i] == 'F')
		{
			++position;
			if(position == 0)
			{
				position = i;
				break;
			}
		}
	}
	cout << "������ ����� ���������: " << position << "\n";  
    system("pause");
}