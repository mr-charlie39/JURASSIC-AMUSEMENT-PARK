#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>

using namespace std;

int money = 5000;


void box(){


	cout<<"\t\t================================================================================="<<endl;
	
	cout<<"\t\t|| "<<setw(78)<<" ||"<<endl;
	cout<<"\t\t|| "<<setw(71)<<"__________________"<<setw(7)<<" ||"<<endl;
	cout<<"\t\t|| "<<setw(54)<<" |"<<setw(5)<<"____"<<setw(5)<<"____"<<setw(5)<<"____"<<setw(2)<<"|"<<setw(7)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(54)<<" |"<<setw(2)<<"|"<<setw(3)<<"|"<<setw(2)<<"|"<<setw(3)<<"|"<<setw(2)<<"|"<<setw(3)<<"|"<<setw(2)<<"|"<<setw(7)<<"||"<<endl;
	cout<<"\t\t--- "<<setw(53)<<" |"<<setw(5)<<"___|"<<setw(2)<<"|"<<setw(3)<<"|"<<setw(2)<<"|"<<setw(3)<<"|"<<setw(2)<<"|"<<setw(7)<<"||"<<endl;
	cout<<"\t\t___ "<<setw(51)<<"______________________"<<setw(2)<<" |"<<setw(2)<<"|"<<setw(5)<<"|"<<setw(3)<<"|"<<setw(2)<<"|"<<setw(3)<<"|"<<setw(2)<<"|"<<setw(7)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(31)<<"|"<<setw(4)<<"____"<<setw(4)<<"___"<<setw(5)<<"____"<<setw(6)<<"___"<<setw(2)<<"|"<<" |"<<setw(5)<<"|__|"<<setw(5)<<"|__|"<<setw(5)<<"|__|"<<setw(2)<<"|"<<setw(7)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(31)<<"|"<<setw(1)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(4)<<"\\"<<setw(3)<<"|"<<setw(4)<<"|"<<setw(2)<<"|"<<setw(17)<<"|"<<setw(7)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(31)<<"|"<<setw(1)<<"|__/"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(4)<<"|"<<setw(5)<<"|__"<<setw(2)<<"|"<<" ------------------"<<setw(7)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(29)<<"_____________________________ "<<"|"<<"|"<<setw(3)<<"\\"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(4)<<"|"<<setw(3)<<"|"<<setw(4)<<"|"<<setw(26)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(1)<<"|"<<setw(9)<<"____"<<setw(12)<<"____"<<setw(5)<<"____"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(1)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(7)<<"|___/"<<setw(5)<<"|__"<<setw(2)<<"|"<<setw(26)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(1)<<"|"<<setw(1)<<"|"<<setw(3)<<"|"<<setw(2)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<" |"<<setw(5)<<"|"<<" |"<<setw(8)<<"---"<<setw(13)<<"|"<<setw(26)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(1)<<"|"<<setw(1)<<"|__|"<<setw(2)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(6)<<"|___"<<setw(5)<<"|___"<<setw(2)<<"|"<<" ----------------------"<<setw(26)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(1)<<"|"<<setw(1)<<"|"<<setw(3)<<"|"<<setw(2)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(3)<<"|"<<setw(6)<<"|"<<" |"<<setw(5)<<"|"<<setw(49)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(1)<<"|"<<setw(1)<<"|"<<setw(3)<<"|"<<setw(5)<<"|__|"<<setw(12)<<"|__|_ |__|"<<setw(5)<<"|___"<<setw(2)<<"|"<<setw(49)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(1)<<"|"<<setw(28)<<"|"<<setw(49)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(1)<<"-----------------------------"<<setw(49)<<"||"<<endl;
	cout<<"\t\t|| "<<setw(78)<<" ||"<<endl;

	cout<<"\t\t===========================================================|"<<setw(21)<<"|==============="<<endl;
	cout<<endl;
}

void menu(int people[], int *p) {
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
    cout << "--------------------" << setw(37) << "--------------" << endl;

    for (int i = 0; i < *p; i++) {
        cout << "\n--> Enter the age of " << i + 1 << " person: ";
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
    
    cout<<"\n________________________________"<<endl;
    cout << "--> Total money left is : " << money <<" |"<< endl;
    cout<<"--------------------------------"<<endl;
    
}

void zoo(int people) {
    Sleep(2000);
    string desc_word = 
        "||============================================================||\n"
        "||                                                            ||\n"
        "||  ___   ____  ____  ____  ____  _  ____  _____  _   _  _    ||\n"
        "|| |   \\ |  __|/ ___|/ ___||  _ \\| ||  _ \\|_   _|| \\ | || |   ||\n"
        "|| | |  || |__ \\___ \\| |   | |_) | || |_) | | |  |  \\| || |   ||\n"
        "|| | |  ||  __| ___ \\| |   |  _ /| ||  __/  | |  | . ` || |   ||\n"
        "|| |___/ |____||____/\\____||_| \\_\\|_||_|  |_____||_| \\_||_|   ||\n"
        "||                                                            ||\n"
        "||============================================================||\n";
        
     string zoo_final = 
        "     ____                                               ____\n"
        "    /  _ \\                                             / _  \\\n"
        "   (  (_) )===========================================( (_)  )\n"
        "    \\____/                                             \\____/\n"
        "      ||   ________    ________      ________            ||\n"
        "      ||  |___    /|  /   __   \\    /   __   \\           ||\n"
        "      ||     /   /_|_ |  |  |  |    |  |  |  |           ||\n"
        "      ||    /      |_||  |  |  |    |  |  |  |           ||\n"
        "      ||   /   /|  |  |  |__|  |    |  |__|  |           ||\n"
        "      ||  /___/_|  |  \\________/    \\________/           ||\n"
        "      ||  |_____|/     \\______/      \\______/            ||\n"
        "      ||                                                 ||\n"
        "     ____   _________________________________________   ____\n"
        "    /  _ \\                                             / _  \\\n"
        "   (  (_) )===========================================( (_)  )\n"
        "    \\____/                                             \\____/\n";

    cout << zoo_final << endl;

    char r_zoo;
    int p_zoo = 0, r_e_zoo = 1;
    string r_elephant = 
    "       / \\______________________________________________/ \\\n"
    "      |  [!] AUDIO ALERT: ELEPHANT TRUMPET FREQUENCY [!]  |\n"
    "       \\ /----------------------------------------------\\ /\n"
    "        |                                                |\n"
    "        |   _    _  _    _  _____         _    _   _     |\n"
    "        |  | |  | || |  | ||  __ \\  /\\   | |  | | | |    |\n"
    "        |  | |__| || |  | || |__) |/  \\  | |__| | | |    |\n"
    "        |  |  __  || |  | ||  _  // /\\ \\ |  __  | | |    |\n"
    "        |  | |  | || |__| || | \\ \\/ ____ \\| |  | | |_|    |\n"
    "        |  |_|  |_| \\____/ |_|  \\_\\/    \\_\\_|  |_| (_)    |\n"
    "        |                                                |\n"
    "       / \\______________________________________________/ \\\n"
    "      |               >>> I ENJOYED IT A LOT       <<<    |\n"
    "       \\ /----------------------------------------------\\ /\n";

    Sleep(500);
    string yellow = "\033[1;33m";
    string reset = "\033[0m";
    cout<<endl;
    string lion_i = 
        "||==============================================||\n"
        "||                                              ||\n"
        "||             (  \\(|)/  )                      ||\n"
        "||          _ ((  .---.  )) _                   ||\n"
        "||         ( )\\ / (0 0) \\ /( )                  ||\n"
        "||        ( (_ (   'v'   ) _) )                 ||\n"
        "||         (  \\  \\_   _/  /  )                  ||\n"
        "||          (   '--`_`--'   )                   ||\n"
        "||           '--._______.--'                    ||\n"
        "||               /     \\            _           ||\n"
        "||              /  | |  \\          ( )          ||\n"
        "||             /   | |   \\________//            ||\n"
        "||            (____| |____________/             ||\n"
        "||                                              ||\n"
        "||           [ MAJESTIC LION KING ]             ||\n"
        "||==============================================||\n";
        cout<<"\n";
        for(int i = 0 ; i < lion_i.length() ; i++){
        	cout<<yellow<<lion_i[i]<<reset;
        	Sleep(0.1);
		}
		cout<<endl;
   string lion_word = 
        "||================================================||\n"
        "||                                                ||\n"
        "||   _        _____   ____    _   _               ||\n"
        "||  | |      |_   _| / __ \\  | \\ | |              ||\n"
        "||  | |        | |  | |  | | |  \\| |              ||\n"
        "||  | |        | |  | |  | | | . ` |              ||\n"
        "||  | |____   _| |_ | |__| | | |\\  |              ||\n"
        "||  |______| |_____| \\____/  |_| \\_|              ||\n"
        "||                                                ||\n"
        "||================================================||\n";

    cout <<lion_word << endl;

    string d_lion = "The lion is a strong and powerful wild animal known as the \"King of the Jungle\". It belongs to the cat family and is mostly found in \"Africa\". Lions are carnivorous and live in groups called \"Prides\". They are known for their \"loud roar and great strength\".";

    

    cout << desc_word << endl;

    for (int i = 0; i < d_lion.length(); i++) {
        cout << d_lion[i];
        Sleep(20);
    }

    Sleep(500);
    string red = "\033[1;31m";
    cout<<endl;
    string monkey_i = 
    "||=================================||\n"
    "||            .-'\"\"\"\"\"\"-.          ||\n"
    "||          _/ [ @  @ ]  \\_        ||\n"
    "||         / \\  ( ' ' )  / \\       ||\n"
    "||        /   \\  `---'  /   \\      ||\n"
    "||        |    `--...--'    |      ||\n"
    "||        |  .-----------.  |      ||\n"
    "||        |_/             \\_|      ||\n"
    "||          |             |        ||\n"
    "||          |      ___      |      ||\n"
    "||          \\____/   \\____/        ||\n"
    "||                                 ||\n"
    "||              [ MONKEY ]         ||\n"
    "||=================================||\n";
        cout<<"\n";
        for(int i = 0 ; i < monkey_i.length() ; i++){
        	cout<<red<<monkey_i[i]<<reset;
        	Sleep(0.1);
		}
		cout<<endl;
    string monkey_word = 
    "||====================================================||\n"
    "||                                                    ||\n"
    "||  __  __   ____   _   _  _  __  ______ __     __    ||\n"
    "|| |  \\/  | / __ \\ | \\ | || |/ / |  ____|\\ \\   / /    ||\n"
    "|| | \\  / || |  | ||  \\| || ' /  | |__    \\ \\_/ /     ||\n"
    "|| | |\\/| || |  | || . ` ||  <   |  __|    \\   /      ||\n"
    "|| | |  | || |__| || |\\  || . \\  | |____    | |       ||\n"
    "|| |_|  |_| \\____/ |_| \\_||_|\\_\\ |______|   |_|       ||\n"
    "||                                                    ||\n"
    "||====================================================||\n";

cout << monkey_word << endl;

    cout << desc_word << endl;

    string d_monkey = "The monkey is an \"intelligent\" and \"playful\" animal found mostly in \"forests\" and \"jungles\". It belongs to the primate family and is known for its \"long tail\" and ability to climb trees. Monkeys eat \"fruits\", \"leaves\", and \"insects\". They are \"social animals\" and live in groups, showing clever and active behavior";

    for (int i = 0; i < d_monkey.length(); i++) {
        cout << d_monkey[i];
        Sleep(20);
    }

    Sleep(500);
    string orange = "\033[38;5;208m"; 
    string ostrich_i = 
    "||============================== ||\n"
    "||            _  _               ||\n"
    "||           (o)(o)>             ||\n"
    "||           _\\  /               ||\n"
    "||          /   /                ||\n"
    "||         /   /                 ||\n"
    "||        /   /                  ||\n"
    "||       |   |  .----------.     ||\n"
    "||       |   | /            \\    ||\n"
    "||        \\   |              |   ||\n"
    "||         \\  \\             /    ||\n"
    "||          \\  '-----------'     ||\n"
    "||           \\___||      ||      ||\n"
    "||                ||      ||     ||\n"
    "||               _||_    _||_    ||\n"
    "||                               ||\n"
    "||              [ OSTRICH ]      ||\n"
    "||===============================||\n";
        
        cout<<"\n";
        for(int i = 0 ; i < ostrich_i.length() ; i++){
        	cout<<orange<<ostrich_i[i]<<reset;
        	Sleep(0.1);
		}
		cout<<endl;
    string ostrich_word = 
        "||==========================================================||\n"
        "||                                                          ||\n"
        "||   ____    _____  _______  _____   _____  _____  _    _   ||\n"
        "||  / __ \\  / ____||__   __||  __ \\ |_   _|/ ____|| |  | |  ||\n"
        "|| | |  | || (___     | |   | |__) |  | | | |     | |__| |  ||\n"
        "|| | |  | | \\___ \\    | |   |  _  /   | | | |     |  __  |  ||\n"
        "|| | |__| | ____) |   | |   | | \\ \\  _| |_| |____ | |  | |  ||\n"
        "||  \\____/ |_____/    |_|   |_|  \\_\\|_____|\\_____||_|  |_|  ||\n"
        "||                                                          ||\n"
        "||==========================================================||\n";

    cout << ostrich_word << endl;

    cout << desc_word << endl;

    string d_ostriche = "The ostrich is the \"largest bird\" in the world and is found mainly in \"Africa\". It has a \"long neck\", \"strong legs\", and \"cannot fly\", but it can run very fast. Ostriches eat \"plants\", \"seeds\", and \"insects\". They are known for their \"strength and speed\"";

    for (int i = 0; i < d_ostriche.length(); i++) {
        cout << d_ostriche[i];
        Sleep(20);
    }

    Sleep(500);
        string blue = "\033[1;36m";
        cout<<endl;
        string elephant_i = 
    "||======================================================||\n"
    "||              _.-- ,.--.                              ||\n"
    "||            .'   .'     /                             ||\n"
    "||            | @       |'..--------._                  ||\n"
    "||           /        \\._/               '.             ||\n"
    "||          /    .-.-                       \\           ||\n"
    "||         (    /    \\                       \\          ||\n"
    "||          \\\\        '.                  | #           ||\n"
    "||           \\\\        \\   -.            /              ||\n"
    "||            :\\        |   )._____.'   \\               ||\n"
    "||             \"        |   /  \\  |  \\   )              ||\n"
    "||                      |   |./'  :__ \\.-'              ||\n"
    "||                      '--'                            ||\n"
    "||                                                      ||\n"
    "||                      [ ELEPHANT ]                    ||\n"
    "||======================================================||\n";
        cout<<"\n";
        for(int i = 0 ; i < elephant_i.length() ; i++){
        	cout<<blue<<elephant_i[i]<<reset;
        	Sleep(0.1);
		}
		cout<<endl;
    string elephant_word = 
        "||====================================================================||\n"
        "||                                                                    ||\n"
        "||  ______  _       ______  _____   _    _            _   _  _______  ||\n"
        "|| |  ____|| |     |  ____||  __ \\ | |  | |    /\\    | \\ | ||__   __| ||\n"
        "|| | |__   | |     | |__   | |__) || |__| |   /  \\   |  \\| |   | |    ||\n"
        "|| |  __|  | |     |  __|  |  ___/ |  __  |  / /\\ \\  | . ` |   | |    ||\n"
        "|| | |____ | |____ | |____ | |     | |  | | / ____ \\ | |\\  |   | |    ||\n"
        "|| |______||______||______||_|     |_|  |_|/_/    \\_\\|_| \\_|   |_|    ||\n"
        "||                                                                    ||\n"
        "||====================================================================||\n";

    cout << elephant_word << endl;
    
    cout << desc_word << endl;

    string d_elephant = "The elephant is the \"largest land animal\" in the world. It has a \"long trunk\", \"big ears\", and \"strong tusks\". Elephants are \"herbivores\" and eat \"grass\", \"leaves\", and \"fruits\". They are \"intelligent\", \"gentle animals\" and usually live in groups.";

    for (int i = 0; i < d_elephant.length(); i++) {
        cout << d_elephant[i];
        Sleep(20);
    }

    cout << "\n\n--> Do you want to ride in Elephant : "<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"| Press y or Y - For \"YES\" : | "<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"| Press n or N - For \"NO\" : | "<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"\n--> Enter your answer... ";
    cin >> r_zoo;

    if (r_zoo == 'y' || r_zoo == 'Y') {
    	cout<<"________________________________"<<endl;
        cout << "\n| Price of per Ride is --> 150 |" << endl;
        cout<<"--------------------------------"<<endl;

        while (r_e_zoo == 1) {
            cout << "\nHow many of you want the ride : ";
            cin >> p_zoo;

            if (p_zoo > 0 && p_zoo <= people) {
                money = money - (p_zoo * 150);
                r_e_zoo++;
            } else {
                cout << "\nYou are entering wrong people!!!" << endl;
                cout << "\n--> Enter again : " << endl;
                cout<<"-------------------"<<endl;
            }
        }
        
        cout<<endl;
        for (int i = 0; i < r_elephant.length(); i++) {
            cout << r_elephant[i];
            Sleep(0.1);
        }
    } else {
    	cout<<"------------------------------"<<endl;
        cout << "| Total amount you left is : " << money <<" |"<< endl;
        cout<<"------------------------------"<<endl;
    }

    string exit_msg = 
    "||====================================================================||\n"
    "||                                                                    ||\n"
    "||  _______ _    _          _   _ _  __  __     ______  _    _        ||\n"
    "|| |__   __| |  | |   /\\   | \\ | | |/ /  \\ \\   / / __ \\| |  | |       ||\n"
    "||    | |  | |__| |  /  \\  |  \\| | ' /    \\ \\_/ / |  | | |  | |       ||\n"
    "||    | |  |  __  | / /\\ \\ | . ` |  <      \\   /| |  | | |  | |       ||\n"
    "||    | |  | |  | |/ ____ \\| |\\  | . \\      | | | |__| | |__| |       ||\n"
    "||    |_|  |_|  |_/_/    \\_\\_| \\_|_|\\_\\     |_|  \\____/ \\____/        ||\n"
    "||                                                                    ||\n"
    "||--------------------------------------------------------------------||\n"
    "||                THANK YOU FOR VISITING THE ZOO!                     ||\n"
    "||             [ GATE STATUS: CLOSED | SEE YOU SOON ]                 ||\n"
    "||====================================================================||\n";

cout << exit_msg << endl;
}

struct v_ride {
    string ride_name[4] = {"Rollar coaster", "Rotating wheel", "Riding-car", "Rope swing"};
    int ride_price[4] = {150, 100, 100, 200};
};

void ride(int people) {
    v_ride r[4];
    char l_ride = 'y';
    int p_ride = 0, c_ride , dummy = 1;
    
    string insufficient_msg = 
    "||====================================================================||\n"
    "||                                                                    ||\n"
    "||  _____ _   _  _____ _    _ ______ ______ _____ _____ _____ _   _   ||\n"
    "|| |_   _| \\ | |/ ____| |  | |  ____|  ____|_   _/ ____|_   _| \\ | |  ||\n"
    "||   | | |  \\| | (___ | |  | | |__  | |__    | || |      | | |  \\| |  ||\n"
    "||   | | | . ` |\\___ \\| |  | |  __| |  __|   | || |      | | | . ` |  ||\n"
    "||  _| |_| |\\  |____) | |__| | |    | |     _| || |____ _| |_| |\\  |  ||\n"
    "|| |_____|_| \\_|_____/ \\____/|_|    |_|    |_____\\_____|_____|_| \\_|  ||\n"
    "||                                                                    ||\n"
    "||--------------------------------------------------------------------||\n"
    "||                [!] ERROR: INSUFFICIENT AMOUNT [!]                  ||\n"
    "||             PLEASE CHECK YOUR BALANCE AND TRY AGAIN                ||\n"
    "||====================================================================||\n";

    string rides_final = 
        "      ____                                               ____\n"
        "     /  _ \\                                             / _  \\\n"
        "    (  (_) )===========================================( (_)  )\n"
        "     \\____/                                             \\____/\n"
        "      ||   ______   _   _____    _______   ______        ||\n"
        "      ||  |  __  \\ | | |  __ \\  |  _____| /  ____|       ||\n"
        "      ||  | |__)  || | | |  \\ \\ | |____   | (___         ||\n"
        "      ||  |  _  _/ | | | |   | ||  ____|   \\___  \\       ||\n"
        "      ||  | | \\ \\  | | | |__/ / | |_____   ____) |       ||\n"
        "      ||  |_|  \\_\\ |_| |_____/  |_______| |______/       ||\n"
        "      ||                                                 ||\n"
        "     ____   _________________________________________   ____\n"
        "    /  _ \\                                             / _  \\\n"
        "   (  (_) )===========================================( (_)  )\n"
        "    \\____/                                             \\____/\n";

    cout << rides_final << endl;

    cout << "--> Do you want to take rides : "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"| Press y or Y - For \"YES\" : | "<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"| Press n or N - For \"NO\" : | "<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"\nEnter your answer... ";
    cin >> l_ride;
    cout << endl;
    
    while(dummy == 1){
    if (l_ride == 'y' || l_ride == 'Y') {
        cout << setw(5) << "-----------------------------------------------------" << endl;
        for (int i = 0; i < 4; i++) {
            cout << setw(5) << "| " << i + 1 << "-) For - " << r[i].ride_name[i];
            cout << setw(20) << r[i].ride_price[i] << " |" << endl;
        }
        cout << setw(5) << "-------------------------------------------------" << endl;

        while (l_ride == 'y' || l_ride == 'Y') {
            if (money >= 100) {
            	int p_q = 1;
            	while(p_q == 1){
            		if(p_ride == 0){
                cout << "\n--> How many of you want the ride : ";
                cin >> p_ride;
            }
                if(p_ride>0 && p_ride <= people ){
                cout << "\n--> Which ride do you want : ";
                cin >> c_ride;
                if(c_ride == 1){
                	if(p_ride*r[c_ride - 1].ride_price[c_ride - 1] <= money){
                money = money - (p_ride * r[c_ride - 1].ride_price[c_ride - 1]);
            }else{
            	cout << insufficient_msg << endl;
			}
            }else if(c_ride == 2){
                	if(p_ride*r[c_ride - 1].ride_price[c_ride - 1] <= money){
                money = money - (p_ride * r[c_ride - 1].ride_price[c_ride - 1]);
            }else{
            	cout << insufficient_msg << endl;
			}
            }else if(c_ride == 3){
                	if(p_ride*r[c_ride - 1].ride_price[c_ride - 1] <= money){
                money = money - (p_ride * r[c_ride - 1].ride_price[c_ride - 1]);
            }else{
            	cout << insufficient_msg << endl;
			}
            }else if(c_ride == 5){
                	if(p_ride*r[c_ride - 1].ride_price[c_ride - 1] <= money){
                money = money - (p_ride * r[c_ride - 1].ride_price[c_ride - 1]);
            }else{
            	cout << insufficient_msg << endl;
			}
            }else {
            	cout<<"| INVALID INPUT |"<<endl;
            	cout<<"--> Again enter ... "<<endl;
            	p_q--;
			}
                p_q ++;
            }else{
            	cout << "\n-----------" << endl;
                cout << "| Notice: |" << endl;
                cout << "-----------" << endl;
            	cout<<"\nYou are entering wrong people : "<<endl;
            	cout<<"-------------------------------"<<endl;
            	cout<<"\nAgain enter: "<<endl;
            	cout<<"------------"<<endl;
            	cout << "\n--> How many of you want the ride : ";
                cin >> p_ride;
			}
			}
            }else {
				cout << insufficient_msg << endl;
                l_ride = 'n';
                break;
            }
             if(l_ride == 'y' || l_ride == 'Y'){
			cout << "\n\n-->Do you want to take another ride : "<<endl;
			cout<<"------------------------------"<<endl;
            cout<<"| Press y or Y - For \"YES\" : | "<<endl;
            cout<<"------------------------------"<<endl;
            cout<<"-----------------------------"<<endl;
            cout<<"| Press n or N - For \"NO\" : | "<<endl;
            cout<<"-----------------------------"<<endl;
            cout<<"\nEnter your answer ... ";
            cin >> l_ride;
            if(l_ride == 'y' || l_ride == 'Y'){
            	p_ride = 0;
			}
            }else{
            	l_ride = 'n';
			}
		}
		dummy++;
        }else {
        cout << "-----------" << endl;
        cout << "| Notice: |" << endl;
        cout << "-----------" << endl;

        cout << "\nYour atleast 1 member should take  the any ride : " << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "\n--> How many of you want the ride : ";
        cin >> p_ride;
        l_ride = 'y';
    }
}

    cout<<"------------------------------"<<endl;
    cout << "| Total amount you left is : " << money <<" |"<< endl;
    cout<<"------------------------------"<<endl;
    string thank_you = 
    "||====================================================================||\n"
    "||                                                                    ||\n"
    "||  _______ _    _          _   _ _  __  __     ______  _    _        ||\n"
    "|| |__   __| |  | |   /\\   | \\ | | |/ /  \\ \\   / / __ \\| |  | |       ||\n"
    "||    | |  | |__| |  /  \\  |  \\| | ' /    \\ \\_/ / |  | | |  | |       ||\n"
    "||    | |  |  __  | / /\\ \\ | . ` |  <      \\   /| |  | | |  | |       ||\n"
    "||    | |  | |  | |/ ____ \\| |\\  | . \\      | | | |__| | |__| |       ||\n"
    "||    |_|  |_|  |_/_/    \\_\\_| \\_|_|\\_\\     |_|  \\____/ \\____/        ||\n"
    "||                                                                    ||\n"
    "||--------------------------------------------------------------------||\n"
    "||              THANK YOU FOR VISITING THE JOYLAND!                   ||\n"
    "||            [ SYSTEM SHUTDOWN: WE HOPE YOU ENJOYED ]                ||\n"
    "||====================================================================||\n";

cout << thank_you << endl;
    
} 

struct haunted {
    int index;
    int name_index[4] = {1,2,3,4};
};
void clearPortion(int length) {
    for (int i = 0; i < length; i++)
        cout << "\b \b";
}
void haunted_house() {
	int a_allien = 0  , a_skeleton = 0 ,a_zombies = 0 , a_demogorgans = 0;
	string name[4][2] ;
	string name1[4] = {"Alliens", "Skeletons", "Demogorgans", "Zombies"};
	string index1[4];
	int c_zombies = 0 , c_allien = 0 , c_skeleton = 0 , c_demogorgans = 0 , choice_haunted = 0;
    haunted h[4];
    bool repeat;
    int index_c[4] , choice= 0 , w_l_house = 1 , l_house_quiz = 0 , quiz_l = 1 , l_check = 1;
	stringstream ss;
	
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
    
   for(int i = 0 ; i < 4 ; i++){
   	name[i][0] = name1[i];
   }
   
   
   for(int i = 0 ; i < 4 ; i++){
   	ss.str("");
   	ss.clear();
   	
   	ss << h[i].index;
   	name[i][1] = ss.str();
   }    
   
   cout<<"<========== Quick See this : ==========>"<<endl;
    cout<<"---------------\t\t"<<"------------"<<endl;
    cout<<"| Characters: |\t\t"<<"| Position |"<<endl;
    cout<<"---------------\t\t"<<"------------\n"<<endl;
    
   for(int i = 0 ; i < 4; i++){
	for(int j = 0 ; j < 2 ; j++){
	cout<<" "<<name[i][j]<<"\t \t ";	
	}	
	cout<<endl;
	
	}
	
	Sleep(1800);
	
	for (int i = 0; i < 9; i++) {
        cout << "\x1b[A";
    }

    for (int i = 0; i < 4; i++) {
        cout << "\r                                               \r";
        if (i < 3) cout << endl;
    }
    
    //Frontend:
    
    string haunted_house = 
    "      ____                                               ____\n"
    "     /  _ \\                                             / _  \\\n"
    "    (  (_) )===========================================( (_)  )\n"
    "     \\____/                                             \\____/\n"
    "      ||    _   _     _     _   _  _   _  _____  ____     ||\n"
    "      ||   | | | |   / \\   | | | || \\ | ||_   _||  __|    ||\n"
    "      ||   | |_| |  / _ \\  | | | ||  \\| |  | |  |  _|     ||\n"
    "      ||   |  _  | / ___ \\ | |_| || |\\  |  | |  | |__     ||\n"
    "      ||   |_| |_|/_/   \\_\\ \\___/ |_| \\_|  |_|  |____|    ||\n"
    "      ||    _   _  ____  _   _  ____  _____               ||\n"
    "      ||   | |_| ||    || | | || ___||  ___|              ||\n"
    "      ||   |  _  || |  || |_| ||__  ||  __|               ||\n"
    "      ||   |_| |_||____| \\___/ |____||_____|              ||\n"
    "     ____                                               ____\n"
    "    /  _ \\  _________________________________________  / _  \\\n"
    "   (  (_) )===========================================( (_)  )\n"
    "    \\____/                                             \\____/\n";

cout << haunted_house << endl;
    
    
    cout<<"--> Lets Take a quick quiz : "<<endl;
    
    cout<<setw(10)<<"-----------------------------------"<<endl;
    cout<<setw(10)<<"| Choice the Position from 1 to 4 |"<<endl;
    cout<<setw(10)<<"-----------------------------------"<<endl;
    
    cout<<"---------------\t\t"<<"------------"<<endl;
    cout<<"| Characters: |\t\t"<<"| Position |"<<endl;
    cout<<"---------------\t\t"<<"------------\n"<<endl;
    
    for(int i  = 0 ; i < 4; i++){
    	
    	cout<<i+1<<" - "<<name[i][0]<<"\t\t\t";
    	
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
	
	while(quiz_l == 1){
		
		if(money >= 50){
	cout<<"\n-------------------------"<<endl;
	cout<<"| Press 1 - For "<<name[0][0]<<" |"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"| Press 2 - For "<<name[1][0]<<" |"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"| Press 3 - For "<<name[2][0]<<" |"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"| Press 4 - For "<<name[3][0]<<" |"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"| Press 5 - For Exit "<<" |"<<endl;
	cout<<"-----------------------"<<endl;
	
	cout<<"\n--> Enter your answer ... ";
	cin>>choice_haunted;
	
	
	if(choice_haunted == 1){
		if(a_allien == 0){
		for(int i = 0 ; i < 3 ; i++){
		cout<<"-------------"<<endl;
		cout<<"| "<<i+1<<" Chance: |"<<endl;
		cout<<"-------------"<<endl;
		
		cout<<"--> How many Alliens are thier : ";
		cin>>c_allien;
		
		if(c_allien == e_haunted[0]){
			cout<<"-----------------------------------"<<endl;
			cout<<"| Congratulation!!! . You Won !!! |"<<endl;
			cout<<"-----------------------------------"<<endl;
			money += 50;
			break;
		}else{
			cout<<"---------------"<<endl;
			cout<<"| You lose!!! |"<<endl;
			cout<<"---------------"<<endl;
			
			cal = (c_allien - e_haunted[0])*10;
			
			if(cal < 0 ){
				cal = cal * -1;
			}
			
			money -= cal;
		}
	}
	a_allien++;
}else{
	cout<<"__________________________________________"<<endl;
	cout<<"| You have Already Visited this area.... |"<<endl;
	cout<<"------------------------------------------"<<endl;
}
		cout<<"---------------------------------"<<endl;
		cout<<"| IF YOU WANT TO AGAIN CHOICE : |"<<endl;
		cout<<"---------------------------------"<<endl;
		
	}else if(choice_haunted == 2){
		if(a_skeleton == 0){
		
		for(int i = 0 ; i < 3 ; i++){
			cout<<"-------------"<<endl;
		cout<<"| "<<i+1<<" Chance: |"<<endl;
		cout<<"-------------"<<endl;
		
		cout<<"-- > How many Skeletons are thier : ";
		cin>>c_skeleton;
		
			if(c_skeleton == e_haunted[1]){
			cout<<"-----------------------------------"<<endl;
			cout<<"| Congratulation!!! . You Won !!! |"<<endl;
			cout<<"-----------------------------------"<<endl;
			money += 50;
			break;
		}else{
			cout<<"---------------"<<endl;
			cout<<"| You lose!!! |"<<endl;
			cout<<"---------------"<<endl;
			
			cal = (c_skeleton - e_haunted[1])*10;
			
			if(cal < 0 ){
				cal = cal * -1;
			}
			
			money -= cal;
		}
		
		cout<<"---------------------------------"<<endl;
		cout<<"| IF YOU WANT TO AGAIN CHOICE : |"<<endl;
		cout<<"---------------------------------"<<endl;
		
}
     a_skeleton++;
}else{
	cout<<"__________________________________________"<<endl;
	cout<<"| You have Already Visited this area.... |"<<endl;
	cout<<"------------------------------------------"<<endl;
}
	}else if(choice_haunted == 3){
		if(a_demogorgans == 0){
		cout<<"-----------------------------------"<<endl;
			cout<<"| Congratulation!!! . You Won !!! |"<<endl;
			cout<<"-----------------------------------"<<endl;
			
			string price  = "| --> Take your price 50-Rs. |";
			
		cout<<"\n------------------------------"<<endl;
		for(int i = 0; i < price.length() ; i++){
			cout<<price[i];
			Sleep(100);
		}
		cout<<"\n------------------------------"<<endl;
		
		cout<<"\n----------------------------------"<<endl;
		cout<<"| IF YOU WANT TO AGAIN CHOICE : |"<<endl;
		cout<<"----------------------------------"<<endl;
		a_demogorgans++;
}else{
	cout<<"__________________________________________"<<endl;
	cout<<"| You have Already Visited this area.... |"<<endl;
	cout<<"------------------------------------------"<<endl;
}
	}else if(choice_haunted == 4){
		if(a_zombies == 0){
		for(int i = 0 ; i < 3 ; i++){
			cout<<"-------------"<<endl;
		cout<<"| "<<i+1<<" Chance: |"<<endl;
		cout<<"-------------"<<endl;
		
		cout<<"--> How many Zombies are their : ";
		cin>>c_zombies;
		
		if(c_zombies == e_haunted[3]){
			cout<<"-----------------------------------"<<endl;
			cout<<"| Congratulation!!! . You Won !!! |"<<endl;
			cout<<"-----------------------------------"<<endl;
			money += 50;
			break;
		}else{
			cout<<"---------------"<<endl;
			cout<<"| You lose!!! |"<<endl;
			cout<<"---------------"<<endl;
			
			cal = (c_zombies - e_haunted[3])*10;
			
			if(cal < 0 ){
				cal = cal * -1;
			}
			
			money -= cal;
		}
		
		cout<<"---------------------------------"<<endl;
		cout<<"| IF YOU WANT TO AGAIN CHOICE : |"<<endl;
		cout<<"---------------------------------"<<endl;
		
	}
	a_zombies++;
}else{
	cout<<"__________________________________________"<<endl;
	cout<<"| You have Already Visited this area.... |"<<endl;
	cout<<"------------------------------------------"<<endl;
}
}else if(choice_haunted == 5){
	cout<<"------------------------------"<<endl;
	string exit_msg = 
    "||====================================================================||\n"
    "||                                                                    ||\n"
    "||  _______ _    _          _   _ _  __  __     ______  _    _        ||\n"
    "|| |__   __| |  | |   /\\   | \\ | | |/ /  \\ \\   / / __ \\| |  | |       ||\n"
    "||    | |  | |__| |  /  \\  |  \\| | ' /    \\ \\_/ / |  | | |  | |       ||\n"
    "||    | |  |  __  | / /\\ \\ | . ` |  <      \\   /| |  | | |  | |       ||\n"
    "||    | |  | |  | |/ ____ \\| |\\  | . \\      | | | |__| | |__| |       ||\n"
    "||    |_|  |_|  |_/_/    \\_\\_| \\_|_|\\_\\     |_|  \\____/ \\____/        ||\n"
    "||                                                                    ||\n"
    "||--------------------------------------------------------------------||\n"
    "||                YOU SURVIVED THE HAUNTED HOUSE!                     ||\n"
    "||             [ THE SPIRITS WILL AWAIT YOUR RETURN ]                 ||\n"
    "||====================================================================||\n";

	for(int i = 0 ; i < exit_msg.length() ; i++){
		cout << exit_msg[i];
		Sleep(0.1);
	}
	cout<<"\n------------------------------"<<endl;
		quiz_l++;
	}
	
}else{
	cout << "\n-----------" << endl;
    cout << "| Notice: |" << endl;
    cout << "-----------" << endl;
    cout<<"------------------------------------"<<endl;
	cout<<"| You Don't have enough amount !!! |"<<endl;
	cout<<"------------------------------------"<<endl;
	
	quiz_l++;
}
}

        cout<<"-----------------------------------"<<endl;
        cout << "| Total amount you left is : " << money <<" |"<< endl;
        cout<<"-----------------------------------"<<endl;
	
}

int main(){
    int p = 0, w_choice = 1, choice;
    int l_c = 1;

   string simple_jurassic = 
        "                                   _______________________________________________________        \n"
        "                                  /                                                       \\       \n"
        "                             ____/      _____________________________________________      \\____  \n"
        "                            /    \\     |                                             |     /    \\ \n"
        "                           | [##] |    |  JJJJJ  U   U  RRRR   AAA   SSSS  IIIII   CCCC|  | [##] |\n"
        "                           |      |    |      J  U   U  R   R A   A S        I    C    |  |      |\n"
        "                           | [##] |    |      J  U   U  RRRR  AAAAA  SSS     I    C    |  | [##] |\n"
        "                           |      |    |  J   J  U   U  R R   A   A     S    I    C    |  |      |\n"
        "                           | [##] |    |   JJJ    UUU   R  R  A   A SSSS   IIIII   CCCC|  | [##] |\n"
        "                           |      |    |_____________________________________________|    |      |\n"
        "                           | [##] |                                                       | [##] |\n"
        "                           |______|            A M U S E M E N T   P A R K                |______|\n"
        "                              ||       _____________________________________________         ||    \n"
        "                             _||______/_____________________________________________\\________||_   \n"
        "                            |___________________________________________________________________| \n";

    cout <<simple_jurassic << endl;
    cout<<endl;
    
    box();
    
    cout << setw(10) << "-> Allowed people are from 1 to 10 : " << endl;
    cout<<setw(10) << "-----------------------------------"<<endl;
    
    
    while(l_c == 1){
    cout << "\n--> How many people are you : ";
      cin >> p;
      cout << setw(10) << "-----------------------------------"<<endl;
      int *ptr_p = &p;
      

    if(*ptr_p >10 || *ptr_p<=0){
    	
    	cout<<"\n------------------"<<endl;
    	cout<<"| Again enter... |"<<endl;
    	cout<<"------------------"<<endl;
    	
    	cout << setw(10) << "\n-> Allowed people are from 1 to 5" << endl;
    	
    
    	
	} else {
		int people[p];
    for (int i = 0; i < p; i++) {
        people[i] = i + 1;
    }

    menu(people, ptr_p);
		l_c++;
	}
}
    
    cout << "\n" << setw(80) << "---------------------" << endl;
    cout << setw(80) << "| AREA FOR VISITING |" << endl;
    cout << setw(81) << "---------------------\n" << endl;

    while (w_choice == 1) {
        cout << "\n --> Which area in which you want to enter : "<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<"\t___________"<<endl;
        cout<<"\t| 1- ZOO: |"<<endl;
        cout<<"\t-----------"<<endl;
        cout<<"\t_______________________"<<endl;
        cout<<"\t| 2- RIDES [JOYLAND]: |"<<endl;
        cout<<"\t-----------------------"<<endl;
        cout<<"\t_____________________"<<endl;
        cout<<"\t| 3- HAUNTED HOUSE: |"<<endl;
        cout<<"\t---------------------"<<endl;
        cout<<"\t____________"<<endl;
        cout<<"\t| 4- EXIT: |"<<endl;
        cout<<"\t------------"<<endl;
        cout<<"\n--> Enter your answer... ";
        cin >> choice;

        if (choice == 1) {
        	if(money >= 500){
            money -= 500; 
			zoo(p);
		}else{
			cout<<"\n---------------------------"<<endl;
			cout<<"| Insufficient amount !!! |"<<endl;
			cout<<"---------------------------"<<endl;
		}
        } else if (choice == 2) {
        	if(money >= 100){
            ride(p);
        }else{
        	cout<<"\n---------------------------"<<endl;
			cout<<"| Insufficient amount !!! |"<<endl;
			cout<<"---------------------------"<<endl;
		}
        } else if (choice == 3) {
        	if(money >= 250){
            haunted_house();
        }else{
        	cout<<"\n---------------------------"<<endl;
			cout<<"| Insufficient amount !!! |"<<endl;
			cout<<"---------------------------"<<endl;
		}
        }else if(choice == 4){
        	
        	string message = "| THANK YOU SO MUCH FOR VISITING: |";
        	cout<<"___________________________________"<<endl;
        	for(int i = 0 ; i < message.length() ; i++){
        		cout<<message[i];
        		Sleep(100);
			}
        	cout<<"\n-----------------------------------"<<endl;
        	return 0 ;
		} else {
            cout << "Invalid!!! , Enter again... " << endl;
        }
    }
    return 0; 
}