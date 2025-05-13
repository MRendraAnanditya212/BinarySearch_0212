#include <iostream>
using namespace std;

// membuat struktur untuk object double linkedlist
struct Node 
{
    // deklarasi noMhs dan name untuk menampung data
    int noMhs;
    string name;
    // deklarasi pointer next dan pref untuk penunjukan data sebelum dan sesudah 
    Node *next;
    Node *prev;
};

void addNode()
{
    // pembuatan node pemberian value untuk data noMhs dan name 
    Node *newNode = new Node(); // step 1 buat node baru
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs; // Assign value to the data field of the new node
    cout << "\nEnter the name of student: ";
    cin >> newNode->name; // Assign value to the data field of th

// deklarasi pointer SMART dan pemberian nilai 
Node *START = NULL;
// deklarasi prosedur addNode 

    

    // insert the new node in the list 
    // kondisi jika star == null atau noMhs node baru <= noMhs start
    if (START == NULL || newNode->noMhs <= START->noMhs)
    {
        
    newNode->next = START; // step 3: make the new node point to the first node
    // kondisi jika start tidak memiliki nilai atau tidak kosong 
    if (START != NULL)
    {
        START->prev = newNode; // step 4: make the first node point to the line
    }

    }
}    







