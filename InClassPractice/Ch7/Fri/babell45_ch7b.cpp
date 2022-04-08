#include <iostream>
using namespace std;

void getData(int, int*, int**, string*);
int getTotal(int, int*, int**);

int main()
{
	int numPeople;
	int total = 0;
	int* numCoasters;
	int** injuriesArray;
	string* names;
	
	cout << "\n\nHow many customers visited Dollywood yesterday?  ";
	cin >> numPeople;
	
	numCoasters = new int[numPeople];
	injuriesArray = new int*[numPeople];
	names = new string[numPeople];
	
	getData(numPeople, numCoasters, injuriesArray, names);

	total = getTotal(numPeople, numCoasters, injuriesArray);
	
	cout << "\n\nThe total number of injuries is: " << total;
	cout << endl << endl;
	
	delete [] numCoasters;
	for(int i=0; i<numPeople; i++)
	{
		delete [] injuriesArray[i];
	}
	delete [] injuriesArray;
	
	return 0;
}

void getData(int numPeople, int* numCoasters, int** injuriesArray, string* names)
{
	//get input from user
	for(int i=0; i < numPeople; i++)
	{
		cout << "\nWhat is customer " << i+1 << "\'s name?  ";
		cin.ignore();
		getline(cin, names[i]);
		cout << "\nHow many roller coasters did " << names[i] << " ride?  ";
		cin >> numCoasters[i];
		injuriesArray[i] = new int[numCoasters[i]];
		cout << "\nPlease enter in the injuries " << names[i] << " got on each coaster.\n";
		for(int j=0; j < numCoasters[i]; j++)
		{
			cout << "ROLLER COASTER " << j+1 << ": ";
			cin >> injuriesArray[i][j];	
		}
	}
}
int getTotal(int numPeople, int* numCoasters, int** injuriesArray)
{
	int total = 0;
	//adding up all the injuries of all customers of all rollar coasters
	for(int i=0; i < numPeople; i++)
	{
		for(int j=0; j < numCoasters[i]; j++)
		{
			total = total + injuriesArray[i][j];
		}
	}
	return total;
}












