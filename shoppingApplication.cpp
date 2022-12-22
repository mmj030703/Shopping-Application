#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class sign_up {
    private :
        //sign-up email and password taking from user
        char s_email[30] = "mj04467@gmail.com";
        char s_pass[30] = "mayankjain";

        //login email and password for checking authenticity
        char l_email[30];
        char l_pass[30];
    public :
        int user_inputData (int select1) {
            if (select1 == 1 || select1 == 2) {
                    system ("cls");
            }
            switch (select1) {
                    case 1:
	                        cout << endl << "\t\t ================================================================================" << endl;
	                        cout << "\t\t|\t\t\t\t     SIGN UP\t\t\t\t\t |" << endl;
	                        cout << "\t\t ================================================================================" << endl << endl;
	                        cout << "\t\tEnter Account Details : " << endl << endl;
	                        cout << "\t\tEmail Id : ";
	                        cin >> s_email;
	                        cout << "\t\tPassword : ";
	                        cin >> s_pass;
	                        cout << endl;
	                        cout << "\t\tSign Up Successful." << endl << endl;
	                        cout << "\t\tPress Any Key to fill Personal Details : ";
	                        char next_page[10];
	                        cin >> next_page;
	                        return select1;
	                        break;
                    case 2:
                        	int login_email, login_pass;
                        	int login;
                        	int login_clr_scr;
                        	login_clr_scr = 1;
                        	cout << endl << "\t\t ================================================================================" << endl;
                        	cout << "\t\t|\t\t\t\t       LOGIN\t\t\t\t\t |" << endl;
                        	cout << "\t\t ================================================================================" << endl << endl;
                        	while (login != 1) {
                                if (login_clr_scr != 1) {
                        		        system ("cls");
                        		        cout << endl << "\t\t ================================================================================" << endl;
                        		        cout << "\t\t|\t\t\t\t       LOGIN\t\t\t\t\t |" << endl;
                        		        cout << "\t\t ================================================================================" << endl << endl;
	                            }

	                            cout << "\t\tEmail : ";
	                            cin >> l_email;
                        
	                            cout << "\t\tPassword : ";
	                            cin >> l_pass;
                        
	                            cout << endl;
	                            /* Strings can be made to directly compare with standard 
	                               operators whereas characters of array can't be compared 
	                               with standard operator */
	                            login_email = strcmp (s_email, l_email);	// string str = "bhai_kaise_ho", str1 = "accha_hu";
	                            login_pass = strcmp (s_pass, l_pass);	// if(str == str1)
	                            // cout<< "Same hain bhai.";
	                            // else
	                            // cout<< "Same nahi hain bhai.";
	                            if (login_email == 0 && login_pass == 0) {
		                                cout << "\t\tLogin Successful." << endl << endl;
		                                login = 1;
	                            }
	                            else {
		                                cout << "\t\tWrong Details." << endl << "\t\tEnter Email and Password again." << endl << endl;
		                                cout << "\t\tPress Any Key to Enter Again : ";
		                                cin >> next_page;
	                            }
	                            login_clr_scr++;
	                        }

	                        cout << "\t\tPress Any Key to see Menu : ";

	                        cin >> next_page;

	                        return 0;
	                        break;

                    default:
	                        cout << endl << endl << "\t\tWrong Input. " << endl << endl;
	                        cout << "\t\tPress Any key for selecting Option Again. ";
	                        cin >> next_page;
	                        system ("cls");
                        
                            cout << endl << "\t\t ================================================================================" << endl;
	                        cout << "\t\t|\t\t\t\t       LOGIN\t\t\t\t\t |" << endl;
	                        cout << "\t\t ================================================================================" << endl << endl;
                        
	                        while (select1 != 1 || select1 != 2) {
	                                cout<< endl << "\t\t1) Don't have Account " << endl << endl << "\t\t2) Login to Account" << endl << endl;
	                                cout << "\t\tSelect Option Again : ";
	                                cin >> select1;
	                                user_inputData (select1);
	                                return select1;
	                        }

            }
             return 0;
        }

};

class personal_details {
    public:
        string user_name;
        string user_contact;
        string user_address;
        string user_state;
        string user_city;
        string user_country;

        int user_details () {
            system ("cls");
            string next_page;

            cout << endl << "\t\t ================================================================================" << endl;
            cout << "\t\t|\t\t\t\t  PERSONAL INFORMATION\t\t\t         |" << endl;
            cout << "\t\t ================================================================================" << endl << endl;
      
            getline (cin, next_page);
            cout << "                Name : ";
            getline (cin, user_name);
        
            cout << endl << "\t\tContact Number : ";
            getline (cin, user_contact);
        
            cout << endl << "\t\tAddress : ";
            getline (cin, user_address);
        
            cout << endl << "                City : ";
            cin >> user_city;
        
            cout << endl << "                State : ";
            cin >> user_state;
        
            cout << endl << "                Country : ";
            cin >> user_country;
        
            cout << endl << endl << "\t\tDetails Saved." << endl << endl;
        
            cout << "\t\tPress Any Key to see Menu. ";
            cin >> next_page;
            
            return 0;
        }
    
        int user_show() {  
              int select;
              
              cout << endl << "\t\t ================================================================================" << endl;
              cout << "\t\t|\t\t\t\t  PERSONAL INFORMATION\t\t\t         |" << endl;
              cout << "\t\t ================================================================================" << endl << endl;
              
              cout << "                Name : " << user_name << endl << endl;
        
              cout << endl << "\t\tContact Number : " << user_contact << endl << endl;
        
              cout << endl << "\t\tAddress : " << user_address << endl <<endl;
        
              cout << endl << "                City : " << user_city << endl << endl;
        
              cout << endl << "                State : " << user_state << endl << endl;
        
              cout << endl << "                Country : " << user_country << endl << endl;
        
              cout << "\t\tPress Any Key to Continue : ";
              string next_page;
              cin >> next_page;
              
              system("cls");
              
              end_menu : 
              cout << endl << "\t\t ================================================================================" << endl;
	          cout << "\t\t|\t\t\t\t   SHOPPERS BAY\t\t\t\t         |" << endl;
	          cout << "\t\t ================================================================================" << endl << endl;
              
              cout << endl << endl << "\t\t1) Go to Previous Menu " << endl << endl << "\t\t2) Go to Main Menu" << endl << endl;
	          cout << "\t\tSelect option to continue : ";
	          cin >> select;
        
	          if (select == 1) {
	              return 1;
	            }
	          else if (select == 2) {
	              return 0;
	            }
	          else {
	              cout << endl << endl << "\t\tWrong Input. " << endl << endl << "\t\tPress any key to enter again : ";
	              cin >> next_page;
	              system ("cls");
	              goto end_menu;
	          }      
              return 0;
        }
};

class main_menu {
    private:
        string menu_option[4];	//Main Menu options stored here.
        int select2;
    public:
        int first_menu () {
            menu_option[0] = "  Start Shopping    ";
            menu_option[1] = "    My Account      ";
            
            main_menu :
            string next_page;
            cout << endl << "\t\t ================================================================================" << endl;
            cout << "\t\t|\t\t\t\t   MAIN MENU\t\t\t\t\t |" << endl;
            cout << "\t\t ================================================================================" << endl << endl;
        
            int i = 0;
            while (i < 2) {
	        cout << "\t\t -------------------------" << endl;
	        cout << "\t\t| " << i + 1 << ") " << menu_option[i] << " |" << endl;
	        cout << "\t\t -------------------------" << endl << endl;
	        i++;
            }
            cout << "\t\tWhat do you want to do ?" << endl << endl;
            cout << "\t\tYour Selection : ";
            cin >> select2;
            switch (select2) {
                case 1:
	                   return select2;
	                   break;
                case 2:
	                   return select2;
	                   break;
        
                default:
                       cout << endl << endl << "\t\tWrong Input. " << endl << endl;
	                   cout << "\t\tPress Any key for selecting Option Again. ";
	                   cin >> next_page;
	                   system ("cls");
	                   goto main_menu;
            }
            return 0;
        }

};

class start_shopping {
    private :
        string menu_option1[4];//Shopping Menu options stored here.
        int select3;
    public:
        int shopping_menu () {
            system ("cls");
            menu_option1[0] = "   ELECTRONICS    ";
            menu_option1[1] = "    GROCERY       ";
            menu_option1[2] = "   COSMETICS      ";
            menu_option1[3] = "  PREVIOUS MENU   ";
            
            string next_page;
        
            int return_val;
            shopping_menu :
            cout << endl << "\t\t ================================================================================" << endl;
            cout << "\t\t|\t\t\t\t   SHOPPING MENU\t\t\t\t |" << endl;
            cout << "\t\t ================================================================================" << endl << endl;
        
            int i = 0;
            while (i < 4) {
	            cout << "\t\t-------------------------" << endl;
	            cout << "\t\t| " << i + 1 << ") " << menu_option1[i] << " |" << endl;
	            cout << "\t\t-------------------------" << endl << endl;
	            i++;
            }
            cout << "\t\tWhat You Want To Buy ?" << endl << endl;
            cout << "\t\tYour Selection : ";
            cin >> select3;
            switch (select3) {
                    case 1:
	                        return_val = electronics ();
	                        return return_val;
                    case 2:
	                        grocery();
	                        break;
                    case 3:
	                        cosmetics();
	                        break;
                    case 4:
	                        break;
                    default:
                            cout << endl << endl << "\t\tWrong Input. " << endl << endl;
	                        cout << "\t\tPress Any key for selecting Option Again. ";
	                        cin >> next_page;
	                        system ("cls");
	                        goto shopping_menu;
            }
        
            return 0;
        }

        int electronics () {
            system ("cls");
        
            string menu_option5[3];
        
            menu_option5[0] = "      SMART-PHONES      ";
            menu_option5[1] = "        LAPTOPS         ";
            menu_option5[2] = "          TVs           ";
        
            string next_page;
            int select7;
            int return_val;
            
            electronics_menu :
            cout << endl << "\t\t ================================================================================" << endl;
            cout << "\t\t|\t\t\t\t   ELECTRONICS\t\t\t\t\t |" << endl;
            cout << "\t\t ================================================================================" << endl << endl;
        
            int i = 0;
            while (i < 3) {
	        cout << "\t\t------------------------------" << endl;
	        cout << "\t\t| " << i + 1 << ") " << menu_option5[i] << "|" << endl;
	        cout << "\t\t------------------------------" << endl << endl;
	        i++;
            }
            cout << "\t\tWhat You Want To Buy ?" << endl << endl;
            cout << "\t\tYour Selection : ";
            cin >> select7;
            switch (select7) {
                case 1:
                        //return_val = smart_phones ();
                        //return return_val;
                        smart_phones();
                        break;
                case 2:
                        laptops();
                        break;
                case 3: 
                        tv();
                        break;
                default:
                        cout << endl << endl << "\t\tWrong Input. " << endl << endl;
                        cout << "\t\tPress Any key for selecting Option Again. ";
                        cin >> next_page;
                        system ("cls");
                        goto electronics_menu;
        
              }
        
            return 0;
        }

        int smart_phones () {
            system ("cls");
            string menu_option6[5];
            menu_option6[0] = "      APPLE       ";
            menu_option6[1] = "     ONEPLUS      ";
            menu_option6[2] = "     SAMSUNG      ";
            menu_option6[3] = "     MOTOROLA     ";
            menu_option6[4] = "      XIOMI       ";
    
            string next_page;
            int select8;
            int return_val;
        
            smart_phones_menu :
            cout << endl << "\t\t ================================================================================" << endl;
            cout << "\t\t|\t\t\t\t   SMART-PHONES\t\t\t\t\t |" << endl;
            cout << "\t\t ================================================================================" << endl << endl;
            int i = 0;
            while (i < 5) {
        	    cout << "\t\t------------------------" << endl;
        	    cout << "\t\t| " << i + 1 << ") " << menu_option6[i] << "|" << endl;
        	    cout << "\t\t------------------------" << endl << endl;
        	    i++;
            }
            cout << "\t\tWhat You Want To Buy ?" << endl << endl;
            cout << "\t\tYour Selection : ";
            cin >> select8;
            switch (select8) {
                case 1:
	                    /*return_val = sp_apple ();
	                    return return_val;
                        */
                        sp_apple();
                        return 0;
                case 2:
                        sp_oneplus();
	                    break;
                case 3:
                        sp_samsung();
	                    break;
                case 4:
	                    sp_motorola();
	                    break;
                case 5:
	                    sp_xiomi();
	                    break;
                default:
                        cout << endl << endl << "\t\tWrong Input. " << endl << endl;
	                    cout << "\t\tPress Any key for selecting Option Again. ";
	                    cin >> next_page;
	                    system ("cls");
	                    goto smart_phones_menu;
            }
        
            return 0;
        }

        int sp_apple () {
            apple_menu:
            system ("cls");
            string menu_option7[2];
            menu_option7[0] = "   iPhone 13 Pro    ";
            menu_option7[1] = "     iPhone 13      ";
        
            int select9;
            int buy_select;
            int buy_select1;
            char next_page[3];

            cout << endl << "\t\t ================================================================================" << endl;
            cout << "\t\t|\t\t\t\t   APPLE IPHONE\t\t\t\t\t |" << endl;
            cout << "\t\t ================================================================================" << endl << endl;

            int i = 0;
            while (i < 2) {
	        cout << "\t\t--------------------------" << endl;
	        cout << "\t\t| " << i + 1 << ") " << menu_option7[i] << "|" << endl;
	        cout << "\t\t--------------------------" << endl << endl;
	        i++;
            }
            cout << "\t\tWhat You Want To Buy ?" << endl << endl;
            cout << "\t\tYour Selection : ";
            cin >> select9;
            switch (select9) {
                case 1:
        	            system ("cls");
        	            cout << endl << "\t\t ================================================================================" << endl;
        	            cout << "\t\t|\t\t\t\t   iPhone 13 Pro\t\t\t\t |" << endl;
        	            cout << "\t\t ================================================================================" << endl << endl;
        
        	            cout << endl << "\t\tRAM = 6 GB" << endl << endl;
        	            cout << endl << "\t\tSTORAGE = 256 GB" << endl << endl;
        	            cout << endl << "\t\tPROCESSOR = A15 Bionic Chip" << endl << endl;
        	            cout << endl << "\t\tCAMERA = Pro 12 MP, Telephoto, Wide and Ultra Wide Cameras" << endl << endl;
	                    cout << endl << "\t\tCOLORS AVAILABLE = Red, Blue, Black " << endl << endl << endl;

	                    int quantity;
	                    cout << endl << "\t\tEnter Quantity : ";
	                    cin >> quantity;
	                    cout << endl << endl;
	                    cout << "\t\t\t\t   --------------------------" << endl;
	                    cout << "\t\t\t\t   | " << "PRICE = Rs. 1,20,000 " << "  |" << endl;
	                    cout << "\t\t\t\t   --------------------------" << endl << endl << endl;
	                    cout << "\t\tPress any key to Continue : ";
	                    cin >> next_page;
	                    system ("cls");
                    
	                    cout << endl << "\t\t ================================================================================" << endl;
	                    cout << "\t\t|\t\t\t\t   iPhone 13 Pro\t\t\t\t |" << endl;
	                    cout << "\t\t ================================================================================" << endl << endl;


                        buy:
	                    cout << "\t\t1) Buy Now " << endl << endl << "\t\t2) Shop More " <<
	                    endl << endl << "\t\t3) Go to Main Menu " << endl << endl;
	                    cout << "\t\tWhat do you want to do ? : ";
	                    cin >> buy_select;

	                    if (buy_select == 1) {
	                        string name = "iPhone 13 Pro";
	                        string str_price = "1,20,000";
	                        long price = 120000;
	                        confirm_order (name, str_price, price, quantity);
	                        //int return_val = 1;
	                        //return return_val;
	                        // pending.....
	                        //confirmation page to buy
                       	}
                       	else if (buy_select == 2) {
                       	    system ("cls");
                       	    shopping_menu ();
                       	  }
                       	else if (buy_select == 3) {
                       	    break;
                       	  }
                       	else
                       	  {
                       	    cout << endl << "\t\tWrong Input. " << endl << endl << "\t\tPress any key to enter again : ";
                       	    cin >> next_page;
                       	    system ("cls");
                       	    cout << endl << "\t\t ================================================================================" << endl;
                       	    cout << "\t\t|\t\t\t\t   iPhone 13 Pro\t\t\t\t\t |" << endl;
                       	    cout << "\t\t ================================================================================" << endl << endl;
                       	    cout << endl;
                       	    goto buy;
                       	  }
                       	    break;
                case 2:
	                    system ("cls");
	                    cout << endl << "\t\t ================================================================================" << endl;
                    	cout << "\t\t|\t\t\t\t   iPhone 13\t\t\t\t        |" << endl;
                    	cout << "\t\t ================================================================================" << endl << endl;
                    	cout << endl << "\t\tRAM = 6 GB" << endl << endl;
                    	cout << endl << "\t\tSTORAGE = 128 GB" << endl << endl;
                    	cout << endl << "\t\tPROCESSOR = Hexa-Core A15 Bionic Chip Processor" << endl << endl;
                    	cout << endl << "\t\tCAMERA = Wide And Ultra-Wide Cameras, R: 12MP + 12MP | F: 12MP" << endl << endl;
                    	cout << endl << "\t\tCOLORS AVAILABLE = Red, Blue, Black " << endl << endl << endl;
                    	cout << endl << "\t\tEnter Quantity : ";
                    	cin >> quantity;
                    	cout << endl << endl << endl;
                    	cout << "\t\t\t\t   --------------------------" << endl;
                    	cout << "\t\t\t\t   | " << "  PRICE = Rs. 73,990 " << "  |" << endl;
                    	cout << "\t\t\t\t   --------------------------" << endl;
                    	cout << endl << "\t\tPress any key to Continue : ";
                    	cin >> next_page;
                    	system ("cls");
                    	cout << endl << "\t\t ================================================================================" << endl;
                    	cout << "\t\t|\t\t\t\t   iPhone 13\t\t\t\t        |" << endl;
                    	cout << "\t\t ================================================================================" << endl << endl;
                        buy1:
                    	cout << "\t\t1) Buy Now " << endl << endl << "\t\t2) Shop More " << endl << endl << "\t\t3) Go to Main Menu" << endl << endl;
                    	cout << "\t\tWhat do you want to do ? : ";
                    	cin >> buy_select;
                    	if (buy_select == 1) {
                    	    string name = "iPhone 13";
                    	    string str_price = "73,990";
                    	    long price = 73990;
                	        confirm_order (name, str_price, price, quantity);
                    	}
                    	else if (buy_select == 2) {
                    	        system ("cls");
                    	        shopping_menu ();
                    	     }
                    	else if (buy_select == 3) {
                    	        break;
                    	     }
                    	else if (buy_select == 3) {
                    	        system ("cls");
                    	        shopping_menu ();
                    	     }
                    	else {
                    	        cout << endl << "\t\tWrong Input. " << endl << endl << "\t\tPress any key to enter again : ";
                    	        cin >> next_page;
                    	        system ("cls");
                    	        cout << endl << "\t\t ================================================================================" << endl;
                    	        cout << "\t\t|\t\t\t\t   iPhone 13\t\t\t\t\t        |" << endl;
                    	        cout << "\t\t ================================================================================" << endl << endl;
                    	        cout << endl;
                    	        goto buy;
                    	      }
                        break;
                        
                default:
                        {
                         cout << endl << endl << "\t\tWrong Input. " << endl << endl << "\t\tPress any key to enter again : ";
                         cin >> next_page;
                         system ("cls");
                         goto apple_menu;
                         break;
    	                }
            }
    
                return 0;
        }
  
        int sp_oneplus() {
            oneplus_menu:
            system ("cls");
            string menu_option8[1];
            menu_option8[0] = "   OnePlus 9 Pro 5G    ";
            int select9;
            int buy_select;
            int buy_select1;
            char next_page[3];

            cout << endl << "\t\t ================================================================================" << endl;
            cout << "\t\t|\t\t\t\t   ONE PLUS\t\t\t\t\t |" << endl;
            cout << "\t\t ================================================================================" << endl << endl;
            int i = 0;
            while (i < 1) {
        	    cout << "\t\t----------------------------" << endl;
        	    cout << "\t\t| " << i + 1 << ") " << menu_option8[i] << "|" << endl;
        	    cout << "\t\t----------------------------" << endl << endl;
        	    i++;
            }
            cout << "\t\tWhat You Want To Buy ?" << endl << endl;
            cout << "\t\tYour Selection : ";
            cin >> select9;

            switch (select9) {
                    case 1:
	                        system ("cls");
                        	cout << endl << "\t\t ================================================================================" << endl;
                        	cout << "\t\t|\t\t\t\t   OnePlus 9 PRO\t\t\t\t |" << endl;
                        	cout << "\t\t ================================================================================" << endl << endl;
                        	cout << endl << "\t\tSIZE = 17.02 cm (6.7\"), QHD Plus" << endl << endl;
                        	cout << endl << "\t\tRAM = 12 GB" << endl << endl;
                        	cout << endl << "\t\tSTORAGE = 256 GB" << endl << endl;
                        	cout << endl << "\t\tPROCESSOR = Qualcomm Snapdragon Octa Core 888 Processor" << endl << endl;
                        	cout << endl << "\t\tCAMERA = R: 50MP + 48MP + 8MP + 2MP | F: 16MP" << endl << endl;
                        	cout << endl << "\t\tCOLORS AVAILABLE = Red, Blue, Black " << endl << endl << endl;
                        	int quantity;
                        	cout << endl << "\t\tEnter Quantity : ";
                        	cin >> quantity;
                        	cout << endl << endl;
                        	cout << "\t\t\t\t   --------------------------" << endl;
                        	cout << "\t\t\t\t   | " << "PRICE = Rs. 59,199 " << "    |" << endl;
                        	cout << "\t\t\t\t   --------------------------" << endl << endl << endl;
                        	cout << "\t\tPress any key to Continue : ";
                        	cin >> next_page;
                        	system ("cls");
                        	cout << endl << "\t\t ================================================================================" << endl;
                        	cout << "\t\t|\t\t\t\t   OnePlus 9 PRO\t\t\t\t |" << endl;
                        	cout << "\t\t ================================================================================" << endl << endl;
                            buy:
                        	cout << "\t\t1) Buy Now " << endl << endl << "\t\t2) Shop More " << endl << endl << "\t\t3) Go to Main Menu " << endl << endl;
                        	cout << "\t\tWhat do you want to do ? : ";
                        	cin >> buy_select;
                        	if(buy_select == 1) {
                        	    string name = "OnePlus 9 PRO";
                        	    string str_price = "59,199";
                        	    long price = 59199;
                        	    confirm_order (name, str_price, price, quantity);
                        	}
                        	else if (buy_select == 2) {
                        	            system ("cls");
                        	            shopping_menu ();
                        	     }
                        	else if (buy_select == 3) {
                        	            break;
                        	      }
                        	else {
                        	        cout << endl << "\t\tWrong Input. " << endl << endl << "\t\tPress any key to enter again : ";
                        	        cin >> next_page;
                        	        system ("cls");
                        	        cout << endl << "\t\t ================================================================================" << endl;
                        	        cout << "\t\t|\t\t\t\t   OnePlus 9 PRO\t\t\t\t\t |" << endl;
                        	        cout << "\t\t ================================================================================" << endl << endl;
                            	    cout << endl;
                            	    goto buy;
                        	     }
                            break;
                    default:
                      	    {
                      	     cout << endl << endl << "\t\tWrong Input. " << endl << endl << "\t\tPress any key to enter again : ";
                      	     cin >> next_page;
                      	     system ("cls");
                      	     goto oneplus_menu;
                      	     break;
                  	        }
            }
            return 0;
        }
  
        int sp_samsung() {
            samsung_menu :
            system ("cls");
            string menu_option9[1];

            menu_option9[0] = "   SAMSUNG Galaxy F23 5G    ";

            int select9;
            int buy_select;
            int buy_select1;
            char next_page[3];

            cout << endl << "\t\t ================================================================================" << endl;
            cout << "\t\t|\t\t\t\t   SAMSUNG\t\t\t\t\t |" << endl;
            cout << "\t\t ================================================================================" << endl << endl;

            int i = 0;
            while (i < 1) {
	            cout << "\t\t----------------------------------" << endl;
	            cout << "\t\t| " << i + 1 << ") " << menu_option9[i] << "|" << endl;
	            cout << "\t\t----------------------------------" << endl << endl;
	            i++;
            }
            cout << "\t\tWhat You Want To Buy ?" << endl << endl;
            cout << "\t\tYour Selection : ";
            cin >> select9;

            switch (select9) {
                    case 1:
	                        system ("cls");
	                        cout << endl << "\t\t ================================================================================" << endl;
	                        cout << "\t\t|\t\t\t\t SAMSUNG Galaxy F23 5G\t\t\t         |" << endl;
                            cout << "\t\t ================================================================================" << endl << endl;
	                        cout << endl << "\t\tSIZE = 16.76 cm (6.6)\"), Full HD+ Display" << endl << endl;
	                        cout << endl << "\t\tRAM = 6 GB" << endl << endl;
	                        cout << endl << "\t\tSTORAGE = 128 GB" << endl << endl;
	                        cout << endl << "\t\tPROCESSOR = Snapdragon 750G processor" << endl << endl;
	                        cout << endl << "\t\tCAMERA = 50MP triple camera with 123° Ultra-wide lens" << endl << endl;
	                        cout << endl << "\t\tCOLORS AVAILABLE = Forest Green, Acqa Blue " << endl << endl << endl;

	                        int quantity;
	                        cout << endl << "\t\tEnter Quantity : ";
	                        cin >> quantity;
	                        cout << endl << endl;
	                        cout << "\t\t\t\t   --------------------------" << endl;
	                        cout << "\t\t\t\t   | " << "PRICE = Rs. 18,499 " << "    |" << endl;
	                        cout << "\t\t\t\t   --------------------------" << endl << endl << endl;
	                        cout << "\t\tPress any key to Continue : ";
	                        cin >> next_page;
	                        system ("cls");
                        
	                        cout << endl << "\t\t ================================================================================" << endl;
	                        cout << "\t\t|\t\t\t\t SAMSUNG Galaxy F23 5G\t\t\t         |" << endl;
	                        cout << "\t\t ================================================================================" << endl << endl;


                            buy:
                        	cout << "\t\t1) Buy Now " << endl << endl << "\t\t2) Shop More " << endl << endl << "\t\t3) Go to Main Menu " << endl << endl;
                        	cout << "\t\tWhat do you want to do ? : ";
                        	cin >> buy_select;
                        
                        	if (buy_select == 1) {
                        	    string name = "SAMSUNG Galaxy F23 5G";
                        	    string str_price = "18,499";
                        	    long price = 18499;
                        	    confirm_order (name, str_price, price, quantity);
                        	 }
                        	else if (buy_select == 2) {
                        	            system ("cls");
                        	            shopping_menu ();
                        	     }
                        	else if (buy_select == 3) {
                        	            break;
                        	     }
                        	else {
                        	        cout << endl << "\t\tWrong Input. " << endl << endl << "\t\tPress any key to enter again : ";
	                                cin >> next_page;
                       
	                                system ("cls");
                       
	                                cout << endl << "\t\t ================================================================================" << endl;
	                                cout << "\t\t|\t\t\t\t SAMSUNG Galaxy F23 5G\t\t\t         |" << endl;
	                                cout << "\t\t ================================================================================" << endl << endl;
	                                cout << endl;
	                                goto buy;
	                             }
	                        break;

                    default: 
                             {
                        	   cout << endl << endl << "\t\tWrong Input. " << endl << endl << "\t\tPress any key to enter again : ";
                        	   cin >> next_page;
                        	   system ("cls");
                        	   goto samsung_menu;
                        	   break;
                        	 }
            }

            return 0;
        }
  
        int sp_motorola() {
            motorola_menu :
            system ("cls");

            string menu_option10[1];

            menu_option10[0] = "   MOTOROLA Edge+    ";

            int select9;
            int buy_select;
            int buy_select1;
            char next_page[3];

            cout << endl <<
              "\t\t ================================================================================"
              << endl;
            cout << "\t\t|\t\t\t\t      MOTOROLA\t\t\t\t\t |" << endl;
            cout <<
              "\t\t ================================================================================"
              << endl << endl;
        
            int i = 0;
            while (i < 1)
              {
        	cout << "\t\t----------------------------------" << endl;
        	cout << "\t\t| " << i + 1 << ") " << "   " << menu_option10[i] << "    |" << endl;
        	cout << "\t\t----------------------------------" << endl << endl;
        	i++;
              }
            cout << "\t\tWhat You Want To Buy ?" << endl << endl;
            cout << "\t\tYour Selection : ";
            cin >> select9;
        
            switch (select9)
              {
        
              case 1:
        	system ("cls");
        	cout << endl <<
        	  "\t\t ================================================================================"
        	  << endl;
        	cout << "\t\t|\t\t\t\t MOTOROLA Edge+\t\t\t                 |" << endl;
        	cout <<
        	  "\t\t ================================================================================"
        	  << endl << endl;
        
        	cout << endl << "\t\tSIZE = 17.01 cm (6.7\") Endless Edge 2340 x 1080 FHD+ display" << endl << endl;
        	cout << endl << "\t\tRAM = 12 GB" << endl << endl;
        	cout << endl << "\t\tSTORAGE = 256 GB" << endl << endl;
        	cout << endl << "\t\tPROCESSOR = Qualcomm Snapdragon 865 Octa-Core Processor" << endl << endl;
        	cout << endl <<
        	  "\t\tCAMERA = 108 MP, 16 MP, 8 MP Primary Camera, 25 MP Selfie Camera, HDR10+ Display Technology" <<
        	  endl << endl;
        	cout << endl << "\t\tCOLORS AVAILABLE = Thunder Grey" << endl <<
        	  endl << endl;
        
        	int quantity;
        	cout << endl << "\t\tEnter Quantity : ";
        	cin >> quantity;
        	cout << endl << endl;
        	cout << "\t\t\t\t   --------------------------" << endl;
        	cout << "\t\t\t\t   | " << "   PRICE = Rs. 74,999 " << " |" << endl;
        	cout << "\t\t\t\t   --------------------------" << endl << endl <<
        	  endl;
        	cout << "\t\tPress any key to Continue : ";
        	cin >> next_page;
        	system ("cls");
        
        	cout << endl <<
        	  "\t\t ================================================================================"
        	  << endl;
        	cout << "\t\t|\t\t\t\t MOTOROLA Edge+\t\t\t                |" << endl;
        	cout <<
        	  "\t\t ================================================================================"
        	  << endl << endl;
        
        
              buy:
        	cout << "\t\t1) Buy Now " << endl << endl << "\t\t2) Shop More " <<
        	  endl << endl << "\t\t3) Go to Main Menu " << endl << endl;
        	cout << "\t\tWhat do you want to do ? : ";
        	cin >> buy_select;
        
        	if (buy_select == 1)
        	  {
        	    string name = "MOTOROLA Edge+";
        	    string str_price = "74,999";
	          long price = 74999;
        	    confirm_order (name, str_price, price, quantity);
        	  }
        	else if (buy_select == 2)
        	  {
        	    system ("cls");
        	    shopping_menu ();
        	  }
        	else if (buy_select == 3)
        	  {
        	    break;
        	  }
        	else
        	  {
        
    	    cout << endl << "\t\tWrong Input. " << endl << endl <<
    	      "\t\tPress any key to enter again : ";
    	    cin >> next_page;
    
    	    system ("cls");
    
    	    cout << endl <<
    	      "\t\t ================================================================================"
    	      << endl;
    	    cout << "\t\t|\t\t\t\t MOTOROLA Edge+\t\t\t         |" << endl;
    	    cout <<
    	      "\t\t ================================================================================"
    	      << endl << endl;
    
    	    cout << endl;
    	    goto buy;
        	  }
        	break;
        
              default:
        	{
        	  cout << endl << endl << "\t\tWrong Input. " << endl << endl <<
        	    "\t\tPress any key to enter again : ";
        	  cin >> next_page;
        	  system ("cls");
        	  goto motorola_menu;
        	  break;
        	}
          }
    
    return 0;
  }
  
  int sp_xiomi() {
 xiomi_menu :
    system ("cls");

    string menu_option11[1];

    menu_option11[0] = "   Redmi K20 Pro    ";

    int select9;
    int buy_select;
    int buy_select1;
    char next_page[3];

    cout << endl <<
      "\t\t ================================================================================"
      << endl;
    cout << "\t\t|\t\t\t\t      XIOMI\t\t\t\t\t |" << endl;
    cout <<
      "\t\t ================================================================================"
      << endl << endl;

    int i = 0;
    while (i < 1)
      {
	cout << "\t\t----------------------------------" << endl;
	cout << "\t\t| " << i + 1 << ") " << "   " << menu_option11[i] << "     |" << endl;
	cout << "\t\t----------------------------------" << endl << endl;
	i++;
      }
    cout << "\t\tWhat You Want To Buy ?" << endl << endl;
    cout << "\t\tYour Selection : ";
    cin >> select9;

    switch (select9)
      {

      case 1:
	system ("cls");
	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t Redmi K20 Pro\t\t\t                 |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;

	cout << endl << "\t\tSIZE = 16.23 centimeters (6.39\") AMOLED capacitive touchscreen" << endl << endl;
	cout << endl << "\t\tRAM = 6 GB" << endl << endl;
	cout << endl << "\t\tSTORAGE = 128 GB" << endl << endl;
	cout << endl << "\t\tPROCESSOR = Qualcomm Snapdragon 855 Octa core processor, Adreno 640 GPU" << endl << endl;
	cout << endl <<
	  "\t\tCAMERA = 48+13+8MP primary camera with 20MP front facing camera" <<
	  endl << endl;
	cout << endl << "\t\tCOLORS AVAILABLE = Glacier Blue , Carbon Black" << endl <<
	  endl << endl;

	int quantity;
	cout << endl << "\t\tEnter Quantity : ";
	cin >> quantity;
	cout << endl << endl;
	cout << "\t\t\t\t   --------------------------" << endl;
	cout << "\t\t\t\t   | " << "   PRICE = Rs. 26,999 " << " |" << endl;
	cout << "\t\t\t\t   --------------------------" << endl << endl <<
	  endl;
	cout << "\t\tPress any key to Continue : ";
	cin >> next_page;
	system ("cls");

	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t Redmi K20 Pro\t\t\t                |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;


      buy:
	cout << "\t\t1) Buy Now " << endl << endl << "\t\t2) Shop More " <<
	  endl << endl << "\t\t3) Go to Main Menu " << endl << endl;
	cout << "\t\tWhat do you want to do ? : ";
	cin >> buy_select;

	if (buy_select == 1)
	  {
	    string name = "Redmi K20 Pro";
	    string str_price = "26,999";
	    long price = 26999;
	    confirm_order (name, str_price, price, quantity);
	  }
	else if (buy_select == 2)
	  {
	    system ("cls");
	    shopping_menu ();
	  }
	else if (buy_select == 3)
	  {
	    break;
	  }
	else
	  {

	    cout << endl << "\t\tWrong Input. " << endl << endl <<
	      "\t\tPress any key to enter again : ";
	    cin >> next_page;

	    system ("cls");

	    cout << endl <<
	      "\t\t ================================================================================"
	      << endl;
	    cout << "\t\t|\t\t\t\t Redmi K20 Pro\t\t\t         |" << endl;
	    cout <<
	      "\t\t ================================================================================"
	      << endl << endl;

	    cout << endl;
	    goto buy;
	  }
	break;

      default:
	{
	  cout << endl << endl << "\t\tWrong Input. " << endl << endl <<
	    "\t\tPress any key to enter again : ";
	  cin >> next_page;
	  system ("cls");
	  goto xiomi_menu;
	  break;
	}
      }

    return 0;
  }
  

 int laptops() {
     system ("cls");

    string menu_option12[1];

    menu_option12[0] = "      APPLE       ";

    string next_page;
    int select9;
 // int return_val;

    laptop_menu :
    cout << endl <<
      "\t\t ================================================================================"
      << endl;
    cout << "\t\t|\t\t\t\t   LAPTOPS\t\t\t\t\t |" << endl;
    cout <<
      "\t\t ================================================================================"
      << endl << endl;

    int i = 0;
    while (i < 1)
      {
	cout << "\t\t------------------------" << endl;
	cout << "\t\t| " << i + 1 << ") " << menu_option12[i] << "|" << endl;
	cout << "\t\t------------------------" << endl << endl;
	i++;
      }
    cout << "\t\tWhat You Want To Buy ?" << endl << endl;
    cout << "\t\tYour Selection : ";
    cin >> select9;

    switch (select9)
      {

      case 1:
	/*return_val = sp_apple ();
	return return_val;
    */
             lap_apple();
             return 0;

      default:
              cout << endl << endl << "\t\tWrong Input. " << endl << endl;
	          cout << "\t\tPress Any key for selecting Option Again. ";
	          cin >> next_page;
	          system ("cls");
	          goto laptop_menu;

      }

    return 0;
     
 }

    
    int lap_apple() {
 l_apple_menu :
    system ("cls");

    string menu_option13[1];

    menu_option13[0] = "   Apple MacBook Pro    ";

    int select9;
    int buy_select;
    int buy_select1;
    char next_page[3];

    cout << endl <<
      "\t\t ================================================================================"
      << endl;
    cout << "\t\t|\t\t\t\t      MACBOOK\t\t\t\t\t |" << endl;
    cout <<
      "\t\t ================================================================================"
      << endl << endl;

    int i = 0;
    while (i < 1)
      {
	cout << "\t\t----------------------------------" << endl;
	cout << "\t\t| " << i + 1 << ") " << " " << menu_option13[i] << "   |" << endl;
	cout << "\t\t----------------------------------" << endl << endl;
	i++;
      }
    cout << "\t\tWhat You Want To Buy ?" << endl << endl;
    cout << "\t\tYour Selection : ";
    cin >> select9;

    switch (select9)
      {

      case 1:
	system ("cls");
	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t Apple MacBook Pro\t\t\t         |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;

	cout << endl << "\t\tDISPLAY = 36.07cm (14.2”), Liquid Retina XDR display" << endl << endl;
	cout << endl << "\t\tRAM = 16GB Unified Memory" << endl << endl;
	cout << endl << "\t\tSTORAGE = 1 TB SSD" << endl << endl;
	cout << endl << "\t\tOPERATING SYSTEM = Mac OS Monterey" << endl << endl;
	cout << endl << "\t\tPROCESSOR = Apple M1 Pro with Integrated Graphics" << endl << endl;
	cout << endl <<
	  "\t\tCAMERA = Webcam , 1080p , FaceTime HD Camera" <<
	  endl << endl;
	cout << endl << "\t\tCOLORS AVAILABLE = Space Grey , Silver" << endl <<
	  endl << endl;

	int quantity;
	cout << endl << "\t\tEnter Quantity : ";
	cin >> quantity;
	cout << endl << endl;
	cout << "\t\t\t\t   --------------------------" << endl;
	cout << "\t\t\t\t   | " << "  PRICE = Rs. 232,699 " << "  |" << endl;
	cout << "\t\t\t\t   --------------------------" << endl << endl <<
	  endl;
	cout << "\t\tPress any key to Continue : ";
	cin >> next_page;
	system ("cls");

	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t Apple Macbook Pro\t\t\t         |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;


      buy:
	cout << "\t\t1) Buy Now " << endl << endl << "\t\t2) Shop More " <<
	  endl << endl << "\t\t3) Go to Main Menu " << endl << endl;
	cout << "\t\tWhat do you want to do ? : ";
	cin >> buy_select;

	if (buy_select == 1)
	  {
	    string name = "Apple Macbook Pro";
	    string str_price = "232,699";
	    long price = 232699;
	    confirm_order (name, str_price, price, quantity);
	  }
	else if (buy_select == 2)
	  {
	    system ("cls");
	    shopping_menu ();
	  }
	else if (buy_select == 3)
	  {
	    break;
	  }
	else
	  {

	    cout << endl << "\t\tWrong Input. " << endl << endl <<
	      "\t\tPress any key to enter again : ";
	    cin >> next_page;

	    system ("cls");

	    cout << endl <<
	      "\t\t ================================================================================"
	      << endl;
	    cout << "\t\t|\t\t\t\t Apple Macbook Pro\t\t\t         |" << endl;
	    cout <<
	      "\t\t ================================================================================"
	      << endl << endl;

	    cout << endl;
	    goto buy;
	  }
	break;

      default:
	{
	  cout << endl << endl << "\t\tWrong Input. " << endl << endl <<
	    "\t\tPress any key to enter again : ";
	  cin >> next_page;
	  system ("cls");
	  goto l_apple_menu;
	  break;
	}
      }

    return 0;
  }

  int tv() {
      system ("cls");

    string menu_option14[1];

    menu_option14[0] = "       SONY BRAVIA            ";

    string next_page;
    int select9;
 // int return_val;

    tv_menu :
    cout << endl <<
      "\t\t ================================================================================"
      << endl;
    cout << "\t\t|\t\t\t\t       TVs\t\t\t\t\t |" << endl;
    cout <<
      "\t\t ================================================================================"
      << endl << endl;

    int i = 0;
    while (i < 1)
      {
	cout << "\t\t-----------------------------------" << endl;
	cout << "\t\t| " << i + 1 << ") " << menu_option14[i] << "|" << endl;
	cout << "\t\t-----------------------------------" << endl << endl;
	i++;
      }
    cout << "\t\tWhat You Want To Buy ?" << endl << endl;
    cout << "\t\tYour Selection : ";
    cin >> select9;

    switch (select9)
      {

      case 1:
	/*return_val = sp_apple ();
	return return_val;
    */
             tv_sony();
             return 0;

      default:
              cout << endl << endl << "\t\tWrong Input. " << endl << endl;
	          cout << "\t\tPress Any key for selecting Option Again. ";
	          cin >> next_page;
	          system ("cls");
	          goto tv_menu;

      }

    return 0;

  }
  
   int tv_sony() {
    sony_menu :
    system ("cls");

    string menu_option15[1];

    menu_option15[0] = "   SONY BRAVIA X80H    ";

    int select9;
    int buy_select;
    int buy_select1;
    char next_page[3];

    cout << endl <<
      "\t\t ================================================================================"
      << endl;
    cout << "\t\t|\t\t\t\t      SONY\t\t\t\t\t |" << endl;
    cout <<
      "\t\t ================================================================================"
      << endl << endl;

    int i = 0;
    while (i < 1)
      {
	cout << "\t\t----------------------------------" << endl;
	cout << "\t\t| " << i + 1 << ") " << " " << menu_option15[i] << "    |" << endl;
	cout << "\t\t----------------------------------" << endl << endl;
	i++;
      }
    cout << "\t\tWhat You Want To Buy ?" << endl << endl;
    cout << "\t\tYour Selection : ";
    cin >> select9;

    switch (select9)
      {

      case 1:
	system ("cls");
	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t SONY BRAVIA X80H\t\t\t         |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;

	cout << endl << "\t\tDISPLAY = 139 cm(55\"), 4K TV , Live Colour Technology, TRILUMINOS display" << endl << endl;
	cout << endl << "\t\tSPEAKER = 20W Dual Speakers" << endl << endl;
	cout << endl << "\t\tSOUND = Dolby Audio, Dolby Atmos , Dual Speakers , 20 W , DTS Digital Surround" << endl << endl;
	cout << endl << "\t\tOPERATING SYSTEM = Android OS" << endl << endl;
	cout << endl << "\t\tPORTS = 2 x USB 2.0 , 4 x HDMI , 1 x Optical Audio Output" << endl << endl;
	cout << endl << "\t\tCONNECTIVITY = WIFI , BLUETOOTH" << endl << endl;
	cout << endl << "\t\tCOLORS AVAILABLE = BLACK" << endl << endl << endl;

	int quantity;
	cout << endl << "\t\tEnter Quantity : ";
	cin >> quantity;
	cout << endl << endl;
	cout << "\t\t\t\t   --------------------------" << endl;
	cout << "\t\t\t\t   | " << "  PRICE = Rs. 78,990 " << "  |" << endl;
	cout << "\t\t\t\t   --------------------------" << endl << endl <<
	  endl;
	cout << "\t\tPress any key to Continue : ";
	cin >> next_page;
	system ("cls");

	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t SONY BRAVIA X80H\t\t\t         |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;


      buy:
	cout << "\t\t1) Buy Now " << endl << endl << "\t\t2) Shop More " <<
	  endl << endl << "\t\t3) Go to Main Menu " << endl << endl;
	cout << "\t\tWhat do you want to do ? : ";
	cin >> buy_select;

	if (buy_select == 1)
	  {
	    string name = "SONY BRAVIA X80H";
	    string str_price = "78,990";
	    long price = 78990;
	    confirm_order (name, str_price, price, quantity);
	  }
	else if (buy_select == 2)
	  {
	    system ("cls");
	    shopping_menu ();
	  }
	else if (buy_select == 3)
	  {
	    break;
	  }
	else
	  {

	    cout << endl << "\t\tWrong Input. " << endl << endl <<
	      "\t\tPress any key to enter again : ";
	    cin >> next_page;

	    system ("cls");

	    cout << endl <<
	      "\t\t ================================================================================"
	      << endl;
	    cout << "\t\t|\t\t\t\t SONY BRAVIA X80H\t\t\t         |" << endl;
	    cout <<
	      "\t\t ================================================================================"
	      << endl << endl;

	    cout << endl;
	    goto buy;
	  }
	break;

      default:
	{
	  cout << endl << endl << "\t\tWrong Input. " << endl << endl <<
	    "\t\tPress any key to enter again : ";
	  cin >> next_page;
	  system ("cls");
	  goto sony_menu;
	  break;
	}
      }

    return 0;
  }
  
  
  int grocery() {
      system ("cls");

    string menu_option16[1];

    menu_option16[0] = "       CHANA DAL            ";

    string next_page;
    int select9;
 // int return_val;

    grocery_menu :
    cout << endl <<
      "\t\t ================================================================================"
      << endl;
    cout << "\t\t|\t\t\t\t       GROCERY\t\t\t\t\t |" << endl;
    cout <<
      "\t\t ================================================================================"
      << endl << endl;

    int i = 0;
    while (i < 1)
      {
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t| " << i + 1 << ")     " << menu_option16[i] << "   |" << endl;
	cout << "\t\t-----------------------------------------" << endl << endl;
	i++;
      }
    cout << "\t\tWhat You Want To Buy ?" << endl << endl;
    cout << "\t\tYour Selection : ";
    cin >> select9;

    switch (select9)
      {

      case 1:
	/*return_val = sp_apple ();
	return return_val;
    */
             chana();
             return 0;

      default:
              cout << endl << endl << "\t\tWrong Input. " << endl << endl;
	          cout << "\t\tPress Any key for selecting Option Again. ";
	          cin >> next_page;
	          system ("cls");
	          goto grocery_menu;

      }

    return 0;

  }
  
  
       
  int chana() {
    chana_menu :
    system ("cls");

    string menu_option17[1];

    menu_option17[0] = "   LOOSE CHANA DAL    ";

    int select9;
    int buy_select;
    int buy_select1;
    char next_page[3];

    cout << endl <<
      "\t\t ================================================================================"
      << endl;
    cout << "\t\t|\t\t\t\t      CHANA DAL\t\t\t\t\t |" << endl;
    cout <<
      "\t\t ================================================================================"
      << endl << endl;

    int i = 0;
    while (i < 1)
      {
	cout << "\t\t----------------------------------" << endl;
	cout << "\t\t| " << i + 1 << ") " << " " << menu_option17[i] << "     |" << endl;
	cout << "\t\t----------------------------------" << endl << endl;
	i++;
      }
    cout << "\t\tWhat You Want To Buy ?" << endl << endl;
    cout << "\t\tYour Selection : ";
    cin >> select9;

    switch (select9)
      {

      case 1:
	system ("cls");
	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t LOOSE CHANA DAL\t\t\t         |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;

	cout << endl << "\t\t1) Sortex cleaned and superior quality" << endl << endl;
	cout << endl << "\t\t2) Superior quality pulses" << endl << endl;
	cout << endl << "\t\t3) No added chemicals, polish or colours" << endl << endl;
	cout << endl << "\t\t4) Hygienically packed and best quality control processes" << endl << endl;
	cout << endl << "\t\t5) fssai Licenced" << endl << endl;
	cout << endl << "\t\t6) 1 KG NET" << endl << endl;
	
	int quantity;
	cout << endl << "\t\tEnter Quantity : ";
	cin >> quantity;
	cout << endl << endl;
	cout << "\t\t\t\t   --------------------------" << endl;
	cout << "\t\t\t\t   | " << "    PRICE = Rs. 60 " << "    |" << endl;
	cout << "\t\t\t\t   --------------------------" << endl << endl <<
	  endl;
	cout << "\t\tPress any key to Continue : ";
	cin >> next_page;
	system ("cls");

	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t    CHANA DAL\t\t\t                 |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;


      buy:
	cout << "\t\t1) Buy Now " << endl << endl << "\t\t2) Shop More " <<
	  endl << endl << "\t\t3) Go to Main Menu " << endl << endl;
	cout << "\t\tWhat do you want to do ? : ";
	cin >> buy_select;

	if (buy_select == 1)
	  {
	    string name = "LOOSE CHANA DAL";
	    string str_price = "60";
	    long price = 60;
	    confirm_order (name, str_price, price, quantity);
	  }
	else if (buy_select == 2)
	  {
	    system ("cls");
	    shopping_menu ();
	  }
	else if (buy_select == 3)
	  {
	    break;
	  }
	else
	  {

	    cout << endl << "\t\tWrong Input. " << endl << endl <<
	      "\t\tPress any key to enter again : ";
	    cin >> next_page;

	    system ("cls");

	    cout << endl <<
	      "\t\t ================================================================================"
	      << endl;
	    cout << "\t\t|\t\t\t\t CHANA DAL\t\t\t         |" << endl;
	    cout <<
	      "\t\t ================================================================================"
	      << endl << endl;

	    cout << endl;
	    goto buy;
	  }
	break;

      default:
	{
	  cout << endl << endl << "\t\tWrong Input. " << endl << endl <<
	    "\t\tPress any key to enter again : ";
	  cin >> next_page;
	  system ("cls");
	  goto chana_menu;
	  break;
	}
      }

    return 0;
  }
  
  
  int cosmetics() {
      system ("cls");

    string menu_option18[1];

    menu_option18[0] = "       PERFUMES            ";

    string next_page;
    int select9;
 // int return_val;

    cosmetics_menu :
    cout << endl <<
      "\t\t ================================================================================"
      << endl;
    cout << "\t\t|\t\t\t\t       COSMETICS\t\t\t        |" << endl;
    cout <<
      "\t\t ================================================================================"
      << endl << endl;

    int i = 0;
    while (i < 1)
      {
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t| " << i + 1 << ")     " << menu_option18[i] << "    |" << endl;
	cout << "\t\t-----------------------------------------" << endl << endl;
	i++;
      }
    cout << "\t\tWhat You Want To Buy ?" << endl << endl;
    cout << "\t\tYour Selection : ";
    cin >> select9;

    switch (select9)
      {

      case 1:
	/*return_val = sp_apple ();
	return return_val;
    */
             perfumes();
             return 0;

      default:
              cout << endl << endl << "\t\tWrong Input. " << endl << endl;
	          cout << "\t\tPress Any key for selecting Option Again. ";
	          cin >> next_page;
	          system ("cls");
	          goto cosmetics_menu;

      }

    return 0;

  }
  
  
       
  int perfumes() {
    perfumes_menu :
    system ("cls");

    string menu_option19[1];

    menu_option19[0] = "   FOGG ROYAL FRAGRANCE 150ML    ";

    int select9;
    int buy_select;
    int buy_select1;
    char next_page[3];

    cout << endl <<
      "\t\t ================================================================================"
      << endl;
    cout << "\t\t|\t\t\t\t FOGG ROYAL FRAGRANCE \t\t\t         |" << endl;
    cout <<
      "\t\t ================================================================================"
      << endl << endl;

    int i = 0;
    while (i < 1)
      {
	cout << "\t\t--------------------------------------------" << endl;
	cout << "\t\t| " << i + 1 << ") " << "  " << menu_option19[i] << "   |" << endl;
	cout << "\t\t--------------------------------------------" << endl << endl;
	i++;
      }
    cout << "\t\tWhat You Want To Buy ?" << endl << endl;
    cout << "\t\tYour Selection : ";
    cin >> select9;

    switch (select9)
      {

      case 1:
	system ("cls");
	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t FOGG ROYAL FRAGRANCE\t                         |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;

	cout << endl << "\t\t1) SCENT = FRESH" << endl << endl;
	cout << endl << "\t\t2) Item Weight = 160 GM" << endl << endl;
	cout << endl << "\t\t3) Long lasting fragrance" << endl << endl;
	cout << endl << "\t\t4) Country of Origin: India" << endl << endl;
	
	int quantity;
	cout << endl << "\t\tEnter Quantity : ";
	cin >> quantity;
	cout << endl << endl;
	cout << "\t\t\t\t   --------------------------" << endl;
	cout << "\t\t\t\t   | " << "    PRICE = Rs. 166 " << "   |" << endl;
	cout << "\t\t\t\t   --------------------------" << endl << endl <<
	  endl;
	cout << "\t\tPress any key to Continue : ";
	cin >> next_page;
	system ("cls");

	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t FOGG ROYAL FRAGRANCE\t                         |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;


      buy:
	cout << "\t\t1) Buy Now " << endl << endl << "\t\t2) Shop More " <<
	  endl << endl << "\t\t3) Go to Main Menu " << endl << endl;
	cout << "\t\tWhat do you want to do ? : ";
	cin >> buy_select;

	if (buy_select == 1)
	  {
	    string name = "FOGG ROYAL FRAGRANCE";
	    string str_price = "166";
	    long price = 166;
	    confirm_order (name, str_price, price, quantity);
	  }
	else if (buy_select == 2)
	  {
	    system ("cls");
	    shopping_menu ();
	  }
	else if (buy_select == 3)
	  {
	    break;
	  }
	else
	  {

	    cout << endl << "\t\tWrong Input. " << endl << endl <<
	      "\t\tPress any key to enter again : ";
	    cin >> next_page;

	    system ("cls");

	    cout << endl <<
	      "\t\t ================================================================================"
	      << endl;
	    cout << "\t\t|\t\t\t\t FOGG ROYAL FRAGRANCE\t\t\t         |" << endl;
	    cout <<
	      "\t\t ================================================================================"
	      << endl << endl;

	    cout << endl;
	    goto buy;
	  }
	break;

      default:
	{
	  cout << endl << endl << "\t\tWrong Input. " << endl << endl <<
	    "\t\tPress any key to enter again : ";
	  cin >> next_page;
	  system ("cls");
	  goto perfumes_menu;
	  break;
	}
      }

    return 0;
  }
  
  
  

  int confirm_order (string prod_name, string prod_str_price, long prod_price,
		     int prod_quant)
  {
    char next_page[5];
    system ("cls");
    float amount = prod_quant * prod_price;
    float gst = ((18 / 100.0) * prod_quant * prod_price);
    float cgst = (((18 / 100.0) * prod_quant * prod_price) / 2);
    float discount = ((20 / 100.0) * amount);
    float total_amount = (amount + gst - discount);
   
    cout << endl << endl <<
      "\t\t ======================================================================="
      << endl;
    cout << "\t\t|\t\t          CONFIRMATION PAGE\t\t\t        |" << endl;
    cout <<
      "\t\t ======================================================================="
      << endl;
    cout << endl << endl << "\t\t 1) " << prod_name << endl << endl;
    cout << "\t\t    PRICE = " << prod_price << endl << endl;
    cout << "\t\t    QUANTITY = " << prod_quant << endl << endl;
    cout << "\t\t\t\t\t\t\t________________________________ " << endl << endl;
    cout << "\t\t\t\t\t\t\t AMOUNT \t       =  " << setw (6) << prod_quant *
      prod_price << endl;
    cout << endl << "\t\t\t\t\t\t\t GST (18%)\t       =  " << setw (6) << gst
      << endl;
    cout << endl << "\t\t\t\t\t\t\t CGST (9%)\t       =  " << setw (6) << cgst
      << endl;
    cout << endl << "\t\t\t\t\t\t\t SGST (9%)\t       =  " << setw (6) << cgst
      << endl;
    cout << endl << "\t\t\t\t\t\t\t DISCOUNT (20%)        =  " << setw (6) <<
      discount << endl << endl;
    cout << "\t\t\t\t\t\t\t================================ " << endl;
    cout << endl << "\t\t\t\t\t\t\t YOUR SPECIAL AMOUNT   =  " << setw (6) <<
      total_amount << endl << endl << endl;

    cout << "\t\t\t\t\t -------------------" << endl;
    cout << "\t\t\t\t\t| " << " \t BUY " << "       |" << endl;
    cout << "\t\t\t\t\t -------------------" << endl << endl;

    cout << "\t\t    Click Any Key to Continue: ";
    cin >> next_page;
    payment_option ();
    return 0;
  }

  int payment_option ()
  {
    system ("cls");
    char next_page[4];
    int select_payment;
    int select;

  payment:
    cout << endl <<
      "\t\t ======================================================================="
      << endl;
    cout << "\t\t|\t\t                 PAYMENT\t\t\t        |" << endl;
    cout <<
      "\t\t ======================================================================="
      << endl;

    cout << endl << "\t\t1) Cash On Delivery " << endl << endl <<
      "\t\t2) Net Banking" << endl << endl << "\t\t3) Credit / Debit Card" <<
      endl << endl;
    cout << endl << "\t\tSelect Your Payment Mode : ";
    cin >> select_payment;

    switch (select_payment)
      {

      case 1:
	cout << endl << endl << "\t\tYour Order is Placed Successfully." <<
	  endl << endl;
	cout << "\t\tClick Any Key to Continue: ";
	cin >> next_page;
	system ("cls");

      menu_aft_fav:
	cout << endl <<
	  "\t\t ================================================================================"
	  << endl;
	cout << "\t\t|\t\t\t\t   SHOPPERS BAY\t\t\t\t         |" << endl;
	cout <<
	  "\t\t ================================================================================"
	  << endl << endl;
	cout << endl << endl << "\t\t1) Shop More " << endl << endl <<
	  "\t\t2) Go to Main Menu" << endl << endl;
	cout << "\t\tSelect option to continue : ";
	cin >> select;

	if (select == 1)
	  {

	    system ("cls");
	    shopping_menu ();
	  }
	else if (select == 2)
	  {
	    return 0;
	  }
	else
	  {
	    cout << endl << endl << "\t\tWrong Input. " << endl << endl <<
	      "\t\tPress any key to enter again : ";
	    cin >> next_page;
	    system ("cls");
	    goto menu_aft_fav;
	  }

	break;

      case 2:
	{
	  system ("cls");
	  string acc_no;
	  string ifsc;
	  int len;
	  int count = 0;
	  char next_page[5];
	net_banking:
	  cout << endl <<
	    "\t\t ======================================================================="
	    << endl;
	  cout << "\t\t|\t\t              NET BANKING\t\t\t        |" << endl;
	  cout <<
	    "\t\t ======================================================================="
	    << endl << endl;

	  if (count == 0)
	    {
	      cout << "\t\tEnter Account Number : ";
	      cin >> acc_no;
	    }
	  else
	    {
	      cout << "\t\tEnter Account Number : " << acc_no << endl;
	    }

	  cout << endl << endl <<
	    "\t\tEnter IFSC Code in format [ABHY0000567] : ";
	  cin >> ifsc;

	  len = ifsc.length ();

	  if (len != 11)
	    {
	      cout << endl << "\t\tInvalid IFSC Code." << endl << endl <<
		endl;
	      cout << "\t\tPress Any key to enter IFSC Code Again : ";
	      cin >> next_page;
	      system ("cls");
	      count = 1;
	      goto net_banking;
	    }

	  cout << endl << endl << "\t\tTransaction Successful." << endl <<
	    endl;
	  cout << "\t\tOrder Placed Successfully.";
	  cout << endl << endl << endl << "\t\tPress Any Key to Continue : ";
	  cin >> next_page;
	  system ("cls");

	menu_aft_netBanking:
	  cout << endl <<
	    "\t\t ================================================================================"
	    << endl;
	  cout << "\t\t|\t\t\t\t   SHOPPERS BAY\t\t\t\t         |" << endl;
	  cout <<
	    "\t\t ================================================================================"
	    << endl << endl;
	  cout << endl << endl << "\t\t1) Shop More " << endl << endl <<
	    "\t\t2) Go to Main Menu" << endl << endl;
	  cout << "\t\tSelect option to continue : ";
	  cin >> select;

	  if (select == 1)
	    {

	      system ("cls");
	      shopping_menu ();
	    }
	  else if (select == 2)
	    {
	      return 0;
	    }
	  else
	    {
	      cout << endl << endl << "\t\tWrong Input. " << endl << endl <<
		"\t\tPress any key to enter again : ";
	      cin >> next_page;
	      system ("cls");
	      goto menu_aft_netBanking;
	    }
	}
	break;

      case 3:
	{
	  system ("cls");
	  string credit_name;
	  string credit_no;
	  string exp_date;
	  string cvv;
	  string next_page;

	  cout << endl <<
	    "\t\t ======================================================================="
	    << endl;
	  cout <<
	    "\t\t|\t\t          CREDIT / DEBIT CARD\t\t                |" <<
	    endl;
	  cout <<
	    "\t\t ======================================================================="
	    << endl << endl;

	  getline (cin, next_page);
	  cout << "\t\tEnter Card Holder Name : ";
	  getline (cin, credit_name);
	  cout << endl << "\t\tEnter Card Number : ";
	  getline (cin, credit_no);
	  cout << endl << "\t\tEnter Expiry Date in format [01/2022] : ";
	  getline (cin, exp_date);
	  cout << endl << "\t\tEnter CVV Number in format [876] : ";
	  cin >> cvv;
	  cout << endl << endl << "\t\tTransaction Successful." << endl <<
	    endl;
	  cout << "\t\tOrder Placed Successfully." << endl << endl;

	  cout << endl << endl << "\t\tPress Any Key to Continue : ";
	  cin >> next_page;
	  system ("cls");

	menu_aft_CreditDebitCard:
	  cout << endl <<
	    "\t\t ================================================================================"
	    << endl;
	  cout << "\t\t|\t\t\t\t   SHOPPERS BAY\t\t\t\t         |" << endl;
	  cout <<
	    "\t\t ================================================================================"
	    << endl << endl;
	  cout << endl << endl << "\t\t1) Shop More " << endl << endl <<
	    "\t\t2) Go to Main Menu" << endl << endl;
	  cout << "\t\tSelect option to continue : ";
	  cin >> select;

	  if (select == 1)
	    {

	      system ("cls");
	      shopping_menu ();
	    }
	  else if (select == 2)
	    {
	      return 0;
	    }
	  else
	    {
	      cout << endl << endl << "\t\tWrong Input. " << endl << endl <<
		"\t\tPress any key to enter again : ";
	      cin >> next_page;
	      system ("cls");
	      goto menu_aft_CreditDebitCard;
	    }
	  break;
	}
      default:
	cout << endl << endl << "\t\tWrong Input. " << endl << endl <<
	  "\t\tPress any key to enter again : ";
	cin >> next_page;
	system ("cls");
	goto payment;

      }
    return 0;
  }

};

class account {

    private:
        string menu_option4[4];
        int select6;

    public:
        int account_menu () {
    system ("cls");

    menu_option4[0] = "    PERSONAL DETAILS  ";
   // menu_option4[1] = "     LOGIN DETAILS    ";
    menu_option4[1] = "     PREVIOUS MENU    ";

    string next_page;
    my_details : 
    cout << endl <<
      "\t\t ================================================================================"
      << endl;
    cout << "\t\t|\t\t\t\t   MY ACCOUNT\t\t\t\t\t |" << endl;
    cout <<
      "\t\t ================================================================================"
      << endl << endl;

    int i = 0;
    while (i < 2)
      {
	cout << "\t\t-----------------------------" << endl;
	cout << "\t\t| " << i + 1 << ") " << menu_option4[i] << " |" << endl;
	cout << "\t\t-----------------------------" << endl << endl;
	i++;
      }
    cout << "\t\tWhat You Want To Buy ?" << endl << endl;
    cout << "\t\tYour Selection : ";
    cin >> select6;

    switch (select6)
      {

      case 1:
             return 1;
	         break;

      case 2:
	         break;


      default: 
              cout << endl << endl << "\t\tWrong Input. " << endl << endl;
	          cout << "\t\tPress Any key for selecting Option Again. ";
	          cin >> next_page;
	          system ("cls");
	          goto my_details;

      }

    return 0;
  }
};



int main ()
{

  int show_title = 0;
  int select1;
  int select3;

  cout << endl;
  cout <<
    "\t\t ================================================================================"
    << endl;
  cout << "\t\t|\t\t\t\t   SHOPPERS BAY\t\t\t\t\t |" << endl;
  cout <<
    "\t\t ================================================================================"
    << endl << endl;

  cout << "\t\t Want to buy Quality Products at affordable price ? " << endl;
  cout << "\t\t So You are at the right place " << endl << endl;
  cout <<
    "\t\t     ********************* || WELCOME TO SHOPPERS BAY || ********************* "
    << endl;

  cout << endl << "\t\t1) Don't have Account " << endl << endl << "\t\t2) Login to Account" <<
    endl << endl;
  cout << "\t\tSelect your option : ";
  cin >> select1;

  sign_up s1;
  select1 = s1.user_inputData (select1);

   personal_details p1;
  if (select1 == 1)
    {
     p1.user_details();
    }
    
label1:
  int label1;
  system ("cls");
  int main_break = 0;
  main_menu m1;
  select3 = m1.first_menu ();

  if (select3 == 1)
    {
      start_shopping s1;
      label1 = s1.shopping_menu ();
    }

  if (select3 == 2)
    {
      int go;
      int show_prof;
      
      account :
      account a1;
      go = a1.account_menu ();
      if(go == 1) {
          system("cls");
          label1 = p1.user_show();
      }
      if(label1 == 1){
          goto account;
      }
    }

  if (label1 == 0)
    {

      goto label1;
    }


  return 0;
}




