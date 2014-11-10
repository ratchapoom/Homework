#include <iostream>
#include <string>
#include "tree.h"
#include <time.h>  

using namespace std;
void insert_num(Tree<int>& mytree){

	for (int i = 0; i<100; i++)
	{
		mytree.insert(rand() % 101);
	}


}
int main()
{
	Tree<int> mytree, newtree;
	int random;
	int n, value;
	cout << "Enter insertion: ";
	cin >> n;
	mytree.data = new int[n];
	//insert_num(mytree);
	for (int i = 0; i <n; i++){
		random = rand() % 101;
		cout << random << " ";
		mytree.insert(random);
	}

	cout << endl << "The height of unbalance tree is: " << mytree.height() - 1 << endl;
	mytree.inorder();
	for (int i = 0; i <n; i++){
		cout << mytree.data[i] << " ";
	}
	cout << endl;

	newtree.balance(mytree.data, 0, n - 1);
	cout << "New height of the balaced tree is : " << newtree.height() - 1 << endl;

//I can do this homework just like this.It's quite hard for me but I will try it later.So sorry about it :(
//good
}
