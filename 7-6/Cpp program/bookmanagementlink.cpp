// C++ program for the Book Management System using Linked List
#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
	int id;
	string name;
	string author;
	int cost;
	Node* next;
};

// Stores the head of the Linked List
Node* head = new Node();

// Check Function to check that if
// Record Already Exist or Not
bool check(int x)
{
	// Base Case
	if (head == NULL)
		return false;

	Node* t = new Node;
	t = head;

	// Traverse the Linked List
	while (t != NULL) {
		if (t->id == x)
			return true;
		t = t->next;
	}

	return false;
}

// Function to insert the record
void Insert_Record(int id, string name,
				string author, int cost)
{
	// if Record Already Exist
	if (check(id)) {
		cout << "book with this "
			<< "record Already Exists\n";
		return;
	}

	// Create new Node to Insert Record
	Node* t = new Node();
	t->id = id;
	t->name = name;
	t->author = author;
	t->cost = cost;
	t->next = NULL;

	// Insert at Begin
	if (head == NULL
		|| (head->id >= t->id)) {
		t->next = head;
		head = t;
	}

	// Insert at middle or End
	else {
		Node* c = head;
		while (c->next != NULL
			&& c->next->id < t->id) {
			c = c->next;
		}
		t->next = c->next;
		c->next = t;
	}

	cout << "Record Inserted "
		<< "Successfully\n";
}

// Function to search record for any
// books Record with id number
void Search_Record(int id)
{
	// if head is NULL
	if (!head) {
		cout << "No such Record "
			<< "Avialable\n";
		return;
	}

	// Otherwise
	else {
		Node* p = head;
		while (p) {
			if (p->id == id) {
				cout << "id Number\t"
					<< p->id << endl;
				cout << "name\t\t"
					<< p->name << endl;
				cout << "author\t\t"
					<< p->author << endl;
				cout << "cost\t\t"
					<< p->cost << endl;
				return;
			}
			p = p->next;
		}

		if (p == NULL)
			cout << "No such Record "
				<< "Avialable\n";
	}
}

// Function to delete record books
// record with given id number
// if it exist
int Delete_Record(int id)
{
	Node* t = head;
	Node* p = NULL;

	// Deletion at Begin
	if (t != NULL
		&& t->id == id) {
		head = t->next;
		delete t;

		cout << "Record Deleted "
			<< "Successfully\n";
		return 0;
	}

	// Deletion Other than Begin
	while (t != NULL && t->id != id) {
		p = t;
		t = t->next;
	}
	if (t == NULL) {
		cout << "Record does not Exist\n";
		return -1;
		p->next = t->next;

		delete t;
		cout << "Record Deleted "
			<< "Successfully\n";

		return 0;
	}
}

// Function to display the book's
// Record
void Show_Record()
{
	Node* p = head;
	if (p == NULL) {
		cout << "No Record "
			<< "Available\n";
	}
	else {
		cout << "ID\tname\tauthor"
			<< "\tcost\n";

		// Until p is not NULL
		while (p != NULL) {
			cout << p->id << " \t"
				<< p->name << "\t"
				<< p->author << "\t"
				<< p->cost << endl;
			p = p->next;
		}
	}
}

// Driver code
int main()
{
	head = NULL;
	string name, author;
	int id, cost;

	// Menu-driven program
	while (true) {
		cout << "\n\t\tWelcome to book Record "
				"Management System\n\n\tPress\n\t1 to "
				"create a new Record\n\t2 to delete a "
				"book record\n\t3 to Search a book "
				"Record\n\t4 to view all books "
				"record\n\t5 to Exit\n";
		cout << "\nEnter your Choice\n";
		int Choice;

		// Enter Choice
		cin >> Choice;
		if (Choice == 1) {
			cout << "Enter name of book\n";
			getline(cin>>ws,name);
			cout << "Enter id Number of book\n";
			cin >> id;
			cout << "Enter author of book \n";
			getline(cin>>ws,author);
			cout << "Enter Total cost of book\n";
			cin >> cost;
			Insert_Record(id, name, author, cost);
		}
		else if (Choice == 2) {
			cout << "Enter id Number of book whose "
					"record is to be deleted\n";
			cin >> id;
			Delete_Record(id);
		}
		else if (Choice == 3) {
			cout << "Enter id Number of book whose "
					"record you want to Search\n";
			cin >> id;
			Search_Record(id);
		}
		else if (Choice == 4) {
			Show_Record();
		}
		else if (Choice == 5) {
			exit(0);
		}
		else {
			cout << "Invalid Choice "
				<< "Try Again\n";
		}
	}
	return 0;
}

