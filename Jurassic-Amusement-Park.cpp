#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int money = 5000;

void menu(int people[], int p) {
    int age = 0;

    cout << "\n" << setw(75) << "----------------" << endl;
    cout << setw(75) << "| TICKET PRICE |" << endl;
    cout << setw(76) << "----------------\n" << endl;

    cout << "____________________\n" << endl;
    cout << "--> Age-wise price:" << endl;
    cout << "____________________\n" << endl;

    cout << setw(57) << "--------------" << endl;
    cout << "For age 1 - 10 :" << setw(41) << "| Price: 200 |" << endl;
    cout << "---------------" << setw(42) << "--------------" << endl;

    cout << setw(57) << "--------------" << endl;
    cout << "For age 11 - 20 :" << setw(40) << "| Price: 350 |" << endl;
    cout << "---------------" << setw(42) << "--------------" << endl;

    cout << setw(57) << "--------------" << endl;
    cout << "For age 21 - 30 :" << setw(40) << "| Price: 400 |" << endl;
    cout << "---------------" << setw(42) << "--------------" << endl;

    cout << setw(57) << "--------------" << endl;
    cout << "For age 31 - 40 :" << setw(40) << "| Price: 450 |" << endl;
    cout << "---------------" << setw(42) << "--------------" << endl;

    cout << setw(57) << "--------------" << endl;
    cout << "For age 41 to onward :" << setw(35) << "| Price: 500 |" << endl;
    cout << "---------------" << setw(42) << "--------------" << endl;

    for (int i = 0; i < p; i++) {
        cout << "--> Enter the age of " << i + 1 << " person: ";
        cin >> age;

        if (age >= 1 && age <= 10) {
            money -= 200;
        } else if (age >= 11 && age <= 20) {
            money -= 350;
        } else if (age >= 21 && age <= 30) {
            money -= 400;
        } else if (age >= 31 && age <= 40) {
            money -= 450;
        } else if (age <= 0) {
            cout << "invalid";
        } else {
            money -= 500;
        }
    }

    cout << "--> Total money left is : " << money << endl;
}

void zoo(int people) {
    Sleep(2000);

    cout << "\n" << setw(73) << "-------" << endl;
    cout << setw(73) << "| ZOO |" << endl;
    cout << setw(73) << "-------" << endl;

    char r_zoo;
    int p_zoo = 0, r_e_zoo = 1;
    string r_elephant = "Hurahhhhhhhh!";

    Sleep(500);

    cout << "\n" << setw(15) << "---------" << endl;
    cout << setw(15) << "| LION: |" << endl;
    cout << setw(16) << "---------\n" << endl;

    string d_lion = "The lion is a strong and powerful wild animal known as the \"King of the Jungle\". It belongs to the cat family and is mostly found in \"Africa\". Lions are carnivorous and live in groups called \"Prides\". They are known for their \"loud roar and great strength\".";

    cout << "____________________\n" << endl;
    cout << "--> Description:" << endl;
    cout << "____________________\n" << endl;

    for (int i = 0; i < d_lion.length(); i++) {
        cout << d_lion[i];
        Sleep(50);
    }

    Sleep(500);

    cout << "\n\n" << setw(15) << "----------" << endl;
    cout << setw(15) << "| MONKEY |" << endl;
    cout << setw(16) << "----------\n" << endl;

    cout << "____________________\n" << endl;
    cout << "--> Description:" << endl;
    cout << "____________________\n" << endl;

    string d_monkey = "The monkey is an \"intelligent\" and \"playful\" animal found mostly in \"forests\" and \"jungles\". It belongs to the primate family and is known for its \"long tail\" and ability to climb trees. Monkeys eat \"fruits\", \"leaves\", and \"insects\". They are \"social animals\" and live in groups, showing clever and active behavior";

    for (int i = 0; i < d_monkey.length(); i++) {
        cout << d_monkey[i];
        Sleep(50);
    }

    Sleep(500);

    cout << "\n\n" << setw(17) << "------------" << endl;
    cout << setw(17) << "| OSTRICHE |" << endl;
    cout << setw(18) << "------------\n" << endl;

    cout << "____________________\n" << endl;
    cout << "--> Description:" << endl;
    cout << "____________________\n" << endl;

    string d_ostriche = "The ostrich is the \"largest bird\" in the world and is found mainly in \"Africa\". It has a \"long neck\", \"strong legs\", and \"cannot fly\", but it can run very fast. Ostriches eat \"plants\", \"seeds\", and \"insects\". They are known for their \"strength and speed\"";

    for (int i = 0; i < d_ostriche.length(); i++) {
        cout << d_ostriche[i];
        Sleep(50);
    }

    Sleep(500);

    cout << "\n\n" << setw(17) << "------------" << endl;
    cout << setw(17) << "| ELEPHANT |" << endl;
    cout << setw(18) << "------------\n" << endl;

    cout << "____________________\n" << endl;
    cout << "--> Description:" << endl;
    cout << "____________________\n" << endl;

    string d_elephant = "The elephant is the \"largest land animal\" in the world. It has a \"long trunk\", \"big ears\", and \"strong tusks\". Elephants are \"herbivores\" and eat \"grass\", \"leaves\", and \"fruits\". They are \"intelligent\", \"gentle animals\" and usually live in groups.";

    for (int i = 0; i < d_elephant.length(); i++) {
        cout << d_elephant[i];
        Sleep(50);
    }

    cout << "\n\nDo you want to ride in Elephant : \n--> Press y or 'Y' - for YES. \n--> Press n or 'N' - for NO. \n-> Enter you answer ... ";
    cin >> r_zoo;

    if (r_zoo == 'y' || r_zoo == 'Y') {
        cout << "\n| Price of per Ride is --> 150 |" << endl;

        while (r_e_zoo == 1) {
            cout << "\nHow many of you want the ride : ";
            cin >> p_zoo;

            if (p_zoo > 0 && p_zoo <= people) {
                money = money - (p_zoo * 150);
                r_e_zoo++;
            } else {
                cout << "\nYou are entering wrong people!!!" << endl;
                cout << "--> Enter again : " << endl;
            }
        }

        for (int i = 0; i < r_elephant.length(); i++) {
            cout << r_elephant[i];
            Sleep(70);
        }
    } else {
        cout << "Total amount you left is : " << money << endl;
    }

    cout << "\n" << setw(80) << "----------------------------------" << endl;
    cout << setw(80) << "| THANK YOU FOR VISITING THE ZOO |" << endl;
    cout << setw(81) << "----------------------------------\n" << endl;
}

struct v_ride {
    string ride_name[4] = {"Rollar coaster", "Rotating wheel", "Riding-car", "Rope swing"};
    int ride_price[4] = {150, 100, 100, 200};
};

void ride() {
    v_ride r[4];
    char l_ride = 'y';
    int p_ride, c_ride;

    cout << "\n" << setw(68) << "---------" << endl;
    cout << setw(68) << "| RIDES |" << endl;
    cout << setw(69) << "---------\n" << endl;

    cout << "Do you want to take rides : \n --> Press y or Y - For YES .\n --> Press n or N - For NO . \n-> Enter your answer... ";
    cin >> l_ride;
    cout << endl;

    if (l_ride == 'y' || l_ride == 'Y') {
        cout << setw(5) << "-----------------------------------------------------" << endl;
        for (int i = 0; i < 4; i++) {
            cout << setw(5) << "| " << i + 1 << "-) For - " << r[i].ride_name[i];
            cout << setw(20) << r[i].ride_price[i] << " |" << endl;
        }
        cout << setw(5) << "-------------------------------------------------" << endl;

        while (l_ride == 'y' || l_ride == 'Y') {
            if (money >= 100) {
                cout << "\n--> How many of you want the ride : ";
                cin >> p_ride;

                cout << "\nWhich ride do you want : ";
                cin >> c_ride;

                money = money - (p_ride * r[c_ride - 1].ride_price[c_ride - 1]);
                cout << money << endl;

                cout << "\n\n-->Do you want to take another ride : \n--> Press y or Y - For Yes .\n--> Press n or N - For  No . \n-> Enter your answer...";
                cin >> l_ride;
            } else {
                cout << "Insufficiant amount!!!" << endl;
                break;
            }
        }
    } else {
        cout << "-----------" << endl;
        cout << "| Notice: |" << endl;
        cout << "-----------" << endl;

        cout << "Your atleast 1 member should take  the any ride : " << endl;
        cout << "__________________________________________________" << endl;
    }
}

struct haunted {
    string name[4] = {"Alliens", "Skeletons", "Demogorgans", "Zombies"};
    int index;
    int name_index[4] = {1,2,3,4};
};

void haunted_house() {
	int c_zombies = 0 , c_allien = 0 , c_skeleton = 0 , c_demogorgans = 0 , choice_haunted = 0;
    haunted h[4];
    bool repeat;
    int index_c[4] , choice= 0 , w_l_house = 1 , l_house_quiz = 0 , quiz_l = 1 , l_check = 1;
    
    //Backend:
    srand(time(0));

    for (int i = 0; i < 4; i++) {
        do {
            repeat = false;
            h[i].index = rand() % 4 + 1;

            for (int j = 0; j < i; j++) {
                if (h[i].index == h[j].index) {
                    repeat = true;
                    break;
                }
            }
        } while (repeat);
    }

    

    cout << "\n Array elements (no repetition): ";
    for (int i = 0; i < 4; i++) {
        cout << h[i].index << " ";
    }
    
    //Frontend:
    
    cout << "\n" << setw(73) << "=================" << endl;
    cout << setw(73) << "| HAUNTED HOUSE |" << endl;
    cout << setw(73) << "=================" << endl;
    
    
    cout<<"--> Lets Take a quick quiz : "<<endl;
    
    cout<<setw(10)<<"-----------------------------------"<<endl;
    cout<<setw(10)<<"| Choice the Position from 1 to 4 |"<<endl;
    cout<<setw(10)<<"-----------------------------------"<<endl;
    
    cout<<"---------------\t\t"<<"------------"<<endl;
    cout<<"| Characters: |\t\t"<<"| Position |"<<endl;
    cout<<"---------------\t\t"<<"------------\n"<<endl;
    
    for(int i  = 0 ; i < 4; i++){
    	
    	cout<<i+1<<" - "<<h[i].name[i]<<"\t\t\t";
    	
    	cin>>choice;
    	
    	if(choice >= 1 && choice <=4){
    		index_c[i] = choice;
		}else{
			cout<<"Invalid !!!"<<endl;
		cout<<setw(10)<<"\n-----------------------------------"<<endl;
        cout<<setw(10)<<"| Choice the Position from 1 to 4 |"<<endl;
        cout<<setw(10)<<"-----------------------------------"<<endl;
			i--;
		}
    }
    
    
    for(int i = 0 ; i  < 4 ; i++){
    	if(h[i].index != index_c[i]){
    		cout<<"\n----------------"<<endl;
    		cout<<"| You Lose !!! |"<<endl;
    		cout<<"----------------"<<endl;
    		
    		while(l_check ==1){
    		cout<<setw(10)<<"-->Please deposit 250 Rupees... ";
    		cin>>l_house_quiz;
    		
    		if(l_house_quiz == 250){
    			break;
			}
			
			cout<<"Again Enter..."<<endl;
			cout<<"--------------"<<endl;
    }
    		while(w_l_house == 1){
    		if(l_house_quiz == 250){
    		money -= l_house_quiz;
    		w_l_house++;
    	}else {
    		cout<<"Invalid Amount : "<<endl;
    		cout<<"Again Enter : "<<endl;
		}
	}     break;
		}else{
			if(i == 3){
				cout<<"\n--------------"<<endl;
				cout<<"| You Won... |"<<endl;
				cout<<"--------------"<<endl;
				
				cout<<"\n----------------- \t----------"<<endl;
				cout<<"| Your Reward : | \t| 300-Rs |"<<endl;
				cout<<"----------------- \t----------"<<endl;
				
				money += 300;
				break;
			}
			continue;
		}
	}
	
	cout<<setw(50)<<"-----------------"<<endl;
	cout<<"<=== Wellcome you entered in the | Haunted House | ===>"<<endl;
	cout<<setw(50)<<"-----------------"<<endl;
	
	cout<<"================== 2D Array: ===================="<<endl;
	
	for(int i = 0 ; i < 4 ; i++){
		if(i == 0){
			h[i].name[i] = "Alliens";
		}else if(i == 1){
			h[i].name[i] = "Skeletons";
		}else if(i == 2){
			h[i].name[i] = "Demogorgans";
		}else if(i == 3){
			h[i].name[i] = "Zombies";
		}
	}
	
	int e_haunted[4];
	srand(time(0));

    for (int i = 0; i < 4; i++) {
        do {
            repeat = false;
            e_haunted[i] = rand() % 5 + 1;

            for (int j = 0; j < i; j++) {
                if (e_haunted[i] == e_haunted[j]) {
                    repeat = true;
                    break;
                }
            }
        } while (repeat);
        
        e_haunted[2] = 0;
    }
    

    int cal = 0;

    cout << "\n Array elements (no repetition): ";
    for (int i = 0; i < 4; i++) {
        cout << e_haunted[i] << " ";
    }
	money = 100;
	
	while(quiz_l == 1){
		
		
		cout<<money;
		
		
		if(money >= 50){
		
	cout<<"\nPress 1 - For "<<h[0].name[0]<<endl;
	cout<<"Press 2 - For "<<h[1].name[1]<<endl;
	cout<<"Press 3 - For "<<h[2].name[2]<<endl;
	cout<<"Press 4 - For "<<h[3].name[3]<<endl;
	cout<<"Press 5 - For Exit"<<endl;
	
	cout<<"Enter your answer ... ";
	cin>>choice_haunted;
	
	
	if(choice_haunted == 1){
		
		for(int i = 0 ; i < 3 ; i++){
		cout<<i+1<<" Chance: "<<endl;
		
		cout<<"How many Alliens are thier : ";
		cin>>c_allien;
		
		if(c_allien == e_haunted[0]){
			cout<<"Congratulation!!! . You Won !!!"<<endl;
			money += 50;
			break;
		}else{
			cout<<"You lose!!!"<<endl;
			cal = (c_allien - e_haunted[0])*10;
			
			if(cal < 0 ){
				cal = cal * -1;
			}
			
			money -= cal;
		}
	}
		
		cout<<"Again enter: "<<endl;
		
	}else if(choice_haunted == 2){
		
		for(int i = 0 ; i < 3 ; i++){
		
		cout<<"How many Skeletons are thier : ";
		cin>>c_skeleton;
		
			if(c_skeleton == e_haunted[1]){
			cout<<"Congratulation!!! . You Won !!!"<<endl;
			money += 50;
			break;
		}else{
			cout<<"You lose!!!"<<endl;
			cal = (c_skeleton - e_haunted[1])*10;
			
			if(cal < 0 ){
				cal = cal * -1;
			}
			
			money -= cal;
		}
		
		cout<<"Again enter: "<<endl;
		
}
	}else if(choice_haunted == 3){
		
		cout<<"You Won!!! : "<<endl;
		cout<<"Take your price 50-Rs."<<endl;
		
		cout<<"Again enter: "<<endl;
		
	}else if(choice_haunted == 4){
		
		for(int i = 0 ; i < 3 ; i++){
		
		cout<<"How many Zombies are their : ";
		cin>>c_zombies;
		
		if(c_zombies == e_haunted[3]){
			cout<<"Congratulation!!! . You Won !!!"<<endl;
			money += 50;
		}else{
			cout<<"You lose!!!"<<endl;
			cal = (c_zombies - e_haunted[3])*10;
			
			if(cal < 0 ){
				cal = cal * -1;
			}
			
			money -= cal;
		}
		
		cout<<"Again enter: "<<endl;
		
	}
}else if(choice_haunted == 5){
	cout<<"Leaving Haunted House: "<<endl;
		quiz_l++;
	}
	
}else{
	cout<<"You Don't have enough amount !!!"<<endl;
	quiz_l++;
}
}
	
}

int main(){
    int p = 0, w_choice = 1, choice;

    cout << "\n" << setw(80) << "---------------------------" << endl;
    cout << setw(80) << "| JURRASIC AMUSEMENT PARK |" << endl;
    cout << setw(81) << "---------------------------\n" << endl;
    cout << setw(10) << "-> Allowed people are from 1 to 5" << endl;

    cout << "\n--> How many people are you : ";
    cin >> p;

    int people[p];
    for (int i = 0; i < p; i++) {
        people[i] = i + 1;
    }

    menu(people, p);

    cout << "\n" << setw(80) << "---------------------" << endl;
    cout << setw(80) << "| AREA FOR VISITING |" << endl;
    cout << setw(81) << "---------------------\n" << endl;

    while (w_choice == 1) {
        cout << "\n --> Which area in which you want to enter : \n --> 1- ZOO .\n --> 2- Rides Joy land.\n --> 3- Haunted house. \n -> Enter your answer... ";
        cin >> choice;

        if (choice == 1) {
        	
            money -= 500; 
			zoo(p);
        } else if (choice == 2) {
            ride();
        } else if (choice == 3) {
            haunted_house();
        } else {
            cout << "Invalid!!! , Enter again... " << endl;
        }
    }

    return 0;
}