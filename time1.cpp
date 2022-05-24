#include <iostream>
#include<string.h>

using namespace std;

class typing
{
public:
	void sentence()
	{
		int key,seconds,minutes,hours;
        	time_t t1,t2,t3=0;
        	char line[300];
	        cout<<"\n This is speed test to check your speed.\n";
       		type:
	        cout<<"\nYou will have to type the sentence given in TYPE..\n";
		cout<<"\nPress any key to start: ";
		cin>>key;
       		t1 = time(NULL);
		cout<<"TYPE: "<<"baskaran_innocent";
      		cout<<"\n\nEnter the sentence:";
	        cin>>line;
//check		cout<<line;
	        t2 = time(NULL);
		while(1)
	        if(!strcmp(line,"baskaran_innocent"))
	        {
			t3=t2-t1;
//check	time seconds	cout<<t3<<endl;
			if(t3>=60)
			{
				minutes = t3/60;
				hours = minutes/60;
				seconds = t3-(minutes*60);
				cout<<"Time Taken to type is ( "<<hours<<" hr - "<<minutes<<" min - "<<seconds <<" secs). "<<endl;
				break;
			}
			else
			{
				cout<<"Time taken to type is ( "<<t3<<"sec)."<<endl;
				break;
			}
       		}
       		else
        	{
           		cout<<"\n\nThe sentence you typed was wrong.."<<endl;
           		goto type;
			break;
       		}
	}
};
int main()
{
    typing t;
    cout<<"\n\n\t\t\t   =====TYPING TUTOR ====="<<endl;
    t.sentence();
    return 0;
}
