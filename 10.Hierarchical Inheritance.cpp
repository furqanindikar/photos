/*	[Hierarchical Inheritance ] Imagine a publishing company that markets 
    both book and audiocassette versions of its works. 
	Create a class publication that stores the title (a string) and price (type float) of a publication. 
	From this class derive two classes: book, which adds a page count (type int), and tape, 
	which adds a playing time in minutes (type float). Each of these three classes should have 
	a getdata() function to get its data from the user at the keyboard, and a putdata() function to display its data. 
	Write a main() program to test the book and tape classes by creating instances of them, 
	asking the user to fill in data with getdata(), and then displaying the data with putdata().*/

#include<iostream>
using namespace std;
class publication{
	string title;
	float price;
	public:
		getdata()
		{
			cout<<endl<<"Enter Title: ";
			cin>>title;
			cout<<"Enter Price: ";
			cin>>price;
		}
		showdata()
		{
			cout<<"Title: "<<title<<endl;
			cout<<"Price: "<<price<<endl;
		}
};
class book:public publication{
	int page_count;
	public:
	    get_data()
		{
			getdata();
			cout<<"Enter No. of Pages: ";
			cin>>page_count;
		}
		show_data()
		{
			cout<<endl<<"Book: "<<endl;
			showdata();
			cout<<"Page count: "<<page_count<<endl<<endl;
		}
};
class tape:public publication{
	float playing_time;
	public:
		get_data()
		{
			getdata();
			cout<<"Enter Playing Time: ";
			cin>>playing_time;
		}
		show_data()
		{
			cout<<endl<<"Tape: "<<endl;
			showdata();
			cout<<"Playing Time: "<<playing_time<<endl<<endl;
		}
};
int main()
{
	tape t;
	book b;
	b.get_data();
	t.get_data();
	b.show_data();
	t.show_data();
}
