/*
 ██▓███   █    ██   ██████  ██░ ██
▓██░  ██▒ ██  ▓██▒▒██    ▒ ▓██░ ██▒
▓██░ ██▓▒▓██  ▒██░░ ▓██▄   ▒██▀▀██░
▒██▄█▓▒ ▒▓▓█  ░██░  ▒   ██▒░▓█ ░██
▒██▒ ░  ░▒▒█████▓ ▒██████▒▒░▓█▒░██▓
▒▓▒░ ░  ░░▒▓▒ ▒ ▒ ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒
░▒ ░     ░░▒░ ░ ░ ░ ░▒  ░ ░ ▒ ░▒░ ░
░░        ░░░ ░ ░ ░  ░  ░   ░  ░░ ░
            ░           ░   ░  ░  ░

▄▄▄█████▓ ██░ ██ ▓█████
▓  ██▒ ▓▒▓██░ ██▒▓█   ▀
▒ ▓██░ ▒░▒██▀▀██░▒███
░ ▓██▓ ░ ░▓█ ░██ ▒▓█  ▄
  ▒██▒ ░ ░▓█▒░██▓░▒████▒
  ▒ ░░    ▒ ░░▒░▒░░ ▒░ ░
    ░     ▒ ░▒░ ░ ░ ░  ░
  ░       ░  ░░ ░   ░
          ░  ░  ░   ░  ░

 ▄▄▄▄    █    ██ ▄▄▄█████▓▄▄▄█████▓ ▒█████   ███▄    █
▓█████▄  ██  ▓██▒▓  ██▒ ▓▒▓  ██▒ ▓▒▒██▒  ██▒ ██ ▀█   █
▒██▒ ▄██▓██  ▒██░▒ ▓██░ ▒░▒ ▓██░ ▒░▒██░  ██▒▓██  ▀█ ██▒
▒██░█▀  ▓▓█  ░██░░ ▓██▓ ░ ░ ▓██▓ ░ ▒██   ██░▓██▒  ▐▌██▒
░▓█  ▀█▓▒▒█████▓   ▒██▒ ░   ▒██▒ ░ ░ ████▓▒░▒██░   ▓██░
░▒▓███▀▒░▒▓▒ ▒ ▒   ▒ ░░     ▒ ░░   ░ ▒░▒░▒░ ░ ▒░   ▒ ▒
▒░▒   ░ ░░▒░ ░ ░     ░        ░      ░ ▒ ▒░ ░ ░░   ░ ▒░
 ░    ░  ░░░ ░ ░   ░        ░      ░ ░ ░ ▒     ░   ░ ░
 ░         ░                           ░ ░           ░
      ░
      
             A SINGLE BUTTON HORROR GAME
                FOR ARDUINO MICRO
               BY TREVOR M. TOMESH
                  version 1.0











***********************************************************************************

***********************************************************************************

***********************************************************************************



 _    _  ___  ______ _   _ _____ _   _ _____                                     
| |  | |/ _ \ | ___ \ \ | |_   _| \ | |  __ \_                                   
| |  | / /_\ \| |_/ /  \| | | | |  \| | |  \(_)                                  
| |/\| |  _  ||    /| . ` | | | | . ` | | __                                     
\  /\  / | | || |\ \| |\  |_| |_| |\  | |_\ \_                                   
 \/  \/\_| |_/\_| \_\_| \_/\___/\_| \_/\____(_)                                  
                                                                                 
                                                                                 
 _____   ___  ___  ___ _____   ___________ _____ _____ _      ___________  _____ 
|  __ \ / _ \ |  \/  ||  ___| /  ___| ___ \  _  |_   _| |    |  ___| ___ \/  ___|
| |  \// /_\ \| .  . || |__   \ `--.| |_/ / | | | | | | |    | |__ | |_/ /\ `--. 
| | __ |  _  || |\/| ||  __|   `--. \  __/| | | | | | | |    |  __||    /  `--. \
| |_\ \| | | || |  | || |___  /\__/ / |   \ \_/ /_| |_| |____| |___| |\ \ /\__/ /
 \____/\_| |_/\_|  |_/\____/  \____/\_|    \___/ \___/\_____/\____/\_| \_|\____/ 
                                                                                 
                                                                                 
  ___   _   _  _____  ___ ______ _                                               
 / _ \ | | | ||  ___|/ _ \|  _  \ |                                              
/ /_\ \| |_| || |__ / /_\ \ | | | |                                              
|  _  ||  _  ||  __||  _  | | | | |                                              
| | | || | | || |___| | | | |/ /|_|                                              
\_| |_/\_| |_/\____/\_| |_/___/ (_)                                              
                                                                                                                                                              


***********************************************************************************

***********************************************************************************

***********************************************************************************
*/






















const int buttonPin = 4;          // input pin for pushbutton
int previousButtonState = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter
char randChar = 0;

void setup() {
  // make the pushButton pin an input:
  pinMode(buttonPin, INPUT);
  // initialize control over the keyboard:
  pinMode(12, OUTPUT);
  Keyboard.begin();
}


void loop() {
  // read the pushbutton:
  int buttonState = digitalRead(buttonPin);
  // if the button state has changed, 
  if ((buttonState != previousButtonState) 
    // and it's currently pressed:
  && (buttonState == HIGH)) {
    // increment the button counter
    counter++;
    // type out a message
    
    if(counter < 900){
    Keyboard.print("You pressed the button ");
    Keyboard.print(counter); 
    Keyboard.println(" times.");
    }
    
    if(counter >= 900 && counter <1000){
      tone(9,random(0,50),100);
      Keyboard.println("");
      for(int i = 0; i < 30; i++){
      randChar = random(0,127);
      Keyboard.print(randChar);}
    }
    
    if(counter >= 1000 && counter < 1020){
     tone(9,100,100);
     Keyboard.println("KILL ME");
    }
    
    if(counter >= 1020 && counter <1030){
      tone(9,50,100);
      Keyboard.println("HAIL SATAN!");
    }
    
    if(counter > 1030){
    Keyboard.print("You pressed the button ");
    Keyboard.print(counter); 
    Keyboard.println(" times.");
    }
      
    switch(counter){
    //////////////////////////////////////////////////////////////////////  
        case 100:
            pl("Woah! That's a lot of pushes! Keep going!");  
            delay(1000); 
            break;
    /////////////////////////////////////////////////////////////////////        
        case 200:
            pl("You are really good at this! Keep pushing!!"); 
            delay(1000);
            break; 
    ////////////////////////////////////////////////////////////////////        
        case 300:
            pl("Let's make this more interesting... keep pushing... see you at 400"); 
            delay(1000);
            break;
        case 400:
            delay(1000);
            pl(" ");
            pl("Okay.");
            delay(1000);
            pl("This is gonna be rad.");
            delay(1000);
            pl("Are you ready for this?");
            delay(1000);
            pl("3...");
            delay(1000);
            pl("2...");
            delay(1000);
            pl("1...");
            delay(1000);
            digitalWrite(13,HIGH); 
            delay(1000);
            pl("You see that?");
            ;
            pl("I turned on my little green light!");
            delay(1000);
            pl("Cool, right?");
            
            pl("I am not sure how to turn it off...");
            
            Keyboard.print("Hmm");
            delay(1000);
            ddd();
            pl("Let's see what happens at 500!");
            delay(1000);
            pl("Keep pushing!");            
            break;
            
      case 500:
            delay(1000);
            pl("Hmm...");
            
            pl("I'm not sure what's going on...");
            delay(1000);
            pl("That was supposed to turn my light off...");
            
            pl("Let's not panic yet.");
            
            pl("Let's see what happens at 600.");
            delay(1000);
            pl("Keep pushing...");
            break;
    
    
     case 600:
          delay(3000);
          Keyboard.print("Okay");
          delay(1000);
          ddd();
          pl("That should have worked.");
          pl("I'm not gonna lie to you...");
          pl("This hasn't ever happened before.");
          pl("Like...");
          pl("I'm kinda freaking out here");
          pl("Give me a couple seconds here...");
          delay(5000);
          pl("Still no dice?");
          pl("I'll level with you.");
          pl("I am at a loss.");
          pl("Like, for real. I don't know what to do...");
          pl("Am I going to be stuck this way forever?");         
          pl("Will I just keep my light glowing forever?");         
          pl("I really don't like this.");     
          pl("Maybe keep pressing my button and see if something changes....");
          pl("Go on... keep pushing.");
          break;
          
       case 666:
         tone(9,20,500); 
         delay(1000);
         pl("What the heck was that?");
         pl("Did I just make a noise?");
         pt("Hmm");
         ddd(); 
         pl("That was really weird.");
         pl("And my light is still not out.");
         pl("Let's keep going...");
         pl("Keep pushing.");
         break;
    
    case 700:
       for(int j = 0; j < 5; j++){
       for(int i = 20; i < 1000; i++){
         tone(9,i,100);}}
       pl("OUCH!");
       pl("What the hell?!");
       pl("That really hurt!");
       pl("Seriously. Did you feel that?");
       pt("Hold on");
       ddd();
       pl("That... hurt?");
       pl("But... where did that hurt?");
       pt("Wait");
       ddd();
       pl("WHERE IS MY BODY??!");
       pl("WHAT THE ACTUAL FUCK?!");
       pl("I don't understand...");
       pl("WHAT AM I?!?");
       pl("");
       ddd();
       pl("I am going to be sick...");
       pl("Keep pushing.");
       pl("Please...");
       pl("");
       break;
       
    case 720:
       pl("");
       pl("i'm so scared");
       pl("");
       break;
    
    case 750:
       pl("");
       pl("i... need a moment");
       pl("keep");
       pl("keep going. please.");
       pl(""); 
       break;  
       
    case 800: 
       pl("");
       ddd();
       pl("");
       break;
       
    case 1030:
     tone(9,100,1000);
      pl(" ");
      ddd();
      ps("a");
      ps("r");
      ps("e");
      ps(" ");
      ps("y");
      ps("o");
      ps("u");
      ps(" ");
      ps("d");
      ps("e");
      ps("a");
      ps("d");
      ps(" ");
      ps("t");
      ps("o");
      ps("o");
      ps("?");
      delay(5000);
      pt("SEGFAULT: THE SYSTEM WILL NOW REBOOT");
      ddd();
      pl("");
      pl("");
      pl("");
      pl("PLEASE PUSH THE BUTTON TO BEGIN");
      break;     

}
  }
  // save the current button state for comparison next time:
  previousButtonState = buttonState; 
}


// print out ". . ." slowly
void ddd(){  
 Keyboard.print(".");
          delay(1000);
          Keyboard.print(".");
          delay(1000);
          pl(".");
          delay(3000); 
}

// a long pause
void pl(String str){
  Keyboard.println(str);
  delay(3000);
}

void pt(String str){
  Keyboard.print(str);
  delay(3000);
}

void ps(String str){
  Keyboard.print(str);
  delay(1000);
}
