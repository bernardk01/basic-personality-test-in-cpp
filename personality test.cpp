//
//  main.cpp
//  personalitytest
//
//  Created by Bernard Kibathi on 5/14/18.
//  Copyright © 2018 Bernard Kibathi. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    cout<<"\t@@@@@@@@@@@@@@@@ Welcome to the personality test @@@@@@@@@@@@@@@@@@@\n\n\n";
    cout<<“\tEnter your answer in lowercase \n";
    
    
    char ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
    int ans1a,ans1b,ans1c,ans2a,ans2b,ans2c,ans2d,ans2e,ans3a,ans3b,ans3c,ans3d,ans3e,ans4a,ans4b,ans4c,ans4d,ans5a,ans5b,ans5c,ans5d,ans5e,ans6a,ans6b,ans6c,ans7a,ans7b,ans7c,ans8a,ans8b,ans8c,ans8d,ans8e,ans8f,ans8g,ans9a,ans9b,ans9c,ans9d,ans9e,ans10a,ans10b,ans10c,ans10d,ans10e,ans10f,score;
    
    
//    Execution
    
    cout<<"1. When do you feel your best? \n"<<" A)  in the morning\n"<<" B)  during the afternoon and early evening \n"<<" C)  late at night \n\n";
    cin>>ans1;
    
    
    cout<<"2.  You usually walk (how?)... \n"<<" A)  fairly fast, with long steps\n"<<" B)  fairly fast, with little steps \n"<<" C)  less fast head up, looking the world in the face\n"<<" D)  less fast, head down \n"<<" E)  very slowly\n\n";
    cin>>ans2;
    
    cout<<"3.  When you talk to people, you...\n"<<"A)  stand with your arms folded\n"<<"B)  have your hands clasped\n" <<"C)  have one or both your hands on your hips\n"<<"D)  touch or push the person to whom you are talking\n"<<"E)  play with your ear, touch your chin, or smooth your hair\n\n";
    cin>>ans3;
    
    cout<<"4.  When relaxing, you sit with...\n" <<"A)   your knees bent with your legs neatly side by side\n"  <<"B)  your legs crossed\n" <<"C)  your legs stretched out or straight\n"  <<"D)  one leg curled under you\n\n";
    cin>>ans4;
    
    cout<<"5.  When something really amuses you, you react with...\n" <<"A)  big appreciated laugh\n"  <<"B)  a laugh, but not a loud one\n" <<"C)  a quiet chuckle\n" <<"D)  a sheepish smile\n\n";
    cin>>ans5;
    
    cout<<"6.  When you go to a party or social gathering, you...\n" <<"A)  make a loud entrance so everyone notices you\n"  <<"B)  make a quiet entrance, looking around for someone you know\n"  <<"C)  make the quietest entrance, trying to stay unnoticed\n\n";
    cin>>ans6;
    
    cout<<"7.  You're working very hard, concentrating hard, and you're interrupted. You...\n"  <<"A)  welcome the break\n" <<"B)  feel extremely irritated\n"  <<"C)  vary between these two extremes\n\n";
    cin>>ans7;
    
    cout<<"8.  Which of the following colors do you like most?\n" <<"A)  Red or orange\n" <<"B)  black\n" <<"C)  yellow or light blue\n"  <<"D)  green\n"  <<"E)  dark blue or purple\n" <<"F)  white\n" <<"G)  brown or gray\n\n";
    cin>>ans8;
    
    cout<<"9.  When you are in bed at night, in those last few moments before going to sleep, you are...\n"  <<"A)  stretched out on your back\n"  <<"B)  stretched out face down on your stomach\n" <<"C)  on your side, slightly curled\n"  <<"D)  with your head on one arm\n"  <<"E)  with your head under the covers\n\n";
    cin>>ans9;
    
    cout<<"10.  You often dream that you are...\n" <<"A)  falling\n"  <<"B)  fighting or struggling\n" <<"C)  searching for something or somebody\n"  <<"D)  flying or floating\n"  <<"E)  you usually have dreamless sleep\n"  <<"F)  your dreams are always pleasant\n\n";
    cin>>ans10;
    
    //execution
    
    if (ans1=='a'){
        ans1=2;
        
        
    }
    else if(ans1=='b'){
        ans1=4;
    }
    else if(ans1=='c'){
        ans1=6;
    }
    else {
        cout<<" invalid input 1\n";
    }
    if (ans2=='a'){
        
        ans2=6;
    }
    else if(ans2=='b'){
        ans2=4;
    }
    else if(ans2=='c'){
        ans2=7;
    }
    else if(ans2=='d'){
        ans2=2;
    }
    else if(ans2=='e'){
        ans2=1;
    }
    else {
        cout<<" invalid input 2\n";
    }if (ans3=='a'){
        
        ans3=4;
        
    }
    else if(ans3=='b'){
        ans3=2;
    }
    else if(ans3=='c'){
        ans3=5;
    }
    else if(ans3=='d'){
        ans3=7;
    }
    else if(ans3=='e'){
        ans3=6;
    }
    else {
        cout<<" invalid input 3\n";
    }
    if (ans4=='a'){
        
        ans4=4;
        
    }
    else if(ans4=='b'){
        ans4=6;
    }
    else if(ans4=='c'){
        ans4=2;
    }
    else if(ans4=='d'){
        ans4=1;
    }
    
    else {
        cout<<" invalid input 4\n";
    }if (ans5=='a'){
        
        ans5=6;
        
    }
    else if(ans5=='b'){
        ans5=4;
    }
    else if(ans5=='c'){
        ans5=3;
    }
    else if(ans5=='d'){
        ans5=5;
    }
    else if(ans5=='e'){
        ans5=2;
    }
    else {
        cout<<" invalid input 5\n";
    }if (ans6=='a'){
        
        ans6=6;
        
    }
    else if(ans6=='b'){
        ans6=4;
    }
    else if(ans6=='c'){
        ans6=2;
    }
    else {
        cout<<" invalid input 6\n";
    }if (ans7=='a'){
        
        ans7=6;
        
    }
    else if(ans7=='b'){
        ans7=2;
    }
    else if(ans7=='c'){
        ans7=4;
    }
    else {
        cout<<" invalid input 7\n";
    }if (ans8=='a'){
        
        ans8=6;
        
    }
    else if(ans8=='b'){
        ans8=7;
    }
    else if(ans8=='c'){
        ans8=5;
    }
    else if(ans8=='d'){
        ans8=4;
    }else if(ans8=='e'){
        ans8=3;
    }
    else if(ans8=='f'){
        ans8=2;
    }
    else if(ans8=='g'){
        ans8=1;
    }
    else {
        cout<<" invalid input 8\n";
    }if (ans9=='a'){
        
        ans9=7;
        
    }
    else if(ans9=='b'){
        ans9=6;
    }
    else if(ans9=='c'){
        ans9=4;
    }
    else if(ans9=='d'){
        ans9=2;
    }
    else if(ans9=='e'){
        ans9=1;
    }
    else {
        cout<<" invalid input 9\n";
    }if (ans10=='a'){
        
        ans10=4;
        
    }
    else if(ans10=='b'){
        ans10=2;
    }
    else if(ans10=='c'){
        ans10=3;
    }
    else if(ans10=='d'){
        ans10=5;
    }else if(ans10=='e'){
        ans10=6;
    }else if(ans10=='f'){
        ans10=1;
    }
    else {
        cout<<" invalid input 10\n";
    }
    
    score=ans1+ans2+ans3+ans4+ans5+ans6+ans7+ans8+ans9+ans10;
    cout<<"Your score is "<<score<<"\n";
    
    if (score > 60){
        cout<<"\n\nOthers see you as someone they should 'handle with care.' You're seen as vain, self-centered, and who is extremely dominant.  Others may admire you, wishing they could be more like you, but don't always trust you, hesitating to become too deeply involved with you. ";
    }
    else if (score>=51 && score<=60){
        cout<<"\n\nOthers see you as an exciting, highly volatile, rather impulsive personality, a natural leader, who's quick to make decisions, though not always the right ones. They see you as bold and adventuresome, someone who will try anything once, someone who takes chances and enjoys an adventure. They enjoy being in your company because of the excitement you radiate. \n";
    }
    else if (score>=41 && score<=50){
        cout<<"\n\nOthers see you as fresh, lively, charming, amusing, practical, and always interesting; someone who's constantly in the center of attention, but sufficiently well balanced not to let it go to their head. They also see you as kind, considerate, and understanding; someone who'll always cheer them up and help them out.\n";
    }else if (score>=31 && score<=40){
        cout<<"\n\nOthers see you as sensible, cautious, careful and practical. They see you as clever, gifted, or talented, but modest. Not a person who makes friends too quickly or easily, but someone who's extremely loyal to friends you do make and who expects the same loyalty in return. Those who really get to know you, realize it takes a lot to shake your trust in your friends, but equally that it takes you a long time to get over if that trust is ever broken. \n";
    }else if (score>=21 && score<=30){
        cout<<"\n\nYour friends see you as painstaking and fussy. They see you as very cautious, extremely careful, a slow and steady plodder. It would really surprise them if you ever did something impulsively or on the spur of the moment, expecting you to examine everything carefully from every angle and then, usually decide against it. They think this reaction is caused partly by your careful nature.\n";
    }else if (score<21){
        cout<<"\n\nPeople think you are shy, nervous, and indecisive, someone who needs looking after, who always wants someone else to make the decisions and who doesn't want to get involved with anyone or anything. They see you as a worrier who always sees problems that don't exist. Some people think you're boring. Only those who know you well, know that you aren't.\n";
    }
    else{
        cout<<"invalid user input hit refresh !!\n";
    }
    
    cout<<"\n\n\n DISCLAIMER!! @@@@@  Remember, this only a sample test. It it not an absolute reflection of you or your personality. It simply allows you to understand how others may view you... as a friend, as an associate, as a quality resource, as a soulmate, etc. Hopefully it helped make you feel better about yourself.Now share this with others, and let them understand how others may perceive them.   @@@@\t\n";
    return 0;
    
    

}



