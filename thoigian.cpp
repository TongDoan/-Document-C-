#include<iostream>
using namespace std;
class Time{
    int hours, minutes, seconds;
public:
    void getinfo (void)
	{
		cin >> hours >> minutes >> seconds;
	} 
	void display (void)
	{
		cout<<hours<<":"<<minutes<<":"<<seconds<< endl;
	} 
	void addit( Time aa, Time bb)
    {
        hours = aa.hours + bb.hours;
		minutes = aa.minutes + bb.minutes;
		seconds = aa.seconds + bb.seconds;
	    //kiem tra seconds < 60 
	    if( seconds >= 60)
		{
		    seconds -= 60; // seconds = seconds –60
			minutes++; //minutes = minutes+ 1}
	    //kiem tra minutes < 60
	    if (minutes >= 60)
		{
		    minutes -=60;
			hours++;
			}
		}
	}
};
int main()
{   
    Time one, two, three;
	cout << "\n Nhap vao thoi gian  mot (gio  phut  giay): ";
	one.getinfo();
	cout << "\n Nhap vao thoi gian  hai(gio  phut  giay): ";
	two.getinfo();
	three.addit(one, two);
	cout << "Ket qua la ";
	three.display();
}
