/* block commenting
Algorithm:

1. Get the radius of the cylinder from the user
2. Get the height of the cylinder from the user
3. Multiply sqaure of radius, height and pi to compute the volume
4. Give the volume to the user
*/


//THIS PROGRAM STARTS HERE
//this is single line commenting

#include <iostream>
using namespace std;
int main ()
{
	float radius;
	float height;
	float volume;

	cout<<"Enter radius:";
	cin>>radius; //this reads radius

	cout<<"Enter height:";	
	cin>>height; //this reads height
	
	volume=radius*radius*height*3.1416;

	cout<<"Volume=";
	cout<<volume; //this displays volume
	cout<<endl;

	return 0;
}


