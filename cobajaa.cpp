#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{
    char teks[50];
    char cari;
    int konsonan=0, vokal=0, i, flag=0;
    cout << "input : ";
    cin.get(teks,50);
    cout<<"output :";
    for(int i=0;teks[i];i++)
    {
        if(toupper(teks[i])=='A'|| toupper(teks[i])=='I'|| toupper(teks[i])=='U'|| toupper(teks[i])=='E'|| toupper(teks[i])=='O')
            {
                vokal+=1;
            }
        else if(teks[i]!=' ')
        {
            konsonan+=1;
	    }
    }
    printf("\nVokal = %d = ", vokal);
    for(int i=0;teks[i];i++)
    {
	
	if(toupper(teks[i])=='A'|| toupper(teks[i])=='I'|| toupper(teks[i])=='U'|| toupper(teks[i])=='E'|| toupper(teks[i])=='O')
        {
	        cout<<teks[i]<<" ";
        }
    }
    printf("\nKonsonan = %d= ", konsonan);
    for (int I=0;teks[i];i++)
    {
	    if(toupper(teks[i])=='A'|| toupper(teks[i])=='I'|| toupper(teks[i])=='U'|| toupper(teks[i])=='E'|| toupper(teks[i])=='O')
        {

	    }
        else if (isdigit(teks[i]))
        {

        }
        else if (isspace(teks[i]))
        {

        }
        else
        {
            cout<<teks[i]<<" ";
        }
    }
	cout <<"\nMasukan data yang akan anda cari: ";
	cin >> cari;
	for(i=0;teks[i];i++)
    {
		if(teks[i]==cari)
        {
			flag=1;
			break;
		}
	}
	if ( flag==1)
    {
		printf("Data %c ditemukan\n", cari);
	}
	else
    {
		printf("data tidak ada...\n");	
	}
}