#include<iostream>
using namespace std;
int id[30],i,j,size,op;
string name[30],address[30];
bool check;
char gender[30]; // global function
void input(){
	cout<<"--------->Input Information Students("<<i+1<<")<-----------"<<endl;
	cout<<"Enter ID Students:";cin>>id[i];
	cout<<"Enter Name Students:";cin>>name[i];
	cout<<"Enter Gender Students:";cin>>gender[i];
	cout<<"Enter Address Students:";cin>>address[i];
}
void header(){
	cout<<"ID\tName\tGender\tAddress"<<endl;
}
void output(){
	cout<<id[i]<<"\t"<<name[i]<<"\t"<<gender[i]<<"\t"<<address[i]<<endl;
}
int main(){
	do{
		cout<<"================"<<endl
			<<"||  1.Input   ||"<<endl
			<<"||  2.Output  ||"<<endl
			<<"||  3.Search  ||"<<endl
			<<"||  4.Update  ||"<<endl
			<<"||  5.Delete  ||"<<endl
			<<"||  6.Exit    ||"<<endl
			<<"================"<<endl;
		cout<<"Please You Chose One Option:";cin>>op;
		switch(op){
			case 1:{
				cout<<"Enter Number Of Students: ";cin>>size;
				for(i=0;i<size;i++)
				{
					input();
				}
			
			}	break;
			case 2:{
				header();
				for(i=0;i<size;i++){
					output();
				}
				break;
			}
			case 3:{
				int search;
				check=true;
				cout<<"Enter ID To Search Students:";cin>>search;
				for(i=0;i<size;i++)
				{
					if(search==id[i]){
						output();
						cout<<"----------------------------"<<endl;
						cout<<"| Search Students Is Found |"<<endl;
						cout<<"----------------------------"<<endl;
						check=false;
					}
				}
				if(check){
					cout<<"----------------------------"<<endl;
					cout<<"| No Student Search Not See |"<<endl;
					cout<<"----------------------------"<<endl;	
				}
				break;
			}
			case 4:{
				int update;
				check=true;
				cout<<"Enter The Id To update Of Students:";cin>>update;
				for(i=0;i<size;i++){
					if(update==id[i]){
						input();
						cout<<"----------------------------------"<<endl;
						cout<<"| Update Students Is Successfuly |"<<endl;
						cout<<"----------------------------------"<<endl;
						check=false;
					}
				}
					if(check){
					cout<<"-------------------------"<<endl;
					cout<<"| ID Student Is Not See |"<<endl;
					cout<<"-------------------------"<<endl;	
				}
				break;
			}
			case 5:{
				int delete_ID;
				check=true;
				cout<<"Enter ID To Delete Students:";cin>>delete_ID;
				for(i=0;i<size;i++)
				{
					if(delete_ID==id[i]){
						for(j=i;j<size-1;j++){
							id[j]=id[j+1];
							name[j]=name[j+1];
							gender[j]=gender[j+1];
							address[j]=address[j+1];
							
						}
						size--;
							cout<<"----------------------------------"<<endl;
							cout<<"| Delete Students Is Successfuly |"<<endl;
							cout<<"----------------------------------"<<endl;
							check=false;
					}
				}
				if(check){
					cout<<"------------------------------------------"<<endl;
					cout<<"| ID Student Is Not See You Can't Delete |"<<endl;
					cout<<"------------------------------------------"<<endl;	
				}
				break;
			}
			case 6:{
							cout<<"----------------------------------"<<endl;
							cout<<"|  Exite Program System Students  |"<<endl;
							cout<<"----------------------------------"<<endl;
							exit(0);
				break;
			}
		}
	}while(op<7);
}
