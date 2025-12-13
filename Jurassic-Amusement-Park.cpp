#include<iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int money = 5000;
void menu(int people[],int p){
	int age = 0;
	cout<<"\n"<<setw(75)<<"----------------"<<endl;
	cout<<setw(75)<<"| TICKET PRICE |"<<endl;
	cout<<setw(76)<<"----------------\n"<<endl;
	
	cout<<"____________________\n"<<endl;
	cout<<"--> Age-wise price:"<<endl;
	cout<<"____________________\n"<<endl;
	
	cout<<setw(57)<<"--------------"<<endl;
	cout<<"For age 1 - 10 :"<<setw(41)<<"| Price: 200 |"<<endl;
	cout<<"---------------"<<setw(42)<<"--------------"<<endl;
	
	cout<<setw(57)<<"--------------"<<endl;
	cout<<"For age 11 - 20 :"<<setw(40)<<"| Price: 350 |"<<endl;
	cout<<"---------------"<<setw(42)<<"--------------"<<endl;
	
	cout<<setw(57)<<"--------------"<<endl;
	cout<<"For age 21 - 30 :"<<setw(40)<<"| Price: 400 |"<<endl;
	cout<<"---------------"<<setw(42)<<"--------------"<<endl;
	
	cout<<setw(57)<<"--------------"<<endl;
	cout<<"For age 31 - 40 :"<<setw(40)<<"| Price: 450 |"<<endl;
	cout<<"---------------"<<setw(42)<<"--------------"<<endl;
	
	cout<<setw(57)<<"--------------"<<endl;
	cout<<"For age 41 to onward :"<<setw(35)<<"| Price: 500 |"<<endl;
	cout<<"---------------"<<setw(42)<<"--------------"<<endl;
	
	for(int i  = 0 ; i < p ; i++){
		cout<<"--> Enter the age of "<<i+1<<" person: ";
		cin>>age;
		
		if(age>=1 && age<=10){
			money -= 200;
		}else if(age>=11 && age<=20){
			money -= 350;
		}else if(age>=21 && age<=30){
			money -= 400;
		}else if(age>=31 && age<=40){
			money -= 450;
		}else if(age <=0){
			cout<<"invalid";
		}else{
			money -= 500;
		}
		
	}
	
	cout<<"--> Total money left is : "<<money<<endl;
	
}

void zoo(){
	Sleep(500);
	
	cout<<"\n"<<setw(15)<<"---------"<<endl;
	cout<<setw(15)<<"| LION: |"<<endl;
	cout<<setw(16)<<"---------\n"<<endl;
	
	string d_lion = "The lion is a strong and powerful wild animal known as the \"King of the Jungle\". It belongs to the cat family and is mostly found in \"Africa\". Lions are carnivorous and live in groups called \"Prides\". They are known for their \"loud roar and great strength\".";

	cout<<"____________________\n"<<endl;
	cout<<"--> Description:"<<endl;
	cout<<"____________________\n"<<endl;
	
	for(int i = 0 ; i < d_lion.length() ; i++){
		cout<<d_lion[i];
		Sleep(50);
	}
	Sleep(500);
	
	cout<<"\n"<<setw(15)<<"----------"<<endl;
	cout<<setw(15)<<"| MONKEY |"<<endl;
	cout<<setw(16)<<"----------\n"<<endl;
	
	cout<<"____________________\n"<<endl;
	cout<<"--> Description:"<<endl;
	cout<<"____________________\n"<<endl;
	
	string d_monkey = "The monkey is an \"intelligent\" and \"playful\" animal found mostly in \"forests\" and \"jungles\". It belongs to the primate family and is known for its \"long tail\" and ability to climb trees. Monkeys eat \"fruits\", \"leaves\", and \"insects\". They are \"social animals\" and live in groups, showing clever and active behavior";
	for(int i = 0 ; i < d_monkey.length() ; i++){
		cout<<d_monkey[i];
		Sleep(50);
	}
	
	Sleep(500);
	
	cout<<"\n"<<setw(17)<<"------------"<<endl;
	cout<<setw(17)<<"| OSTRICHE |"<<endl;
	cout<<setw(18)<<"------------\n"<<endl;
	
	cout<<"____________________\n"<<endl;
	cout<<"--> Description:"<<endl;
	cout<<"____________________\n"<<endl;
	
	string d_ostriche = "The ostrich is the \"largest bird\" in the world and is found mainly in \"Africa\". It has a \"long neck\", \"strong legs\", and \"cannot fly\", but it can run very fast. Ostriches eat \"plants\", \"seeds\", and \"insects\". They are known for their \"strength and speed\"";
	
	for(int i = 0 ; i < d_ostriche.length() ; i++){
		cout<<d_ostriche[i];
		Sleep(50);
	}
	
	Sleep(500);
	
	cout<<"\n"<<setw(17)<<"------------"<<endl;
	cout<<setw(17)<<"| ELEPHANT |"<<endl;
	cout<<setw(18)<<"------------\n"<<endl;
	
	cout<<"____________________\n"<<endl;
	cout<<"--> Description:"<<endl;
	cout<<"____________________\n"<<endl;
	
	string d_elephant = "The elephant is the \"largest land animal\" in the world. It has a \"long trunk\", \"big ears\", and \"strong tusks\". Elephants are \"herbivores\" and eat \"grass\", \"leaves\", and \"fruits\". They are \"intelligent\", \"gentle animals\" and usually live in groups.";
	
	for(int i  = 0 ; d_elephant.length() ; i++){
		cout<<d_elephant[i];
		Sleep(50);
	}
}

int main(){
	int p = 0 , people [p] , w_z = 1;
	char z ;
	cout<<"\n"<<setw(80)<<"---------------------------"<<endl;
	cout<<setw(80)<<"| JURRASIC AMUSEMENT PARK |"<<endl;
	cout<<setw(81)<<"---------------------------\n"<<endl;
	
	cout<<"\n--> How many people are you : ";
	cin>>p;
	
	
	for(int i  = 0 ; i < p ; i++){
		people[i] = i+1;
	}

	menu(people,p);
	
	cout<<"\n"<<setw(80)<<"---------------------"<<endl;
	cout<<setw(80)<<"| AREA FOR VISITING |"<<endl;
	cout<<setw(81)<<"---------------------\n"<<endl;
	Sleep(3000);
	cout<<"\n"<<setw(73)<<"-------"<<endl;
	cout<<setw(73)<<"| ZOO |"<<endl;
	cout<<setw(73)<<"-------"<<endl;
	
	
	while(w_z == 1){
	cout<<" --> Can we enter in the zoo : \n --> y or Y for yes .\n --> n or N for No.\n --> Enter your Answer... ";
	cin>>z;
	if(z == 'y' || z == 'Y'){
        money -= 500;
		zoo();
		w_z++;
	}
	else {
		cout<<endl;
		cout<<"--> Waiting for your response !!! "<<endl;
		
	}
	
}
	
}